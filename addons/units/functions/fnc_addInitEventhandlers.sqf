#include "script_component.hpp"
/*
 * Author: brainslush
 * Add eventhandlers to all tss soldier classes
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_addInitEventhandlers
 *
 * Public: No
*/

// check if we got a new version
private _modVersion = getText(configFile >> "CfgPatches" >> QUOTE(ADDON) >> "version");
private _savedVersion = GETPRVAR(GVAR(cachedClassesVersion),"");
private _classes = GETPRVAR(GVAR(cachedClasses),[]);
if (_modVersion != _savedVersion || {IGNOREVERSIONCHECK}) then {
    _classes = [];
    {
        private _class = configName _x;
        if (_class isKindOf "CAManBase") then {
            private _split = [_class, "_"] call CBA_fnc_split;
            _split params [["_prefix", ""]];
            if (_prefix == "tss") then {
                _classes pushBack _class;
            };
        };
    } forEach ("true" configClasses (configFile >> "CfgVehicles"));
    SETPRVAR(GVAR(cachedClassesVersion),_modVersion);
    SETPRVAR(GVAR(cachedClasses),_classes)
};
{
    [_x, "init", {
        _this call FUNC(applyLoadout);
        (_this select 0) setVariable [QGVAR(IsTss), true];
    }] call CBA_fnc_addClassEventHandler;
} forEach _classes;
