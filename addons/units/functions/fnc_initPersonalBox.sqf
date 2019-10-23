#include "script_component.hpp"
/*
 * Author: brainslush
 * Initialize a personal arsenal at the object for loadout configuration.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player] call tss_mods_units_fnc_initPersonalBox
 * [_player] call tss_mods_units_fnc_initPersonalBox
 *
 * Public: No
*/

params [["_target", objNull, [objNull]]];

if (isNull _object) exitWith {};

private _action = [
    QGVAR(Loadout), "Loadout", "", {
        [true] call FUNC(handleSniperBackpack);
        GVAR(ArsenalTypeOpen) = "personal";
        [player, player] call ace_arsenal_fnc_openBox;
    }, {_player == player}
] call ACE_interact_menu_fnc_createAction;

[_target, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
