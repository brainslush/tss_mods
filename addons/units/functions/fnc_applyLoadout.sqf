#include "script_component.hpp"
/*
 * Author: brainslush
 * Save equipment choices after personal arsenal was closed.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call tss_mods_units_fnc_applyLayout
 *
 * Public: No
*/

params[["_unit", objNull]];

private _type = typeOf _unit;
private _configPath = configFile >> "CfgVehicles" >> _type;
([_unit] call FUNC(getUnitParameters)) params [
    "_unitg", "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle", "_3denBipod"
];
private _modset = MODSET;

//TRACE_7("data",_configPath,_unitc,_3denCamo,_3denDaynight,_3denBackpack,_3denMuzzle,_modset);

// gather config groups
private _getConfig = {
    params [
        "_configPath",
        "_property",
        "_type",
        ["_configType", ""]];

    //TRACE_4("",_configPath,_property,_type,_configType);

    private _availableList = [];
    private _groupList = [];

    private _configEntry = if (_configType isEqualTo "") then {
        getArray(_configPath >> (["tss", _property] joinString "_"));
    } else {
        getArray(_configPath >> (["tss", _configType] joinString "_"));
    };
    //TRACE_1("",_configEntry);
    {
        if (!(_x isEqualTo "")) then {
            if (_x isEqualType []) then {
                _x params ["_class", "_data"];
                private _varName = ["TSS", MODSET, _property, _class, _type] joinString "_";
                _availableList pushBack [(profileNamespace getVariable [_varName, []]), _data];
                _groupList pushBack _class;
            } else {
                private _varName = ["TSS", MODSET, _property, _x, _type] joinString "_";
                private _content = profileNamespace getVariable [_varName, []];
                private _size = count _content;
                _availableList append _content;
            };
        };
    } forEach _configEntry;
    _availableList;
};

private _getData = {
    params [
        "_configPath",
        "_property",
        "_type",
        ["_saveVar", "", [""]],
        ["_arsenalList", "", [""]]];

    ([_configPath, _property, _type] call _getConfig) params [
        ["_availableList", [], [[]]],
        ["_groupList", [], [[]]]
    ];
    
    //TRACE_2("dataList",_availableList,_groupList);

    // append arsenal whitelist
    if (_arsenalList != "") then {
        private _varName = ["tss_arsenalList", _arsenalList] joinString "_";
        private _whitelist = missionNamespace getVariable [_varName,[]];
        _whitelist append _availableList;
        missionNamespace setVariable [_varNAme,_whiteList];
    };
    _availableList = _availableList apply {toLower _x};

    // check if item is in list, if not revert to default
    if (_availableList isEqualTo []) then {
        ["", ""];
    } else {
        private _default = _availableList select 0;
        TRACE_1("",);
        private _item = if (_saveVar != "") then {
            private _savedGear = if (tolower _saveVar == "itemgroup") then {
                if (count _groupList == 1) then {
                    TRACE_2("",_property,_groupList select 0);
                    LOADGEARITEM(_property,_groupList select 0,_type,_default);
                } else {
                    _default;
                };
            } else {
                LOADGEARITEM(_property,_saveVar,_type,_default);
            };
            private _findId = _availableList find (toLower _savedGear);
            TRACE_4("",_findId,_savedGear,_availableList,_groupList);
            if (_findId == -1) then {
                [_default, _groupList select 0];
            } else {
                [_savedGear, _groupList select _findId];
            };
        } else {
            [_default, _groupList select 0];
        };
        _item;
    };
};

// weapon attachments sub function
private _getAttachment = {
    params [
        "_property",
        "_subproperty",
        "_type",
        "_weaponGroup"
    ];
    _property = toLower _property;
    //TRACE_4("attachment",_property,_subproperty,_type,_weaponGroup);
    private _combinedProperty = [_property, _subproperty] joinString "";
    // get name of wepaon group
    private _varName = ["TSS", MODSET, _combinedProperty, _weaponGroup] joinString "_";
    private _className = profileNamespace getVariable [_varName, ""];
    // get attachments for the weapon group
    _varName = ["TSS", MODSET, _subproperty, _className, _type] joinString "_";
    private _availableList = profileNamespace getVariable [_varName, []];
    // save for arsenal
    private _whitelist = GETMVAR(tss_arsenalList_unit,[]);
    _whitelist append _availableList;
    SETMVAR(tss_arsenalList_unit,_whiteList);
    private _return = if (_availableList isEqualTo []) then {
        "";
    } else {
        private _default =  _availableList select 0;
        private _item = if (_weaponGroup != "") then {
            private _savedGear = LOADGEARITEM(_weaponGroup,_combinedProperty,_type,_default);
            private _findId = _availableList find (toLower _savedGear);
            if (_findId == -1) then {
                _default;
            } else {
                _savedGear;
            };
        } else {
            _default;
        };
        _item;
    };
    //TRACE_1("",_return);
    _return;
};

