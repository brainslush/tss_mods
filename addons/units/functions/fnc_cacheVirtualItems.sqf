#include "script_component.hpp"
/*
 * Author: brainslush
 * restore virtual items for the  on the object
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Target <TARGET>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, box] call tss_mods_units_fnc_cacheVirtualItems
 *
 * Public: No
*/

params ["_player", "_target"];

private _cachedItems = _target getVariable [QGVAR(aceArsenalCache), []];
if (_cachedItems isEqualTo []) then {
    private _virtualItems = _target getVariable ["ace_arsenal_virtualItems",[]];
    _target setVariable [QGVAR(aceArsenalCache), _virtualItems];
    GVAR(currArsenalBox) = _target;
    _target setVariable ["ace_arsenal_virtualItems", nil];
} else {
    ERROR_WITH_TITLE("Uncleared Arsenal Cache",str(_target));
};
