#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

["ace_arsenal_displayClosed", FUNC(updatePersonalLoadout)] call CBA_fnc_addEventHandler;

ADDON = true;
