#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[] call FUNC(addInitEventhandlers);
[] call FUNC(gatherEquip);
["ace_arsenal_displayClosed", FUNC(updatePersonalLayout)] call CBA_fnc_addEventHandler;
["ace_arsenal_displayOpened", FUNC(updateArsenalControls)] call CBA_fnc_addEventHandler;
["ace_arsenal_leftPanelFilled", FUNC(updateArsenalControls)] call CBA_fnc_addEventHandler;
["ace_arsenal_rightPanelFilled", FUNC(updateArsenalControls)] call CBA_fnc_addEventHandler;

private _iseden = is3DEN;
TRACE_1("",_iseden);
if (is3DEN) then {
    [
        {call FUNC(reequip3Den);}, []
    ] call CBA_fnc_execNextFrame;
};

ADDON = true;