// handle weapon
private _getWeapon = {
    params [
        "_configPath", 
        "_property",
        "_camo",
        "_daynight",
        "_muzzle",
        "_unitc"];

    //TRACE_6("getWeapon",_configPath,_property,_camo,_daynight,_muzzle,_unitc);

    ([_configPath, _property, _camo, "itemgroup", "unit"] call _getData) params [["_weapon","",[""]], ["_weaponGroup","",[""]]];
    //private _savedWeapon = LOADGEARITEM(_property,_weaponGroup,_camo,_weapon);
    private _weaponArray = [_weapon];
    // get muzzles, optics, lasers modules
    _weaponArray pushBack ([_property, "Muzzles", _muzzle, _weaponGroup] call _getAttachment);
    _weaponArray pushBack ([_property, "Lasers", _daynight, _weaponGroup] call _getAttachment);
    _weaponArray pushBack ([_property, "Optics", _daynight, _weaponGroup] call _getAttachment);
    // get magazines
    
    {
        private _varName = ["TSS_Magazines", MODSET, _weapon, _forEachIndex] joinString "_";
        private _array = profileNamespace getVariable [_varName, []];
        private _forEachName = _x;
        TRACE_2("Magazine",_varName,_array);
        if (_array isEqualTo []) then {
            _weaponArray pushBack [];
        } else {
            private _magazine = _array select 0;
            private _count = getNumber(configFile >> "CfgMagazines" >> _magazine >> "count");
            _weaponArray pushBack [_magazine, _count];
            private _varName = [QUOTE(ADDON), _property, _forEachName] joinString "_";
            TRACE_1("",_varName);
            missionNamespace setVariable [
                _varName, _magazine
            ];
        };
    } forEach ["Magazines","Grenades"];
    _weaponArray pushBack ([_property, "Bipods", _daynight, _weaponGroup] call _getAttachment);
    _weaponArray;
};

// handle content of container
private _getContainerContent = {
    params ["_configPath", "_property", "_daynight", "_unitc"];
    ([_configPath, "Items", _daynight, [_property, "Content"] joinString "" ] call _getConfig) params ["_items", "_groupNames"];
    //TRACE_1("",_items);
    private _index = 0;
    private _completeList = [];
    {
        _x params [
            ["_itemlist", [], [[],""]],
            ["_data", ""]
        ];
        if (_itemlist isEqualType []) then {
            {
                private _item = _x;
                if (_item isEqualType "") then {
                    _item = toLower _item;
                    switch (_item) do {
                        case "primarymagazines": {
                            _item = missionNamespace getVariable [
                                QUOTE(ADDON) + "_primaries_Magazines", ""
                            ];
                        };
                        case "primarygrenades": {
                            _item = missionNamespace getVariable [
                                QUOTE(ADDON) + "_primaries_Grenades", ""
                            ];
                        };
                        case "secondarymagazines": {
                            _item = missionNamespace getVariable [
                                QUOTE(ADDON) + "_secondaries_Magazines", ""
                            ];
                        };
                        case "launchermagazines": {
                            _item = missionNamespace getVariable [
                                QUOTE(ADDON) + "_launchers_Magazines", ""
                            ];
                        };
                    };
                };
                private _multiplier = 1;
                if (_item isEqualType []) then {
                    _item params ["_itemtype", "_count"];
                    _item = toLower _itemtype;
                    _multiplier = _count;
                };
                private _dataR = if (_data isEqualType []) then {
                    _data params ["_type", "_value"];
                    _type = toLower _type;
                    if (_type == "count") exitWith {
                        _value * _multiplier;
                    };
                    if (_type == "weight") exitWith {
                        if (_multiplier != -1) then {
                            if (isNumber(getNumber(configFile >> "CfgMagazines" >> _item >> "mass"))) then {
                                private _mass = getNumber(configFile >> "CfgMagazines" >> _item >> "mass");
                                private _count = floor(_value / _mass);
                                _count;
                            } else {
                                1;
                            };
                        } else {
                            private _str = [
                                "In Class ",
                                _type,
                                " wurde Gewichtsberechnung auf ",
                                _groupNames select _index,
                                " Loadoutklasse angewendet"
                            ] joinString " ";
                            ERROR_WITH_TITLE("Loadoutfehler",_str);
                            _item = "";
                            0;
                        };
                    };
                    if (_type == "script") exitWith {
                        if (_multiplier != -1) then  {
                            [_item] call compile _value;
                        } else {
                            private _str = [
                                "In Class ",
                                _type,
                                " wurde Script auf ",
                                _groupNames select _index,
                                " Loadoutklasse angewendet"
                            ] joinString " ";
                            ERROR_WITH_TITLE("Loadoutfehler",_str);
                            _item = "";
                            0;
                        };
                    };
                } else {
                    if (_data isEqualType 0) then {
                        _data * _multiplier;
                    } else {
                        0;
                    };
                };
                private _return = if (isNumber(configFile >> "CfgMagazines" >> _item >> "count")) then {
                    private _count = getNumber(configFile >> "CfgMagazines" >> _item >> "count");
                    [_item, _dataR, _count];
                } else {
                    [_item, _dataR];
                };
                _completeList pushBack _return;
            } forEach _itemlist;
        } else {
            _completeList pushBack _x;
        };
    } forEach _items;
    //TRACE_1("",_completeList);
    _completeList;
};

