#define CEXPRESSION2(var1) expression = QUOTE(missionnamespace setVariable [ARR_2(QQGVARMAIN(var1),_value)];)

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class ADDON {
                displayName = "=TSS= Teleporter";
                collapsed = 1;
                class Attributes {
                    class GVAR(MedKitClsAlpha) {
                        displayName = "Teleporter Interaktion";
                        tooltip = "Fügt ACE Teleporter Interaktion zum Objekt hinzu.";
                        property = QGVAR(3denGetMedicAlpha);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_2(QQGVAR(addTeleporter), [_this])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                };
            };
        };
    };
};
