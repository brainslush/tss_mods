#include "script_component.hpp"
#include "\z\ace\addons\arsenal\defines.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

GVAR(ArsenalTypeOpen) = "";

[] call FUNC(addInitEventhandlers);
[] call FUNC(gatherEquip);
["ace_arsenal_displayClosed", FUNC(updatePersonalLayout)] call CBA_fnc_addEventHandler;
["ace_arsenal_displayClosed", FUNC(restoreVirtualItems)] call CBA_fnc_addEventHandler;
["ace_arsenal_displayClosed", {GVAR(ArsenalTypeOpen) = "";}] call CBA_fnc_addEventHandler;
["ace_arsenal_displayOpened", FUNC(updateArsenalControls)] call CBA_fnc_addEventHandler;
["ace_arsenal_displayOpened", {
    [{
        if (!isNil QGVAR(ArsenalTypeOpen) || {GVAR(ArsenalTypeOpen) == "magazines"}) then {
            private _display = findDisplay IDD_ace_arsenal;
            private _lctrl = _display displayCtrl IDC_buttonUniform;
            private _rctrl = _display displayCtrl IDC_buttonMag;
            //TRACE_4("",_display,_lctrl,_rctrl,IDD_ace_arsenal);
            [_display, _lctrl] call ace_arsenal_fnc_fillLeftPanel;
            [_display, _rctrl] call ace_arsenal_fnc_fillRightPanel;
        };
    }] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;
["ace_arsenal_leftPanelFilled", FUNC(updateArsenalControls)] call CBA_fnc_addEventHandler;
["ace_arsenal_rightPanelFilled", FUNC(updateArsenalControls)] call CBA_fnc_addEventHandler;

// add events for eden settings
[QGVAR(addMedKitInteraction), FUNC(addMedKitInteraction)] call CBA_fnc_addEventHandler;
[QGVAR(initArsenal), FUNC(initArsenal)] call CBA_fnc_addEventHandler;
[QGVAR(initPersonalBox), FUNC(initPersonalBox)] call CBA_fnc_addEventHandler;

// add event handlers for reequiping units after returning from test mission
// add3DENEventHandler ["OnMissionPreviewEnd",{call FUNC(reequip3Den)}];
add3DENEventHandler ["OnMissionLoad",{call FUNC(reequip3Den)}];

ADDON = true;
