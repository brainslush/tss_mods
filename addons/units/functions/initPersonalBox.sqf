#include "script_component.hpp"
/*
 * Author: brainslush
 * Initialize a personal arsenal for loadout configuration.
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
 * [_player, true] call tss_units_fnc_initPersonalBox
 *
 * Public: No
*/

params [["_player", objNull, [objNull]], ["_items", true, [[], true]]];

if (isNull _object) exitWith {};

if ({(_x select 0) select 0 isEqualTo QGVAR(aceInteraction)} count (_object getVariable ["ace_interact_menu_actions", []]) == 0) then {
    private _action = [
        QGVAR(aceInteraction), localize "STR_A3_Arsenal", "", 
        {
            params ["_target", "_player"];

            [_target, _player] call ace_arsenal_fnc_openBox;
        },
        {
            params ["_target", "_player"];

            [_player, _target] call ace_common_fnc_canInteractWith;
        },{},[]
    ] call ace_interact_menu_fnc_createAction;
    [_player, 0, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

    [_player, _items, false] call ace_arsenal_fnc_addVirtualItems;
};
