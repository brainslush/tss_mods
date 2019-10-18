#include "script_component.hpp"

params ["_vehicle","_position","_unit","_turret"];
TRACE_1("",_this);

if (
  local _unit &&
  {isPlayer _unit} &&
  {_position == "driver"} &&
  {_vehicle getVariable [QGVAR(isOn),false]}
) then {
  [
    {[QGVAR(engineOnLocal),_this,_this] call CBA_fnc_targetEvent},
    _vehicle
  ] call CBA_fnc_execNextFrame;
};
