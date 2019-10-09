#include "script_component.hpp"

if ({(_x select 0) select 0 isEqualTo QGVAR(openCheatbook)} count (player getVariable ["ace_interact_menu_selfActions", []]) == 0) then {
    private _children = {
        params ["", "_player"];

        // Add children to this action
        private _actions = [];
        {
            private _action = [
                [QUOTE(ADDON),_x] joinString "_", _x, "",
                {GVAR(ID) = [_this select 2]; createDialog "RSCDisplayTSSSheets";},
                {true}, {}, _forEachIndex] call ace_interact_menu_fnc_createAction;
            _actions pushBack [_action, [], _player]; // New action, it's children, and the action's target
        } forEach ["ATC", "JTAC", "LOG"];

        _actions
    };
    
    private _action = [
        QGVAR(openCheatbook), "Open Cheatbook", "", {},
        {
            params["_unit"];
            private _magazines = [];
            _magazines append(uniformItems _unit);
            _magazines append(vestItems _unit);
            QGVAR(item) in _magazines;
        },
        _children
    ] call ACE_interact_menu_fnc_createAction;

    ["CAManBase", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
};

