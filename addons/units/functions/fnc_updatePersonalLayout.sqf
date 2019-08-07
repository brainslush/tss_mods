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

([_unit] call FUNC(getUnitParameters)) params [
    "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle"
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

// primary
_primaryArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], "", "", ["_bipod", ""]];
SAVELAYOUT(primary,_camo,_unitc,_primaryArray select 0);

// launcher
_launcherArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], "", "", ["_bipod", ""]];
SAVELAYOUT(launchers,_camo,_unitc,_weapon);

// secondaries
_handgunArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], "", "", ["_bipod", ""]];
SAVELAYOUT(secondaries,_camo,_unitc,_handgunArray select 0);

// containers
SAVELAYOUT(uniforms,_camo,_unitc,_uniformArray select 0);
SAVELAYOUT(vests,_camo,_unitc,_vestArray select 0);
SAVELAYOUT(backpacks,_camo,_unitc,_backpackArray select 0);

// headgear
SAVELAYOUT(helmets,_camo,_unitc,_headgear);
SAVELAYOUT(glasses,_camo,_unitc,_glasses);
SAVELAYOUT(nvgs,_camo,_unitc,_itemsArrayB select 5);
