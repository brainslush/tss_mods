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

private _collectConfig = {
    params[["_property", "", [""]]];
    private _class = ["Cfg", _property] joinString "";
    _property = toLower _property;
    private _hasExcludent = false;
    private _list = [];
    TRACE_3("",_class,_property,_hasExcludent);
    // run through config and save into profilespace variables
    {
        private _collectionName = configName _x;
        {
            private _type = configName _x;
            private _namespaceQ = ["TSS", _property, _collectionName, _type] joinString "_";
            profileNamespace setVariable [_namespaceQ,[]];
            private _test = configProperties [_x, "true", true];
            {
                private _configPath = _x;
                private _exclude = isNumber(_x >> "excludeOnAlternative") && {getNumber(_x >> "excludeOnAlternative")};
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
                TRACE_4("",_namespaceQ,_exclude,_configPath,_varContent);
                profileNamespace setVariable [_namespaceQ, _varContent];
                _list append _varContent;
                // handle magazines
                /*
                TODO: default magazine for different muzzles and
                do the same for cba_fnc_compatibleMagazines
                */
                if (_property in ["primary", "secondary", "launcher"]) then {
                    private _defaultMagazines = if (isArray(_configPath >> "DefaultMagazines")) then {
                        getArray(_configPath >> "DefaultMagazines");
                    } else {[]};
                    private _defaultMagazinesCount = count _defaultMagazines;
                    private _allowed = if (isArray(_configPath >> "AllowedMagazineMods")) then {
                        getArray(_configPath >> "AllowedMagazineMods");
                    } else {[]};
                    _allowed = _allowed apply {toLower _x};
                    {
                        // create magazine list per weapon
                        private _weapon = _x;
                        {
                            private _magazines = if (!(_defaultMagazines isEqualTo [])) then {
                                [_defaultMagazines select (_forEachIndex max 0 min _defaultMagazinesCount)];
                            } else {[]};
                            {
                                private _dlc = if (isText(configFile >> "CfgMagazines" >> _x >> "dlc")) then {
                                    getText(configFile >> "CfgMagazines" >> _x >> "dlc");
                                } else {""};
                                if (_allowed isEqualTo [] || {_dlc in _allowed}) then {
                                    _magazines pushBackUnique _x;
                                };
                            } forEach [_x] call CBA_fnc_compatibleMagazines;
                            _magazineList append _magazines;
                            profileNamespace setVariable [["TSS_Magazines", _weapon, _forEachIndex] joinString "_", _magazines];
                        } forEach (_x call CBA_fnc_getMuzzles);
                    } forEach _varContent;
                };
                // handle allowed subproperties
                {
                    private _varName = ["TSS", [_property, _x] joinString "", _collectionName, _type] joinString "_";
                    switch (true) do {
                        case isArray(_configPath >> _x) : {
                            profileNamespace setVariable [_varName,getArray(_configPath >> _x)];
                        };
                        case isNumber(_configPath >> _x) : {
                            profileNamespace setVariable [_varName,getNumber(_configPath >> _x)];
                        };
                        case isText(_configPath >> _x) : {
                            profileNamespace setVariable [_varName,getText(_configPath >> _x)];
                        };
                        default {};
                    };
                } forEach ["Muzzles", "Lasers", "Optics"];
            } forEach configProperties [_x, "isClass(_x)", true];
        } forEach configProperties [_x, "isClass(_x)", true];
    } forEach configProperties [configFile >> "CfgTSSLoadouts" >> _class, "isClass(_x)", true];
    _list;
};

// check if we got a new version
private _modVersion = getText(configFile >> "CfgPatches" >> QUOTE(ADDON) >> "version");
private _savedVersion = GETPRVAR(GVAR(gearVersion),"");
private _ignoreVersionCheck = IGNOREVERSIONCHECK;
TRACE_3("",_modVersion,_savedVersion,_ignoreVersionCheck);
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
    _itemList append (["Belts"] call _collectConfig);
    _itemList append (["Glasses"] call _collectConfig);
    _itemList append (["Nvgs"] call _collectConfig);
    _itemList append (["Binoculars"] call _collectConfig);
    _attachmentList append (["Optics"] call _collectConfig);
    _attachmentList append (["Lasers"] call _collectConfig);
    _attachmentList append (["Muzzles"] call _collectConfig);
    _attachmentList append (["Bipods"] call _collectConfig);
    _itemList append (["Items"] call _collectionConfig);

    SETPRVAR(GVAR(gearVersion),_modVersion);
    SETPRVAR(GVAR(weaponList),_weaponList);
    SETPRVAR(GVAR(gearList),_gearList);
    SETPRVAR(GVAR(itemList),_itemList);

    _magazineList = _magazineList arrayIntersect _magazineList;
    SETPRVAR(GVAR(magazineList),_magazineList);
};
