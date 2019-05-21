#include "script_component.hpp"
/*
 * Author: brainslush
 * Initialize a arsenal for specific loadout configurations.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Type <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player, 0] call tss_mods_units_fnc_initArsenal
 *
 * Public: Yes
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
        [_object, GETPRVAR(GVAR(magazineList),[])] call ace_arsenal_fnc_initBox; 
    };
    // tss arsenal
    case 2: {
        private _list = GETPRVAR(GVAR(weaponList),[]);
        _list append GETPRVAR(GVAR(gearList),[]);
        _list append GETPRVAR(GVAR(itemList),[]);
        _list append GETPRVAR(GVAR(magazineList),[]);
        [_object, _list] call ace_arsenal_fnc_initBox;
    };
};