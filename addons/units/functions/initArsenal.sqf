#include "script_component.hpp"
/*
 * Author: brainslush
 * Initialize a arsenal for specific loadout configurations.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Items <BOOL> or <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player, ["MyItem1", "MyItem2", "MyItemN"]] call tss_units_fnc_initPersonalBox
 * [_player, true] call ace_arsenal_fnc_initBox
 *
 * Public: No
*/

params[
    ["_object", objNull],
    ["_type", 0]
];

if (_object isEqualTo objNull) exitWith {};

switch (_type) do {
    // unit arsenal
    case 0: {
        private _list = GETMVAR("tss_arsenalList_user",[]);
        [_object, _list, false] call FUNC(initPersonalBox); 
    };
    // magazine arsenal
    case 1: {
        [_object, GETPVAR(QGVAR(magazineList),[])] call ace_arsenal_fnc_initBox; 
    };
    // tss arsenal
    case 2: {
        private _list = GETPVAR(QGVAR(weaponList),[]);
        _list append GETPVAR(QGVAR(gearList),[]);
        _list append GETPVAR(QGVAR(itemList),[]);
        _list append GETPVAR(QGVAR(magazineList),[]);
        [_object, _list] call ace_arsenal_fnc_initBox;
    };
};