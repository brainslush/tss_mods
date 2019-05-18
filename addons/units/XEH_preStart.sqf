#include "script_component.hpp"

#include "XEH_PREP.hpp"

// check if we got a new version
private _modVersion = getText(configFile >> "CfgPatches" >> QUOTE(ADDON));
private _savedVersion = GETPVAR(QGVAR(cachedClassesVersion),"");
private _classes = GETPVAR(QGVAR(cachedClasses),[])
if (_modVersion != _savedVersion || {IGNOREVERSIONCHECK}) then {
    {
        if (_x kindOf "CAManBase") then {
            private _type = typeOf _x;
            private _split = [_type,"_"] call CBA_fnc_split;
            _split params [["_prefix",""]];
            if (_prefix != "tss") then {
                _classes pushBack _x;
            };
        };
    } forEach (configFile >> "CfgVehicles");
    SETPVAR(QGVAR(cachedClassesVersion),_modVersion);
    SETPVAR(QGVAR(cachedClasses),_classes)
};
{
    [_x, "init", {_this call FUNC(applyLoadout)}] call CBA_fnc_addClassEventHandler;
} forEach _classes;
