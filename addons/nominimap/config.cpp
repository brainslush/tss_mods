#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"tss_mods_main"};
    };
};

class Extended_DisplayLoad_EventHandlers {
    class RscCustomInfoMiniMap {
        ADDON = "params ['_display'];{if ((vehicle ace_player) isEqualTo ace_player) then {_x ctrlShow false;}} forEach allControls _display;";
    };
};
