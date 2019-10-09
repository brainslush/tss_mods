#include "script_component.hpp"
/*
 * Author: brainslush
 * Add interactions to obtain magazines via ace interaction menu
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [myobject] call tss_mods_units_fnc_addMagazineInteraction
 *
 * Public: No
*/

private _actionPrimaryMagazine = [

] call ACE_interact_menu_fnc_createAction;

private _actionPrimaryGrenade = [

] call ACE_interact_menu_fnc_createAction;

private _actionSecondaryMagazine = [

] call ACE_interact_menu_fnc_createAction;

private _actionLauncherMagazine = [

] call ACE_interact_menu_fnc_createAction;

private _action = [
    QGVAR(obtainMagazine), "Magazine beziehen", "", {true}, {
        !(primaryWeapon _player isEqualTo "") || {
            !(secondaryWeapon _player isEqualTo "") || {
                !(handgunWeapon _player isEqualTo "")
            }
        }
    },
    {
        private _children = [];
        {
            
            {
                {
                    
                    private _id = GVAR(obtainMagazine) + _x;
                    private _displayName = getText (configFile >> "CfgMagazines" >> _x >> "displayName");
                    private _icon = getText (configFile >> "CfgMagazines" >> _x >> "picture");
                    private _action = [;
                        _id, _displayName, _icon,
                        {true},
                        {true},
                        {
                            private _countChildren = [];
                            {
                                private _subaction = [
                                    _id + str(_x), str(_x) + "X", "",
                                    {},
                                    {}
                                ] call ACE_interact_menu_fnc_createAction;
                                _countChildren pushBack [_countChildren, [], _target]
                            } forEach [1,5,10];
                        }
                    ] call ACE_interact_menu_fnc_createAction;
                    _children pushBack [_action, [], _target];
                } forEach [_x] call CBA_fnc_compatibleMagazines;
            } forEach [_x] call CBA_fnc_getMuzzles;
        } forEach [primaryWeapon _player, secondaryWeapon _player, handgunWeapon _player];
        _children
    }
] call ACE_interact_menu_fnc_createAction;
