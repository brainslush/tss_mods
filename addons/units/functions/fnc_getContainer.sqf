#include "script_component.hpp"
/*
 * Author: brainslush
 * ----.
 *
 * Arguments:

 * 0: unit <OBJECT>
 * 1: config path <STRING>
 * 2: property <STRING>
 * 3: camo <STRING>
 * 4: day or night <BOOL>
 * 5: size <NUMBER>
 * 6: unit class <STRING>
 *
 * Return Value:
 * List of items
 *
 * Example:
 * [ACE_player] call tss_mods_units_fnc_getContainer
 *
 * Public: No
*/

params ["_unit", "_configPath", "_property", "_camo", "_daynight", "_size", "_unitc"];
//TRACE_7("getContainer",_configPath,_property,_camo,_daynight,_size,_arsenal,_unitc);
private _result = [_configPath, _property, _daynight, _unitc] call FUNC(getContainerContent);

private _container = if (_property == "Backpacks") then {
    ([_unit, _configPath, _property, _size, _unitc, "unit"] call FUNC(getLoadoutData)) select 0;
} else {
    ([_unit, _configPath, _property, _camo, _unitc, "unit"] call FUNC(getLoadoutData)) select 0;
};

private _return = [];
if (!(_container isEqualTo "")) then {
    _return pushBack _container;
    _return pushBack _result;
};
//TRACE_1("",_return);
_return;