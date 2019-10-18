#include "script_component.hpp"

params ["_vehicle","_engineState"];
TRACE_1("",_this);

if (local _vehicle) then {
  _vehicle setVariable [QGVAR(isOn),_engineState,true];
};
