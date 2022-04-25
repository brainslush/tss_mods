#include "script_component.hpp"
/*
 * Author: brainslush
 * Save equipment choices after personal arsenal was closed.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ACE_player] call tss_mods_units_fnc_applyLayout
 *
 * Public: No
*/

params[["_unit", objNull]];

if (!(local _unit)) exitWith {};
([_unit] call FUNC(getUnitParameters)) params [
    "_unitg", "_unitc","_3denCamo", "_3denDaynight", "_3denBackpack", "_3denMuzzle", "_3denBipod", "_type"
];
private _configPath = configFile >> "CfgVehicles" >> _type;
private _modset = MODSET;
//TRACE_8("data",_unitg,_unitc,_3denCamo,_3denDaynight,_3denBackpack,_3denMuzzle,_3denBipod,_modset);

private _loadout = [];
// rifle slot
_loadout pushBack ([_unit, _configPath, "Primaries", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, _unitc] call FUNC(determineWeapon));
// launcher slot
_loadout pushBack ([_unit, _configPath, "Launchers", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, _unitc] call FUNC(determineWeapon));
// pistol slot
_loadout pushBack ([_unit, _configPath, "Secondaries", _3denCamo, _3denDaynight, _3denMuzzle, _3denBipod, _unitc] call FUNC(determineWeapon));
// containers
_loadout pushBack ([_unit, _configPath, "Uniforms", _3denCamo, _3denDaynight, "", _unitc] call FUNC(getContainer));
_loadout pushBack ([_unit, _configPath, "Vests", _3denCamo, _3denDaynight, "", _unitc] call FUNC(getContainer));
_loadout pushBack ([_unit, _configPath, "Backpacks", _3denCamo, _3denDaynight, _3denBackpack, _unitc] call FUNC(getContainer));
_loadout pushBack ([_unit, _configPath, "Helmets", _3denCamo, _unitc, "unit"] call FUNC(getLoadoutData) select 0);
_loadout pushBack ([_unit, _configPath, "Glasses", _3denCamo, _unitc, "unit"] call FUNC(getLoadoutData) select 0);
_loadout pushBack ([([_unit, _configPath, "Binoculars", _3denDaynight] call FUNC(getLoadoutData)) select 0, "", "", "", [], [], ""]);
_loadout pushBack [
    ([_unit, _configPath, "Maps", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // Map
    ([_unit, _configPath, "GPS", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // GPS
    "",
    ([_unit, _configPath, "Compass", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // Compass
    ([_unit, _configPath, "Watches", "all", "", "unit"] call FUNC(getLoadoutData)) select 0, // Watch
    ([_unit, _configPath, "NVGs", _3denDaynight, _unitc, "unit"] call FUNC(getLoadoutData)) select 0 // NVG
];
//TRACE_1("loadout",_loadout);
// containers
[_unit, _loadout] call FUNC(setUnitLoadout);
[_unit, _unitc] call FUNC(addRifleToSniper);
[_unit, _unitg, _unitc, _3denCamo] call FUNC(handleDiverGear);
[_unit, "clsbravo", false, true] call FUNC(addMedKit);
private _items = _unit getVariable ["tss_arsenalList_unit", []];
[_unit, _items, false] call ace_arsenal_fnc_addVirtualItems;
