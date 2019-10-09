#include "script_component.hpp"
/*
 * Author: brainslush
 * Get weapon group
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Weapon Class <STRING>
 * 2: Weapon Classname <STRING>
 *
 * Return Value:
 * 0: Weapon Group <STRING>
 *
 * Example:
 * ["tss_recon_tl"] call tss_mods_units_fnc_getWeapongroup
 *
 * Public: No
*/

params [
    "_unit",
    "_class",
    ["_weapon",""],
    "_type"
];
if (_weapon isEqualTo "") exitWith {""};
if (isNil "_type") then {_type = _unit getVariable [QGVAR(typeOf), typeOf _unit]};

//TRACE_4("",_unit,_class,_weapon,_type);

private _cfgClass = "tss_" + _class;
private _cfgArray = getArray (configFile >> "CfgVehicles" >> _type >> _cfgClass);

//TRACE_1("",_cfgArray);

if (count _cfgArray != 1) exitWith {""};
private _itemGroup = GETITEMGROUP(_weapon);
if (_itemGroup isEqualType "") then {_itemGroup = []};
private _groups = GETITEMGROUP(_weapon) arrayIntersect _cfgArray;
if (count _groups != 1) exitWith {""};
_groups select 0
