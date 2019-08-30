#include "script_component.hpp"
/*
 * Author: brainslush
 * Save equipment choices after personal arsenal was closed.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_updatePersonalLayout
 *
 * Public: No
*/

if (!GVAR(PersonalArsenalOpen)) exitWith {};

([player] call FUNC(getUnitParameters)) params [
    "_unitg", "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle", "_3denBipod"
];

private _loadout = getUnitLoadout player;
_loadout params [
    "_primaryArray",
    "_launcherArray",
    "_handgunArray",
    "_uniformArray",
    "_vestArray",
    "_backpackArray",
    "_headgear",
    "_glasses",
    "_itemsArrayA",
    "_itemsArrayB"
];

TRACE_1("",_loadout);

// primary
_primaryArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], ["_magazine", [""]], "", ["_bipod", ""]];
private _weaponGroup = GETITEMGROUP(_weapon);

private _test = SAVEVAR("Primaries",_weaponGroup,_3denCamo);
private _modset = MODSET;
TRACE_5("",_test,_modset,_weapongroup,_3denCamo,_weapon);

SAVEGEARITEM("Primaries",_weaponGroup,_3denCamo,_weapon);
SAVEGEARITEM("PrimariesMuzzles",_weaponGroup,_3denDaynight,_muzzle);
SAVEGEARITEM("PrimariesLasers",_weaponGroup,_3denDaynight,_pointer);
SAVEGEARITEM("PrimariesOptics",_weaponGroup,_3denDaynight,_optic);

// launcher
_launcherArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], ["_magazine", [""]], "", ["_bipod", ""]];
_weaponGroup = GETITEMGROUP(_weapon);
SAVEGEARITEM("Launchers",_weaponGroup,_3denCamo,_weapon);
SAVEGEARITEM("LaunchersMuzzles",_weaponGroup,_3denDaynight,_muzzle);
SAVEGEARITEM("LaunchersLasers",_weaponGroup,_3denDaynight,_pointer);
SAVEGEARITEM("LaunchersOptics",_weaponGroup,_3denDaynight,_optic);

// secondary
_handgunArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], ["_magazine", [""]], "", ["_bipod", ""]];
_weaponGroup = GETITEMGROUP(_weapon);
SAVEGEARITEM("Launchers",_weaponGroup,_3denCamo,_weapon);
SAVEGEARITEM("LaunchersMuzzles",_weaponGroup,_3denDaynight,_muzzle);
SAVEGEARITEM("LaunchersLasers",_weaponGroup,_3denDaynight,_pointer);
SAVEGEARITEM("LaunchersOptics",_weaponGroup,_3denDaynight,_optic);

// uniform
SAVEGEARITEM("Uniforms",_unitc,_3denCamo,_uniformArray select 0);

// vest
SAVEGEARITEM("Vests",_unitc,_3denCamo,_vestArray select 0);

// backpack
SAVEGEARITEM("Backpacks",_unitc,_3denCamo,_backpackArray select 0);

// headgear
SAVEGEARITEM("helmets",_unitc,_3denCamo,_headgear);

// glasses
SAVEGEARITEM("glasses",_unitc,_3denCamo,_glasses);

// nvg
SAVEGEARITEM("nvgs",_unitc,_3denCamo,_itemsArrayB select 5);

GVAR(PersonalArsenalOpen) = false;
