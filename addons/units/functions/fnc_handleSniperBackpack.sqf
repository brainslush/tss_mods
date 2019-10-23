#include "script_component.hpp"
/*
 * Author: brainslush
 * Move sniper rifle to backpack and back for the loadout arsenal
 *
 * Arguments:
 * 0: Is arsenal opened <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [false] call tss_mods_units_fnc_handleSniperBackpack
 *
 * Public: No
*/

params[["_arsenalOpened", false]];

private _unit = ACE_player;

if (!(local _unit)) exitWith {};
if (!(backpack _unit isKindOf "ace_gunbag")) exitWith {};

([_unit] call FUNC(getUnitParameters)) params [
    "_unitg", "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle", "_3denBipod"
];
if (toLower _unitc isEqualTo "" && {!(tolower _unitc isEqualTo "snp")}) exitWith {};

private _currPrimary = primaryWeapon _unit;
private _currPrimaryState = [_unit, _currPrimary] call ACE_common_fnc_getWeaponState;

private _backpackPrimaryArray = (backpackContainer _unit) getVariable ["ace_gunbag_gunbagWeapon", []];
private _currPrimaryGroup = [_unit, "Primaries", _currprimary] call FUNC(getWeaponGroup);
private _backpackPrimaryGroup = [_unit, "Primaries", _backpackPrimaryArray select 0, "tss_recon_operator"] call FUNC(getWeaponGroup);

// get sniper rifle out of or into backpack when personal arsenal is opened
//TRACE_1("",_currPrimaryGroup);
if (_arsenalOpened && {(-1 == (_currPrimaryGroup find "sniper")) ||
    {!_arsenalOpened && {-1 != (_currPrimaryGroup find "sniper")}}}) then {
    _unit removeWeapon _currPrimary;
    [_unit, _unit] call ace_gunbag_fnc_offGunbagCallback;

    _currPrimaryState params ["_items", "", "_magazines", "_ammo"];
    private _mass = [_currPrimary, _items, _magazines] call ace_gunbag_fnc_calculateMass;

    {
        _magazines set [_forEachIndex, [_x, _ammo select _forEachIndex]];
    } forEach _magazines;
    [_unit, _gunbag, _mass] call ace_movement_fnc_addLoadToUnitContainer;
    _gunbag setVariable ["ace_gunbag_gunbagWeapon", [_weapon, _items, [_magA, _magB]], true];
};
