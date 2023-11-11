#include "script_component.hpp"

[
    {
        [{
            if GVAR(setting) then {
                clearRadio
            }
        }] call CBA_fnc_addPerFrameHandler;
    },
    300
] call CBA_fnc_waitAndExecute;
