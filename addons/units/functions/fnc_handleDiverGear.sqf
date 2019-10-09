#include "script_component.hpp"
/*
 * Author: brainslush
 * Add vest, helmet, glasses to backpack
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Unit Group <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [false] call tss_mods_units_fnc_handleDiverGear
 *
 * Public: No
*/

params ["_unit", "_unitg", "_unitc", "_3denCamo"];

if (_unitg == "diver") then {
    private _configPath = configFile >> "CfgVehicles" >> ("tss_recon_" + _unitc);
    private _vest = ([_unit, _configPath, "Vests", _3denCamo] call FUNC(getLoadoutData)) select 0;
    private _helmet = ([_unit, _configPath, "Helmets", _3denCamo] call FUNC(getLoadoutData)) select 0;
    private _glasses = ([_unit, _configPath, "Glasses", _3denCamo] call FUNC(getLoadoutData)) select 0;
    _unit addItemToBackpack _vest;
    _unit addItemToBackpack _helmet;
    _unit addItemToBackpack _glasses;
};
