#define COMPONENT units_redfor
#define COMPONENT_BEAUTIFIED Units_Redfor
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

#define INFUNITSETBASE \
faction = "tss_opforInfantry"; \
VEHCLASS("tss_infantry"); \
EMPTYUNIT

#define RECUNITSETBASE \
faction = "tss_opforInfantry"; \
VEHCLASS("tss_recon"); \
EMPTYUNIT

#define SNIPERSETBASE \
faction = "tss_opforInfantry"; \
VEHCLASS("tss_sniper"); \
EMPTYUNIT

#define DIVERUNITSETBASE \
faction = "tss_opforInfantry"; \
VEHCLASS("tss_diver"); \
EMPTYUNIT

#define PILOTSETBASE \
faction = "tss_opforFlightdivision"; \
VEHCLASS("tss_fd"); \
EMPTYUNIT

#define BASESETBASE \
faction = "tss_opforFlightdivision"; \
VEHCLASS("tss_bp"); \
EMPTYUNIT
