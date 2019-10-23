#include "script_component.hpp"
/*
 * Author: brainslush
 * Collect layout classes
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_gatherEquip
 *
 * Public: No
*/

private _magazineList = [];
private _initStartTime = diag_tickTime;

private _collectConfig = {
    params[["_property", "", [""]]];
    private _class = ["Cfg", _property] joinString "";
    _property = toLower _property;
    private _hasExcludent = false;
    private _list = [];
    //TRACE_3("",_class,_property,_hasExcludent);
    // run through config and save into profilespace variables
    {
        private _collectionName = configName _x;
        private _configPathA = _x;
        {
            private _type = configName _x;
            private _namespaceQ = ["TSS", MODSET ,_property, _collectionName, _type] joinString "_";
            profileNamespace setVariable [_namespaceQ,[]];
            private _test = configProperties [_x, "true", true];
            {
                private _configPath = _x;
                private _exclude = isNumber(_x >> "excludeOnAlternative") && {getNumber(_x >> "excludeOnAlternative") == 1};
                private _varContent = profileNamespace getVariable [_namespaceQ,[]];
                if (_varContent isEqualTo []) then {
                    if (_exclude) then {
                        _hasExcludent = true;
                    };
                    _varContent = getArray(_x >> _property);
                } else {
                    if (_hasExcludent) then {
                        if (!_exclude) then {
                            _hasExcludent = false;
                            _varContent = getArray(_x >> _property);
                        } else {
                            _varContent append getArray(_x >> _property);
                        };
                    } else {
                        if (!_exclude) then {
                            _varContent append getArray(_x >> _property);
                        };
                    };
                };
                //TRACE_4("",_namespaceQ,_exclude,_configPath,_varContent);
                profileNamespace setVariable [_namespaceQ, _varContent];
                _list append _varContent;

                // handle magazines
                if (_property in ["primaries", "secondaries", "launchers"]) then {
                    // get default magazine
                    private _defaultMagazines = if (isArray(_configPath >> "defaultMagazines")) then {
                        getArray(_configPath >> "defaultMagazines");
                    } else {[]};
                    private _defaultMagazinesCount = count _defaultMagazines;

                    // get magazines ammo count range
                    private _magazineRanges = if (isArray(_configPath >> "magazineRange")) then {
                        getArray(_configPath >> "magazineRange");
                    } else {[]};
                    private _magazineRangesCount = count _magazineRanges;
                    //TRACE_2("",_configPath,_magazineRanges);

                    // get allowed magazineMods
                    private _allowed = if (isArray(_configPath >> "allowedMagazineMods")) then {
                        getArray(_configPath >> "allowedMagazineMods");
                    } else {[]};

                    // get allowed greandeMods
                    private _allowedGrenades = if (isArray(_configPath >> "allowedGrenadeMods")) then {
                        getArray(_configPath >> "allowedGrenadeMods");
                    } else {[]};

                    _allowed = _allowed apply {toLower _x};
                    _allowedGrenades = _allowedGrenades apply {toLower _x};
                    private _allowedArray = [_allowed, _allowedGrenades];
                    {
                        // create magazine list per weapon
                        private _weapon = _x;
                        private _varNameWeapon = ["TSS_Magazines", MODSET, _collectionName, _x] joinString "_";
                        private _weaponMagazines = profileNamespace getVariable (_varNameWeapon + "_0");
                        private _weaponGrenades = profileNameSpace getVariable (_varNameWeapon + "_1");

                        if (VERSIONCHECK || {isNil "_weaponMagazines" || {isNil "_weaponGrenades"}}) then {
                            private _muzzles = [_x] call CBA_fnc_getMuzzles;

                            {
                                private _muzzleIndex = _forEachIndex;

                                private _muzzleCfg = configFile >> "CfgWeapons" >> _weapon >> _x;
                                if (isClass (configFile >> "CfgWeapons" >> _x)) then {
                                    _muzzleCfg = configFile >> "CfgWeapons" >> _x;
                                };

                                private _magazines = if (!(_defaultMagazines isEqualTo [])) then {
                                    [_defaultMagazines select (_forEachIndex max 0 min _defaultMagazinesCount)];
                                } else {[]};
                                private _compatibleMagazines = [_muzzleCfg] call CBA_fnc_compatibleMagazines;
                                //TRACE_1("",_compatibleMagazines);

                                private _minRange = if (_forEachIndex < _magazineRangesCount) then {(_magazineRanges select _forEachIndex) select 0} else {0};
                                private _maxRange = if (_forEachIndex < _magazineRangesCount) then {(_magazineRanges select _forEachIndex) select 1} else {9999};
                                private _index = _forEachIndex;
                                //TRACE_2("",_minRange,_maxRange);

                                {
                                    private _dlc = if (isText(configFile >> "CfgMagazines" >> _x >> "dlc")) then {
                                        getText(configFile >> "CfgMagazines" >> _x >> "dlc");
                                    } else {
                                        if (isText(configFile >> "CfgMagazines" >> _x >> "author")) then {
                                            getText(configFile >> "CfgMagazines" >> _x >> "author");
                                        } else {
                                            "";
                                        };
                                    };
                                    if (
                                        (_allowedArray select _muzzleIndex) isEqualTo [] || 
                                        {_dlc in (_allowedArray select _muzzleIndex) || 
                                        {toLower (([_x, "_"] call CBA_fnc_split) select 0) in (_allowedArray select _muzzleIndex)}}
                                    ) then {
                                        private _ammoCount = getNumber(configFile >> "CfgMagazines" >> _x >> "count");
                                        if (_minRange <= _ammoCount && {_ammoCount <= _maxRange}) then {
                                            _magazines pushBackUnique _x;
                                        };
                                    };
                                } forEach _compatibleMagazines;

                                _magazineList append _magazines;
                                profileNamespace setVariable [[_varNameWeapon, _forEachIndex] joinString "_", _magazines];
                            } forEach _muzzles;
                        };
                    } forEach _varContent;
                };
                // save item group
                {
                    private _varName = ["TSS_ItemGroup", MODSET, _x] joinString "_";
                    private _itemGroupArray = profileNamespace getVariable [_varName, []];
                    if (_itemGroupArray isEqualType "") then {_itemGroupArray = []};
                    _itemGroupArray pushBack _collectionName;
                    profileNamespace setVariable [_varName, _itemGroupArray];
                } forEach _varContent;
            } forEach configProperties [_x, "isClass(_x)", true];
        } forEach configProperties [_x, "isClass(_x)", true];
        // handle allowed subproperties
        if (_property in ["primaries", "secondaries", "launchers"]) then {
            {
                //TRACE_2("",_configPath,_x);
                private _isText = isText(_configPathA >> _x); 
                if (_isText) then {
                    private _varName = ["TSS", MODSET,[_property, _x] joinString "", _collectionName] joinString "_";
                    private _varContent = getText(_configPathA >> _x);
                    //TRACE_2("",_varName,_varContent);
                    profileNamespace setVariable [_varName, _varContent];
                };
            } forEach ["muzzles", "lasers", "optics", "bipods"];
        };
    } forEach configProperties [configFile >> "CfgTSSLoadouts" >> _class, "isClass(_x)", true];
    _list;
};