private _getContainer = {
    params ["_configPath", "_property", "_camo", "_daynight", "_size", "_unitc"];
    //TRACE_7("getContainer",_configPath,_property,_camo,_daynight,_size,_arsenal,_unitc);
    private _result = [_configPath, _property, _daynight, _unitc] call _getContainerContent;

    private _container = if (_property == "Backpacks") then {
        ([_configPath, _property, _size, _unitc, "unit"] call _getData) select 0;
    } else {
        ([_configPath, _property, _camo, _camo, "unit"]  call _getData) select 0;
    };

    private _return = [_container];
    _return pushBack _result;
    //TRACE_1("",_return);
    _return;
};

private _loadout = [];
// rifle slot
_loadout pushBack ([_configPath, "Primaries", _3denCamo, _3denDaynight, _3denMuzzle, _unitc] call _getWeapon);
// launcher slot
_loadout pushBack ([_configPath, "Launchers", _3denCamo, _3denDaynight, _3denMuzzle, _unitc] call _getWeapon);
// pistol slot
_loadout pushBack ([_configPath, "Secondaries", _3denCamo, _3denDaynight, _3denMuzzle, _unitc] call _getWeapon);
// containers
_loadout pushBack ([_configPath, "Uniforms", _3denCamo, _3denDaynight, "", _unitc] call _getContainer);
_loadout pushBack ([_configPath, "Vests", _3denCamo, _3denDaynight, "", _unitc] call _getContainer);
_loadout pushBack ([_configPath, "Backpacks", _3denCamo, _3denDaynight, _3denBackpack, _unitc] call _getContainer);
_loadout pushBack ([_configPath, "Helmets", _3denCamo, _unitc, "unit"] call _getData select 0);
_loadout pushBack ([_configPath, "Glasses", _3denCamo, _unitc, "unit"] call _getData select 0);
_loadout pushBack ([([_configPath, "Binoculars", _3denDaynight] call _getData) select 0, "", "", "", [], [], ""]);
_loadout pushBack [
    ([_configPath, "Maps", "all", "", "unit"] call _getData) select 0, // Map
    ([_configPath, "GPS", "all", "", "unit"] call _getData) select 0, // GPS
    "",
    ([_configPath, "Compass", "all", "", "unit"] call _getData) select 0, // Compass
    ([_configPath, "Watches", "all", "", "unit"] call _getData) select 0, // Watch
    ([_configPath, "NVGs", _3denDaynight, _unitc, "unit"] call _getData) select 0 // NVG
];
TRACE_1("loadout",_loadout);
// containers
_unit setUnitLoadout _loadout;
