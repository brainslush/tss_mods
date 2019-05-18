class Attributes {
    class GVARMAIN(attributes) { \
        class GVARMAIN(backpack) { \
            property = QUOTE(tss_backpack); \
            control = "Combo"; \
            displayName = "Custom Backpack"; \
            tooltip = "Changes backpack to selection"; \
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBackpack),_value, true)];);
            typeName = "STRING";
            condition = "objectBrain";
            defaultValue = -1;
            class values {
                class default {
                    name = "$STR_3DEN_Attributes_Lock_Default_text";
                    value = "";
                    default = 1;
                };
                class none {
                    name = "Kein";
                    value = "empty";
                };
                class small {
                    name = "Klein";
                    value = "small";
                };
                class medium {
                    name = "Mittel";
                    value = "medium";
                };
                class large {
                    name = "Gross";
                    value = "large";
                };
                class DARTER {
                    name = "Darter";
                    value = "darter";
                };
                class CRRC {
                    name = "CRRC";
                    value = "crrc";
                };
                class ANTENNABAG {
                    name = "Antenna Bag";
                    value = "radio";
                };
            };
        };
        class GVARMAIN(muzzle) {
            property = QUOTE(tss_muzzle);
            control = "Combo";
            displayName = "Custom Muzzle";
            tooltip = "Changes muzzle to selection";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenMuzzle),_value, true)];);
            typeName = "String";
            condition = "objectBrain";
            defaultValue = -1;
            class values {
                class DEFAULT {
                    name = "$STR_3DEN_Attributes_Lock_Default_text";
                    value = -1;
                    default = 1;
                };
                class PRIM {
                    name = "Schalldämpfer";
                    value = "silencer";
                };
            };
        };
        class GVARMAIN(bipod) : GVARMAIN(backpack) {
            property = QUOTE(tss_bipod);
            control = "Combo";
            displayName = "Add Bipod";
            tooltip = "Adds a Bipod";
            expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBipod),_value, true)];);
            typeName = "NUMBER";
            condition = "objectBrain";
            defaultValue = -1;
            class values {
                class DEFAULT {
                    name = "$STR_3DEN_Attributes_Lock_Default_text";
                    value = -1;
                    default = 1;
                };
                class BIPOD {
                    name = "Bipod";
                    value = "bipod";
                };
            };
        };
    };
};
