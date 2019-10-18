#include "script_component.hpp"

params ["_vehicle"];

if (local _vehicle) then {
    [
        {
            _this call acre_api_fnc_initVehicleRacks;
        },
        _this,4
    ]call CBA_fnc_waitAndExecute;
};
