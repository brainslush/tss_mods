#include "script_component.hpp"
/*
 * Author: brainslush
 * determine items form config
 *
 * Arguments:
 * 0: configPath <CONFIG>
 * 1: property <STRING>
 * 2: camo <STRING>
 * 3: config type <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [...] call tss_mods_units_fnc_getConfigData
 *
 * Public: No
*/

params [
    "_configPath",
    "_property",
    "_type",
    ["_configType", ""]
];

//TRACE_4("",_configPath,_property,_type,_configType);

private _availableList = [];
private _groupList = [];

private _configEntry = if (_configType isEqualTo "") then {
    getArray(_configPath >> (["tss", _property] joinString "_"));
} else {
    getArray(_configPath >> (["tss", _configType] joinString "_"));
};
{
    if (!(_x isEqualTo "")) then {
        if (_x isEqualType []) then {
            _x params ["_class", "_data"];
            private _varName = ["TSS", MODSET, _property, _class, _type] joinString "_";
            _availableList pushBack [(profileNamespace getVariable [_varName, []]), _data];
            _groupList pushBack _class;
        } else {
            private _varName = ["TSS", MODSET, _property, _x, _type] joinString "_";
            private _content = profileNamespace getVariable [_varName, []];
            private _size = count _content;
            _availableList append _content;
            for [{_i = 0}, {_i < _size}, {_i = _i + 1}] do {
                _groupList pushBack _x;
            };
        };
    };
} forEach _configEntry;
//TRACE_2("",_availableList, _groupList);
[_availableList, _groupList];
