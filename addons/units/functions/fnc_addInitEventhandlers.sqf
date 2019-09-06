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
    [_x, "initPost", {
        if (_this select 0 == player || is3DEN) then {
            _this call FUNC(applyLoadout);
            if (player getVariable [QGVAR(isTss),false]) then {
                private _action = [
                    QGVAR(Loadout),
                    "Loadout",
                    "",
                    {
                        GVAR(PersonalArsenalOpen) = true;
                        [player, player] call ace_arsenal_fnc_openBox;
                    },
                    {true;}
                ] call ACE_interact_menu_fnc_createAction;

                [
                    player,
                    1,
                    ["ACE_SelfActions"],
                    _action
                ] call ace_interact_menu_fnc_addActionToObject;

                private _items = GETMVAR(tss_arsenalList_unit,[]);
                [player, _items, false] call ace_arsenal_fnc_addVirtualItems;
            };
        };
    }] call CBA_fnc_addClassEventHandler;
    [_x, "init", {
        (_this select 0) setVariable [QGVAR(IsTss), true];
        if (is3DEN) then {
            _this call FUNC(applyLoadout);
        };
    }] call CBA_fnc_addClassEventHandler;
} forEach _classes;
