#include "script_component.hpp"
/*
 * Author: brainslush
 * reequips all placed TSS units in 3DEN environment
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_reequip3Den
 *
 * Public: No
*/

if (!is3DEN) exitWith {};
{
    ([typeOf _x, "_"] call CBA_fnc_split) params [["_prefix", ""]];
    if (_prefix == "tss" && {_x isKindOf "CAManBase"}) then {
        [_x] call FUNC(applyLoadout);
    };
} forEach allUnits;
