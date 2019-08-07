#include "script_component.hpp"
/*
 * Author: brainslush
 * Set variable extension for different modsets for which different profiles are saved
 *
 * Arguments:
 * 0: Variable Extension <STRING>
 * 1: Conflicts <ARRAY>
 *
 * Return Value:
 * None
 *
 * Examples:
 * ["vanilla"] call tss_mods_units_fnc_setLoadoutVariable
 * ["cup", ["rhs"]] call tss_mods_units_fnc_setLoadoutVariable
 *
 * Public: Yes
*/

params ["_variable", ["_conflicts", []]];

_variable = toLower _variable;
private _modsets = parsingNamespace getVariable QGVARMAIN(Modsets);

if (!(_variable in _modsets)) then {
    private _conflict = "";
    {
        private _name = toLower _x;
        if (_name in _modsets) exitWith {_conflict = _name;};
    } forEach _conflicts;
    if (_conflict isEqualTo "") then {
        private _prevModset = parsingNamespace getVariable [QGVARMAIN(Modset), ""];
        _modsets pushBack _variable;
        parsingNamespace setVariable [QGVARMAIN(Modset), _variable];
        parsingNamespace setVariable [QGVARMAIN(Modsets), _modsets];
        XEH_LOG("TSS: Modset Selection was updated: " + _prevModset + " >> " + _variable);
    } else {
        XEH_LOG("TSS: Modset conflict between " + _variable + " and " + _conflict);
    };
};
