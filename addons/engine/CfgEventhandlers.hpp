class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(_this call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_GetOut_EventHandlers {
    class AllVehicles {
        class ADDON {
            getOut = QUOTE(_this call FUNC(getOut));
        };
    };
};

class Extended_Engine_EventHandlers {
    class AllVehicles {
        class ADDON {
            engine = QUOTE(_this call FUNC(engine));
        };
    };
};
