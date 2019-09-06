#define COMPONENT units_pmc
#define COMPONENT_BEAUTIFIED Units_PMC
#include "\x\tss_mods\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MAIN
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MAIN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "\x\tss_mods\addons\main\script_macros.hpp"

#define PMCSETBASE \
faction = "tss_pmc"; \
VEHCLASS("tss_infantry"); \
EMPTYUNIT
