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
 * [player] call tss_mods_units_fnc_applyLayout
 *
 * Public: No
*/

// check if we got a new version
private _modVersion = getText(configFile >> "CfgPatches" >> QUOTE(ADDON));
private _savedVersion = GETPRVAR(GVAR(cachedClassesVersion),"");
private _classes = GETPRVAR(GVAR(cachedClasses),[]);
if (_modVersion != _savedVersion || {IGNOREVERSIONCHECK}) then {
    {
        if (_x isKindOf "CAManBase") then {
            private _type = typeOf _x;
            private _split = [_type, "_"] call CBA_fnc_split;
            _split params [["_prefix", ""]];
            if (_prefix != "tss") then {
                _classes pushBack _x;
            };
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));
    SETPRVAR(GVAR(cachedClassesVersion),_modVersion);
    SETPRVAR(GVAR(cachedClasses),_classes)
};
{
    [_x, "init", {_this call FUNC(applyLoadout)}] call CBA_fnc_addClassEventHandler;
} forEach _classes;
