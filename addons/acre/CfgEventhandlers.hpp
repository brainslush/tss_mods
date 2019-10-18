class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(_this call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_Init_EventHandlers {
    class TSS_Radio_Rack {
        class ADDON {
            init = QUOTE(_this call COMPILE_FILE(XEH_init));
        };
    };
    class tss_acre_antenna {
        class ADDON {
            init = QUOTE(_this call COMPILE_FILE(XEH_init));
        };
    };
};
