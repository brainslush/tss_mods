#include "script_component.hpp"

params[["_unit",""]];

private _configPath = configFile >> "CfgVehicles" >> typeOf _unit;

// get misison & unit parameters
private _3denCamo = missionNamespace getVariable [QGVARMAIN(3den_camo),"mdt"];
private _3denDaynight = missionNamespace getVariable [QGVARMAIN(3den_daynight),"all"];
private _3denBackpack = missionNamespace getVariable [QGVAR(3den_backpack), "large"];
private _3denUnitBackpack = _unit getVariable [QGVAR(3den_backpack), ""];
_3denBackpack = if (_3denUnitBackpack != "") then {_3denUnitBackpack};
private _3denUnitMuzzle = unit getVariable [QGVAR(3den_muzzle)];

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

    private _availableList = [];
    private _groupList = [];

    private _configEntry = if (_configType isEqualTo "") then {
        getArray(_configPath >> ["tss", _property] joinString "_");
    } else {
        getArray(_configPath >> ["tss", _configType] joinString "_");
    };
    {
        if (_x isEqualType []) then {
            _x params ["_class", "_data"];
            private _varName = ["TSS", _property, _class, _type] joinString "_";
            _availableList append [(profileNamespace getVariable [_varName, []]), _data];
            _groupList append _class;
        } else {
            private _varName = ["TSS", _property, _x, _type] joinString "_";
            _availableList append (profileNamespace getVariable [_varName, []]);
            _groupList append _x;
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
        private _savedGear = GETPVAR(["TSS", _saveVar, _property, _type] joinString "_",_default);
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
    params ["_property"];
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

    ([_configPath, _property, _camo, _unitc, "unit"] call _getData) params ["_weapon", "_weaponGroup"];
    private _weaponArray = [_weapon];
    // get muzzles, optics, lasers modules
    {
        _weaponArray pushBack ([_x] call _getAttachment);
    } forEach ["Muzzles", "Optics", "Lasers"];
    // get magazines
    for _i from 0 to 1 do {
        private _array = GETPVAR(["TSS_Magazines", _weapon, _index] joinString "_",[]);
        if (!(_array isEqualTo [])) then {
            private _magazine = _array select 0;
            private _count = getNumber(configFile >> "CfgMagazines" >> _magazine >> "count");
            _weaponArray pushBack [_magazine, _count];
        } else {
            _weaponArray pushBack [];
        };
    };
    _weaponArray pushBack (["Bipods"] call _getAttachment);
    _weaponArray;
};

// handle content of container
private _getContainerContent = {
    params ["_configPath", "_property", "_daynight", "_unitc"];

    private _items = ([_configPath, "Items", _daynight, [_property, "Content"] joinString "" ] call _getConfig) apply {
        _x params ["_item", "_data"];
        _item = toLower _item;
        if (_item isEqualType "") then {
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
        if (_data isEqualType []) then {
            _data params ["_type", "_value"];
            if (_type == "count") exitWith {
                [_item, _value];
            };
            if (_type == "weight") exitWith {
                private _mass = getNumber(configFile >> "CfgMagazines" >> _item >> );
                private _count = floor(_value / _mass);
                [_item, _count];
            };
            if (_type == "script") exitWith {
                _item call compile _value;
            };
        } else {
            [_item, _data];
        };
    };
};

private _getContainer = {
    params ["_configPath", "_property", "_camo", "_daynight", "_size", "_arsenal"];

    private _container = if (_property == "Backpacks") then {
        ([_configPath, _property, _size, _unitc, "unit"] call _getData) select 0;
    } else {
        ([_configPath, _property, _camo, _camo, "unit"]  call _getData) select 0;
    };
    _container append ([_configPath, _property, _daynight, _unitc] call _getContainerContent); 
};

private _loadout = [];
// rifle slot
_loadout pushBack [_configPath, "Primaries", _3denCamo, _3denDaynight, _3denUnitMuzzle, _unitc] call _getWeapon;
// pistol slot
_loadout pushBack [_configPath, "Secondaries", _3denCamo, _3denDaynight, _3denUnitMuzzle, _unitc] call _getWeapon;
// launcher slot
_loadout pushBack [_configPath, "Launchers", _3denCamo, _3denDaynight, _3denUnitMuzzle, _unitc] call _getWeapon;
// containers
_loadout pushBack [_configPath, "Uniforms", _3denCamo, _3denDaynight, "", _unitc] call _getContainer;
_loadout pushBack [_configPath, "Vests", _3denCamo, _3denDaynight, "", _unitc] call _getContainer;
_loadout pushBack [_configPath, "Backpacks", _3denCamo, _3denDaynight, _3denBackpack, _unitc] call _getContainer;
_loadout pushBack [_configPath, "Helmets", _3denCamo, _unitc, "unit"] call _getData;
_loadout pushBack [_configPath, "Glasses", _3denCamo, _unitc, "unit"] call _getData;
_loadout pushBack [([_configPath, "Binoculars", _3denDaynight] call _getData) select 0, "", "", "", [], [], ""];
_loadout pushBack [
    ([_configPath, "Maps", _3denDaynight] call _getData) select 0, // Map
    ([_configPath, "GPS", _3denDaynight] call _getData) select 0, // GPS
    "",
    ([_configPath, "Compass", _3denDaynight] call _getData) select 0, // Compass
    ([_configPath, "Watches", _3denDaynight] call _getData) select 0, // Watch
    ([_configPath, "NVGs", _3denDaynight] call _getData) select 0 // NVG
];

_unit setUnitLoadout _loadout;
