#include "script_component.hpp"
/*
 * Author: brainslush
 * Add interaction to units
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_addAssistanInteractions
 *
 * Public: No
*/

private _action = [
    QGVAR(convertDummyMagazines), "Magazine anpassen", "", {true}, {
        params ["", "_player"];
        //TRACE_2("", _player, QGVAR(dummymagazine) in magazines _player || {QGVAR(dummymissile) in magazines _player});
        QGVAR(dummymagazine) in magazines _player || {QGVAR(dummymissile) in magazines _player}
    },
    FUNC(convertDummyChildren)
] call ACE_interact_menu_fnc_createAction;

["CAManBase", 0, ["ACE_MainActions"], _action, true] call ACE_interact_menu_fnc_addActionToClass;
