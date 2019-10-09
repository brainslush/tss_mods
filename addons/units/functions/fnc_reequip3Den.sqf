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

TEST = 1;
TRACE_1("",TEST);
TRACE_1("",allUnits);

{
    if (_x isKindOf "CAManBase") then {
        ([typeOf _x, "_"] call CBA_fnc_split) params [["_prefix", ""]];
        if (_prefix == "tss") then {
            [_x] call FUNC(applyLoadout);
        };
    };
} forEach allUnits;
