#include "script_component.hpp"
/*
 * Author: brainslush
 * Add cls kit to unit
 *
 * Arguments:
 * 0: Object <OBJECT>
 * 1: Type <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [myObject, "alpha"] call tss_mods_units_fnc_addMedKitInteraction
 *
 * Public: No
*/

params["_object", "_type"];

private _action = [
    QGVAR(ObtainMedKit) + _type, "Med Kit " + _type + " beziehen", "", {
        params["", "_player", "_type"];
        [_player, _type, true, true] call FUNC(addMedKit);
    }, {true}, {}, _type
] call ACE_interact_menu_fnc_createAction;

[_object, 0, ["ACE_MainActions"], _action] call ACE_interact_menu_fnc_addActionToObject;
