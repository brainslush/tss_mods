#include "script_component.hpp"
/*
 * Author: brainslush
 * Get mission and unit parameters.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * 0: Unit Class <STRING>
 * 1: Camo Class <STRING>
 * 2: DayNight Class <STRING>
 * 3: Backpack Class <STRING>
 * 4: Muzzle Class <STRING>
 *
 * Example:
 * ["tss_recon_tl"] call tss_mods_units_fnc_getUnitParameters
 *
 * Public: No
*/

params ["_unit"];

private _type = typeOf _unit;
([_type, "_"] call CBA_fnc_split) params ["", "_unitc"];
_unitc = toLower _unitc;

// get misison & unit parameters
private _3denCamo = missionNamespace getVariable [QGVARMAIN(3denCamo), "mdt"];
private _3denDaynight = missionNamespace getVariable [QGVARMAIN(3denDayNight), "all"];
//private _3denBackpack = missionNamespace getVariable [QGVAR(3den_backpack), "large"];
private _3denBackpack = _unit getVariable [QGVAR(3denBackpack), "all"];
private _3denMuzzle = _unit getVariable [QGVAR(3denMuzzle), ["fire", "silent"] select (_unitc in ["recon", "diver"])];
[_unitc, _3denCamo, _3denDaynight, _3denBackpack, _3denMuzzle];
