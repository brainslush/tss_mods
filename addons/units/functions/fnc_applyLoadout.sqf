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
    "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle"
];
private _modset = parsingNamespace getVariable QGVARMAIN(Modset);

TRACE_7("data",_configPath,_unitc,_3denCamo,_3denDaynight,_3denBackpack,_3denMuzzle,_modset);

private _primaryMagazines = "";
private _primaryGrenades = "";
private _secondaryMagazines = "";
private _launcherMagazines = "";

// gather config groups
private _getConfig = {
    params [
        "_configPath",
        "_property",
        "_type",
        ["_configType", ""]];

    TRACE_4("",_configPath,_property,_type,_configType);

    private _availableList = [];
    private _groupList = [];

    private _configEntry = if (_configType isEqualTo "") then {
        getArray(_configPath >> (["tss", _property] joinString "_"));
    } else {
        getArray(_configPath >> (["tss", _configType] joinString "_"));
    };
    TRACE_1("",_configEntry);
    {
        if (_x isEqualType []) then {
            _x params ["_class", "_data"];
            private _varName = ["TSS", _property, _class, _type] joinString "_";
            _availableList append [(profileNamespace getVariable [_varName, []]), _data];
            _groupList pushBack _class;
        } else {
            private _varName = ["TSS", _property, _x, _type] joinString "_";
            _availableList append (profileNamespace getVariable [_varName, []]);
            _groupList pushBack _x;
        };
    } forEach _configEntry;
    [_availableList, _groupList];
};

