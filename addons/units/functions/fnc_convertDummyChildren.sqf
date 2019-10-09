#include "script_component.hpp"
/*
 * Author: brainslush
 * Add child interaction per magazine type
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Source <OBJECT>
 *
 * Return Value:
 * Children Actions <ARRAY>
 *
 * Example:
 * [] call tss_mods_units_fnc_convertDummyChildrenActions
 *
 * Public: No
*/

params ["_gunner", "_assistant"];

private _actions = [];
private _assistantMagazines = magazines _assistant;
private _magazines = magazines _gunner;
private _compatibleMagazines = [];

if (QGVAR(dummymagazine) in _assistantMagazines) then {
    _compatibleMagazines append ([primaryWeapon _gunner] call CBA_fnc_compatibleMagazines);
};
if (QGVAR(dummymissile) in _assistantMagazines) then {
    _compatibleMagazines append ([secondaryWeapon _gunner] call CBA_fnc_compatibleMagazines);
};

TRACE_2("",_magazines,_compatibleMagazines);

{
    private _config = configFile >> "CfgMagazines" >> _x;
    private _name = getText(_config >> "displayName");
    private _icon = getText(_config >> "picture");

    private _action = [
        QGVAR(MagazinesList) + _x, _name, _icon,
        FUNC(convertDummyMagazine), {true},
        {}, _x
    ] call ACE_interact_menu_fnc_createAction;

    _actions pushBack [_action, [], _gunner];
} forEach (_magazines arrayIntersect _compatibleMagazines);
_actions
