#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[QGVAR(addTeleporter),FUNC(addTeleporter)] call CBA_fnc_addEventHandler;

ADDON = true;
