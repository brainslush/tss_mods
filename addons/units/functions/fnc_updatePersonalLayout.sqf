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

([ACE_player] call FUNC(getUnitParameters)) params [
    "_unitg", "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle", "_3denBipod"
];

private _loadout = getUnitLoadout ACE_player;
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

//TRACE_1("",_loadout);

// primary
_primaryArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], ["_magazine", [""]], "", ["_bipod", ""]];
private _weaponGroup = [ACE_player, "Primaries", _weapon] call FUNC(getWeaponGroup);

//TRACE_7("",_unitg, _unitc,_3denCamo, _3denDaynight, _3denBackpack, _3denMuzzle, _3denBipod);
//TRACE_7("",_weapongroup,_3denCamo,_weapon,_muzzle,_pointer,_optic,_magazine);

SAVEGEARITEM("Primaries",_weaponGroup,_3denCamo,_weapon);
SAVEGEARITEM("PrimariesMuzzles",_weaponGroup,_3denMuzzle,_muzzle);
SAVEGEARITEM("PrimariesLasers",_weaponGroup,_3denDaynight,_pointer);
SAVEGEARITEM("PrimariesOptics",_weaponGroup,_3denDaynight,_optic);
SAVEGEARITEM("PrimariesMagazines",_weapon,"",_magazine select 0);

// launcher
_launcherArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], ["_magazine", [""]], "", ["_bipod", ""]];
_weaponGroup = [ACE_player, "Launchers", _weapon] call FUNC(getWeaponGroup);;
SAVEGEARITEM("Launchers",_weaponGroup,_3denCamo,_weapon);
SAVEGEARITEM("LaunchersMuzzles",_weaponGroup,_3denMuzzle,_muzzle);
SAVEGEARITEM("LaunchersLasers",_weaponGroup,_3denDaynight,_pointer);
SAVEGEARITEM("LaunchersOptics",_weaponGroup,_3denDaynight,_optic);
SAVEGEARITEM("LaunchersMagazines",_weapon,"",_magazine select 0);

// secondary
_handgunArray params [["_weapon", ""], ["_muzzle", ""], ["_pointer", ""], ["_optic", ""], ["_magazine", [""]], "", ["_bipod", ""]];
_weaponGroup = [ACE_player, "Secondaries", _weapon] call FUNC(getWeaponGroup);;
SAVEGEARITEM("Secondaries",_weaponGroup,_3denCamo,_weapon);
SAVEGEARITEM("SecondariesMuzzles",_weaponGroup,_3denMuzzle,_muzzle);
SAVEGEARITEM("SecondariesLasers",_weaponGroup,_3denDaynight,_pointer);
SAVEGEARITEM("SecondariesOptics",_weaponGroup,_3denDaynight,_optic);
SAVEGEARITEM("SecondariesMagazines",_weapon,"",_magazine select 0);

// uniform
SAVEGEARITEM("Uniforms",_unitc,_3denCamo,_uniformArray select 0);

// vest
SAVEGEARITEM("Vests",_unitc,_3denCamo,_vestArray select 0);

// backpack
SAVEGEARITEM("Backpacks",_unitc,_3denBackpack,_backpackArray select 0);

// headgear
SAVEGEARITEM("helmets",_unitc,_3denCamo,_headgear);

// glasses
SAVEGEARITEM("glasses",_unitc,_3denCamo,_glasses);

// nvg
SAVEGEARITEM("nvgs",_unitc,_3denCamo,_itemsArrayB select 5);

//GVAR(PersonalArsenalOpen) = false;
GVAR(ArsenalTypeOpen) = "";
[{[ACE_player] call FUNC(applyLoadout)}] call CBA_fnc_execNextFrame;
