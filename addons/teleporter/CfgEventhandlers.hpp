class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(_this call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(_this call COMPILE_FILE(XEH_preInit));
    };
};
