#include "script_component.hpp"
/*
 * Author: brainslush
 * Get mission and unit parameters.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * 0: Unit Group <STRING>
 * 1: Unit Class <STRING>
 * 2: Camo Group <STRING>
 * 3: DayNight Group <STRING>
 * 4: Backpack Group <STRING>
 * 5: Muzzle Group <STRING>
 * 6: Bipod Group <STRING>
 *
 * Example:
 * ["tss_recon_tl"] call tss_mods_units_fnc_getUnitParameters
 *
 * Public: No
*/

params ["_unit"];

private _type = typeOf _unit;
([_type, "_"] call CBA_fnc_split) params ["", "_unitg", "_unitc"];
_unitc = toLower _unitc;

// get misison & unit parameters
private _3denCamo = missionNamespace getVariable [QGVARMAIN(3denCamo), "mdt"];
private _3denDaynight = missionNamespace getVariable [QGVARMAIN(3denDayNight), "both"];
private _3denBackpack = _unit getVariable [QGVAR(3denBackpack), "all"];
private _3denMuzzle = [_unit getVariable [QGVAR(3denMuzzle), "fire"], "silent"] select (_unitg == "recon");
private _3denBipod = [_unit getVariable [QGVAR(3denBipod), "none"], "bipod"] select (
    _unitg == "recon" ||
    _unitg == "sniper" ||
    _unitc == "ar"
);
[_unitg, _unitc, _3denCamo, _3denDaynight, _3denBackpack, _3denMuzzle, _3denBipod];
