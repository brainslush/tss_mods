#include "script_component.hpp"
/*
 * Author: brainslush
 * Get combined weapon group of property of unit
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Property <STRING>
 *
 * Return Value:
 * 0: Weapon Group <STRING>
 *
 * Example:
 * ["tss_recon_tl"] call tss_mods_units_fnc_getProperyGroupString
 *
 * Public: No
*/

params [
    "_unit",
    "_property"
];

private _type = _unit getVariable [QGVAR(typeOf), typeOf _unit];

private _cfgClass = "tss_" + _property;
private _cfgArray = getArray (configFile >> "CfgVehicles" >> _type >> _cfgClass);
if (count _cfgArray == 0) exitWith {""};
_cfgArray joinString "__";
