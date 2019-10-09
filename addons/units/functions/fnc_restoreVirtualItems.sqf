#include "script_component.hpp"
/*
 * Author: brainslush
 * restore virtual items for the  on the object
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_restoreVirtualItems
 *
 * Public: No
*/

private _target = GVAR(currArsenalBox);

if (isNil "_target") then {
    ERROR("No cached arsenal box");
} else {
    private _cachedItems = _target getVariable [QGVAR(aceArsenalCache), []];
    _target setVariable ["ace_arsenal_virtualItems", nil];
    [_target, _cachedItems, false] call ace_arsenal_fnc_addVirtualItems;
    _target setVariable [QGVAR(aceArsenalCache), nil];
    GVAR(currArsenalBox) = nil;
};
