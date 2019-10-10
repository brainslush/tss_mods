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
 * [ACE_player] call tss_mods_units_fnc_applyLayout
 *
 * Public: No
*/

params[["_unit", objNull]];

if (!(local _unit)) exitWith {};
([_unit] call FUNC(getUnitParameters)) params [
    "_unitg", "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle", "_3denBipod", "_type"
];
private _configPath = configFile >> "CfgVehicles" >> _type;
private _modset = MODSET;

//TRACE_8("data",_unitg,_unitc,_3denCamo,_3denDaynight,_3denBackpack,_3denMuzzle,_3denBipod,_modset);

// handle content of container
private _getContainerContent = {
    params ["_configPath", "_property", "_daynight", "_unitc"];
    ([_configPath, "Items", _daynight, [_property, "Content"] joinString "" ] call FUNC(getConfigData)) params ["_items", "_groupNames"];
    //TRACE_1("",_items);
    private _index = 0;
    private _completeList = [];
    {
        //TRACE_1("",_x);
        _x params [
            ["_itemlist", [], [[],""]],
            ["_data", ""]
        ];

        if (!(_itemList isEqualType [])) then {
            _itemList = [[_itemList,1]];
        };

        {
            private _item = _x;

            // handle special types
            if (_item isEqualType "") then {
                //TRACE_1("",_item);
                switch (toLower _item) do {
                    case "primarymagazines": {
                        //TRACE_1("",_item);
                        _item = missionNamespace getVariable [
                            QUOTE(ADDON) + "_primaries_Magazines", ""
                        ];
                    };
                    case "primarygrenades": {
                        //TRACE_1("",_item);
                        _item = missionNamespace getVariable [
                            QUOTE(ADDON) + "_primaries_Grenades", ""
                        ];
                    };
                    case "secondarymagazines": {
                        //TRACE_1("",_item);
                        _item = missionNamespace getVariable [
                            QUOTE(ADDON) + "_secondaries_Magazines", ""
                        ];
                    };
                    case "launchermagazines": {
                        //TRACE_1("",_item);
                        _item = missionNamespace getVariable [
                            QUOTE(ADDON) + "_launchers_Magazines", ""
                        ];
                    };
                };
            };
            private _multiplier = 1;
            if (_item isEqualType []) then {
                _item params ["_itemtype", "_count"];
                _item = _itemtype;
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
                        } else {1};
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
            //TRACE_1("",_item);
            if (_item in [QGVAR(dummymagazine), QGVAR(dummymissile)]) then {
                ["Denke daran die Dummymagazine umzuwandeln."] call CBA_fnc_notify;
            };
            private _return = if (isNumber(configFile >> "CfgMagazines" >> _item >> "count")) then {
                private _count = getNumber(configFile >> "CfgMagazines" >> _item >> "count");
                [_item, _dataR, _count];
            } else {
                [_item, _dataR];
            };
            //TRACE_1("",_return);
            _completeList pushBack _return;
        } forEach _itemList;
    } forEach _items;
    //TRACE_1("",_completeList);
    _completeList;
};

private _getContainer = {
    params ["_unit", "_configPath", "_property", "_camo", "_daynight", "_size", "_unitc"];
    //TRACE_7("getContainer",_configPath,_property,_camo,_daynight,_size,_arsenal,_unitc);
    private _result = [_configPath, _property, _daynight, _unitc] call _getContainerContent;

    private _container = if (_property == "Backpacks") then {
        ([_unit, _configPath, _property, _size, _unitc, "unit"] call FUNC(getLoadoutData)) select 0;
    } else {
        ([_unit, _configPath, _property, _camo, _unitc, "unit"]  call FUNC(getLoadoutData)) select 0;
    };

    private _return = [];
    if (!(_container isEqualTo "")) then {
        _return pushBack _container;
        _return pushBack _result;
    };
    //TRACE_1("",_return);
    _return;
};

private _loadout = [];
// rifle slot
_loadout pushBack ([_unit, _configPath, "Primaries", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, _unitc] call FUNC(determineWeapon));
// launcher slot
_loadout pushBack ([_unit, _configPath, "Launchers", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, _unitc] call FUNC(determineWeapon));
// pistol slot
_loadout pushBack ([_unit, _configPath, "Secondaries", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, _unitc] call FUNC(determineWeapon));
// containers
_loadout pushBack ([_unit, _configPath, "Uniforms", _3denCamo, _3denDaynight, "", _unitc] call _getContainer);
_loadout pushBack ([_unit, _configPath, "Vests", _3denCamo, _3denDaynight, "", _unitc] call _getContainer);
_loadout pushBack ([_unit, _configPath, "Backpacks", _3denCamo, _3denDaynight, _3denBackpack, _unitc] call _getContainer);
_loadout pushBack ([_unit, _configPath, "Helmets", _3denCamo, _unitc, "unit"] call FUNC(getLoadoutData) select 0);
_loadout pushBack ([_unit, _configPath, "Glasses", _3denCamo, _unitc, "unit"] call FUNC(getLoadoutData) select 0);
_loadout pushBack ([([_unit, _configPath, "Binoculars", _3denDaynight] call FUNC(getLoadoutData)) select 0, "", "", "", [], [], ""]);
_loadout pushBack [
    ([_unit, _configPath, "Maps", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // Map
    ([_unit, _configPath, "GPS", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // GPS
    "",
    ([_unit, _configPath, "Compass", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // Compass
    ([_unit, _configPath, "Watches", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // Watch
    ([_unit, _configPath, "NVGs", _3denDaynight, _unitc, "unit"] call FUNC(getLoadoutData)) select 0 // NVG
];
//TRACE_1("loadout",_loadout);
// containers
[_unit, _loadout] call FUNC(setUnitLoadout);
[_unit, _unitc] call FUNC(addRifleToSniper);
[_unit, _unitg, _unitc, _3denCamo] call FUNC(handleDiverGear);
[_unit, "clsbravo", false, true] call FUNC(addMedKit);
private _items = _unit getVariable ["tss_arsenalList_unit", []];
[_unit, _items, false] call ace_arsenal_fnc_addVirtualItems;
