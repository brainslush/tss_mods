#include "script_component.hpp"
/*
 * Author: brainslush
 * ----.
 *
 * Arguments:
 * 0: config path <STRING>
 * 1: property <STRING>
 * 2: day or night <BOOL>
 * 3: unit class <STRING>
 *
 * Return Value:
 * List of items
 *
 * Example:
 * [ACE_player] call tss_mods_units_fnc_getContainerContent
 *
 * Public: No
*/

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
        _itemList = [[_itemList, 1]];
    };

    {
        private _item = _x;
        // TRACE_1("", _item);
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
            // TRACE_1("", _data);
            _data params ["_type", "_value"];
            _type = toLower _type;
            if (_type == "count") exitWith {
                _value * _multiplier;
            };
            if (_type == "weight") exitWith {
                if (_multiplier != -1) then {
                    if (isNumber(configFile >> "CfgMagazines" >> _item >> "mass")) then {
                        private _mass = getNumber(configFile >> "CfgMagazines" >> _item >> "mass");
                        private _count = floor(_value / _mass);
                        // TRACE_3("weight count",_mass,_count,_value);
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