#include "script_component.hpp"

if !hasInterface exitWith {};

// hack number 1
[{
    {_s setVariable ["UVO_speaking", true]} forEach allPlayers        
}, 5] call CBA_fnc_addPerFrameHandler;

// hack number 2
[{ 
    uvo_main_reloadAllow = false;
}, 0] call CBA_fnc_addPerFrameHandler;