private _getData = {
    params [
        "_configPath",
        "_property",
        "_type",
        ["_saveVar", ""],
        ["_arsenalList", ""]];

    ([_configPath, _property, _type] call _getConfig) params ["_availableList", "_groupList"];
    
    TRACE_2("dataList",_availableList,_groupList);

    // append arsenal whitelist
    if (_arsenalList != "") then {
        private _varName = ["tss_arsenalList", _arsenalList] joinString "_";
        private _whitelist = GETMVAR(_varName,[]);
        _whitelist append _availableList;
        SETMVAR(_varNAme,_whiteList);
    };
    
    // check if item is in list, if not revert to default
    private _default = _availableList select 0;
    private _item = if (_saveVar != "") then {
        private _savedGear = profileNamespace getVariable [["TSS", _saveVar, _modset, _property, _type] joinString "_", _default];
        private _findId = _availableList find (toLower _savedGear);
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

// weapon attachments sub function
private _getAttachment = {
    params [
        "_configPath",
        "_property",
        "_daynight",
        "_weaponGroup"
    ];
    _property = toLower _property;
    private _subProperty = [_property, _x] joinString "";
    ([_configPath, _subProperty, _daynight, _weaponGroup, "unit"] call _getData) params ["_item"];
    _item;
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

    TRACE_6("getWeapon",_configPath,_property,_camo,_daynight,_muzzle,_unitc);

    ([_configPath, _property, _camo, _unitc, "unit"] call _getData) params [["_weapon","",[""]], ["_weaponGroup","",[""]]];
    private _weaponArray = [_weapon];
    // get muzzles, optics, lasers modules
    _weaponArray pushBack ([_configPath, "Muzzles", _muzzle, _weaponGroup] call _getAttachment);
    _weaponArray pushBack ([_configPath, "Optics", _daynight, _weaponGroup] call _getAttachment);
    _weaponArray pushBack ([_configPath, "Lasers", _daynight, _weaponGroup] call _getAttachment);
    // get magazines
    for _i from 0 to 1 do {
        private _array = profileNamespace getVariable [["TSS_Magazines", _weapon, _index] joinString "_",[]];
        if (!(_array isEqualTo [])) then {
            private _magazine = _array select 0;
            private _count = getNumber(configFile >> "CfgMagazines" >> _magazine >> "count");
            _weaponArray pushBack [_magazine, _count];
        } else {
            _weaponArray pushBack [];
        };
    };
    _weaponArray pushBack ([_configPath, "Bipods", _daynight, _weaponGroup] call _getAttachment);
    _weaponArray;
};

// handle content of container
private _getContainerContent = {
    params ["_configPath", "_property", "_daynight", "_unitc"];
    ([_configPath, "Items", _daynight, [_property, "Content"] joinString "" ] call _getConfig) params ["_items", "_groupNames"];
    TRACE_1("",_items);
    private _index = 0;
    private _items = _items apply {
        _x params [
            "_item",
            ["_data", ""]];
        private _multiplier = -1;
        if (_item isEqualType "") then {
            _item = toLower _item;
            switch (_item) do {
                case "primarymagazines": {
                    _item = _primaryMagazines;
                };
                case "primarygrenades": {
                    _item = _primaryGrenades;
                };
                case "secondarymagazines": {
                    _item = _secondaryMagazine;
                };
                case "launchermagazines": {
                    _item = _launcherMagazine;
                };
            };
        };
        if (_item isEqualType []) then {
            _item params ["_itemtype", "_count"];
            _item = toLower _itemtype;
            _multiplier = _count;
        };
        if (_data isEqualType []) then {
            _data params ["_type", "_value"];
            if (_type == "count") exitWith {
                if (_multiplier == -1) then {
                    [_item, _value];
                } else {
                    [_item, _value * _multiplier];
                };
            };
            if (_type == "weight") exitWith {
                if (_multiplier != -1) then {
                    if (isNumber(getNumber(configFile >> "CfgMagazines" >> _item >> "mass"))) then {
                        private _mass = getNumber(configFile >> "CfgMagazines" >> _item >> "mass");
                        private _count = floor(_value / _mass);
                        [_item, _count];
                    } else {
                        [_item, 1];
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
                    ["", 0];
                };
            };
            if (_type == "script") exitWith {
                if (_multiplier != -1) then  {
                    _item call compile _value;
                } else {
                    private _str = [
                        "In Class ",
                        _type,
                        " wurde Script auf ",
                        _groupNames select _index,
                        " Loadoutklasse angewendet"
                    ] joinString " ";
                    ERROR_WITH_TITLE("Loadoutfehler",_str);
                    ["", 0];
                };
            };
        } else {
            [_item, _data];
        };
    };
    TRACE_1("",_items);
    _items;
};

private _getBackpack = {
    params ["_configPath", "_property", "_camo", "_size", "_arsenal", "_volume"];
};

private _getContainer = {
    params ["_configPath", "_property", "_camo", "_daynight", "_size", "_arsenal", "_unitc"];
    TRACE_7("getContainer",_configPath,_property,_camo,_daynight,_size,_arsenal,_unitc);
    private _result = [_configPath, _property, _daynight, _unitc] call _getContainerContent;

    private _container = if (_property == "Backpacks") then {
        ([_configPath, _property, _size, _unitc, "unit"] call _getData) select 0;
    } else {
        ([_configPath, _property, _camo, _camo, "unit"]  call _getData) select 0;
    };

    private _return = [_container];
    _return pushBack _result;
    TRACE_1("",_return);
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
_loadout pushBack ([_configPath, "Uniforms", _3denCamo, _3denDaynight, "", _unitc, _unitc] call _getContainer);
_loadout pushBack ([_configPath, "Vests", _3denCamo, _3denDaynight, "", _unitc, _unitc] call _getContainer);
_loadout pushBack ([_configPath, "Backpacks", _3denCamo, _3denDaynight, _3denBackpack, _unitc, _unitc] call _getContainer);
_loadout pushBack ([_configPath, "Helmets", _3denCamo, _unitc, "unit"] call _getData);
_loadout pushBack ([_configPath, "Glasses", _3denCamo, _unitc, "unit"] call _getData);
_loadout pushBack ([([_configPath, "Binoculars", _3denDaynight] call _getData) select 0, "", "", "", [], [], ""]);
_loadout pushBack [
    ([_configPath, "Maps", _3denDaynight] call _getData) select 0, // Map
    ([_configPath, "GPS", _3denDaynight] call _getData) select 0, // GPS
    "",
    ([_configPath, "Compass", _3denDaynight] call _getData) select 0, // Compass
    ([_configPath, "Watches", _3denDaynight] call _getData) select 0, // Watch
    ([_configPath, "NVGs", _3denDaynight, _unitc, "unit"] call _getData) select 0 // NVG
];
TRACE_1("loadout",_loadout);
// containers
_unit setUnitLoadout _loadout;
