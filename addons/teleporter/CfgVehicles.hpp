class CfgVehicles {
    class Land_GarbageBags_F;
    class TSS_Helper_MissionTeleporter : Land_GarbageBags_F {
        author = "Tactical Stealth Squad";
        scopeCurator = 2;
        displayName = "=TSS= Teleporter";
        faction = "tss_common";
        vehicleClass = "TSS_OBJECTS";
        class EventHandlers {
            init = QUOTE(_this call FUNC(addTeleporter));
        };
        class AttributeValues {
            objectIsSimple = 0;
        };
    };
};