// check if we got a new version
private _modVersion = getText(configFile >> "CfgPatches" >> QUOTE(ADDON) >> "version");
private _savedVersion = GETPRVAR(GVAR(gearVersion),"");
private _ignoreVersionCheck = IGNOREVERSIONCHECK;
//TRACE_3("",_modVersion,_savedVersion,_ignoreVersionCheck);
private _gather = _modVersion != _savedVersion || {IGNOREVERSIONCHECK};
if (_modVersion != _savedVersion || {IGNOREVERSIONCHECK}) then {
    // collect existing gear
    private _weaponList = [];
    private _gearList = [];
    private _attachmentList = [];
    private _itemList = [];
    _gearList append (["Uniforms"] call _collectConfig);
    _gearList append (["Vests"] call _collectConfig);
    _gearList append (["Backpacks"] call _collectConfig);
    _gearList append (["Helmets"] call _collectConfig);
    _weaponList append (["Primaries"] call _collectConfig);
    _weaponList append (["Secondaries"] call _collectConfig);
    _weaponList append (["Launchers"] call _collectConfig);
    _itemList append (["Glasses"] call _collectConfig);
    _itemList append (["Binoculars"] call _collectConfig);
    _itemList append (["Maps"] call _collectConfig);
    _itemList append (["GPS"] call _collectConfig);
    _itemList append (["Compass"] call _collectConfig);
    _itemList append (["Watches"] call _collectConfig);
    _itemList append (["Nvgs"] call _collectConfig);
    _attachmentList append (["Optics"] call _collectConfig);
    _attachmentList append (["Lasers"] call _collectConfig);
    _attachmentList append (["Muzzles"] call _collectConfig);
    _attachmentList append (["Bipods"] call _collectConfig);
    _itemList append (["Items"] call _collectConfig);

    SETPRVAR(GVAR(gearVersion),_modVersion);
    SETPRVAR(GVAR(weaponList),_weaponList);
    SETPRVAR(GVAR(gearList),_gearList);
    SETPRVAR(GVAR(itemList),_itemList);
    SETPRVAR(GVAR(attachmentList),_attachmentList);

    _magazineList = _magazineList arrayIntersect _magazineList;
    SETPRVAR(GVAR(magazineList),_magazineList);
};

INFO_2("Finished loadout config initialization in %1 seconds [Cached: %2]", (diag_tickTime - _initStartTime) toFixed 2, !_gather);
