#include "script_component.hpp"

params["_object"];

TRACE_1("",_object);

private _action = [
    QGVAR(teleport), "Zun Team teleportieren", "", {
        private _playerGrp = ACE_player;
        if (_playerGrp == ACE_player || {!alive _playerGrp}) then {
            _playerGrp = {
                if (alive _x && {_x != ACE_player}) exitWith {_x};
                _x;
            } forEach units group ACE_player;
        };
        if (_playerGrp == ACE_player) then {
            ["Konnte nicht teleportieren."] call CBA_fnc_notify;
        } else {
            if (vehicle _playerGrp == _playerGrp) then {
                private _dir = getDir _playerGrp - 180;
                ACE_player setpos (getPos _playerGrp) vectorAdd [3 * sin _dir, 3 * cos _dir, 0];
            } else {
                if ((vehicle _playerGrp) emptyPositions "cargo" == 0) then {
                    ["Kein Platz im Fahrzeug"] call CBA_fnc_notify;
                } else {
                    ACE_player moveincargo vehicle _playerGrp;
                };
            };
        };
    }, {true}
] call ACE_interact_menu_fnc_createAction;

[_object, 0, ["ACE_MainActions"], _action] call ACE_interact_menu_fnc_addActionToObject;

_object allowdamage false;
