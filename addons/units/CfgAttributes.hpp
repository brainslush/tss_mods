class Attributes {
    class GVARMAIN(backpack) {
        property = QUOTE(tss_backpack);
        //control = QGVARMAIN(backpackControl);
        control = "Combo";
        displayName = "Custom Backpack";
        tooltip = "Changes backpack to selection";
        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBackpack),_value, true)]; [_this] call FUNC(applyLoadout));
        typeName = "STRING";
        condition = "objectBrain";
        defaultValue = "small";
        class values {
            class default {
                name = "All";
                value = "all";
                default = 1;
            };
            class none {
                name = "none";
                value = "";
            };
            class assaultpack {
                name = "small";
                value = "small";
            };
            class kitbag {
                name = "Medium";
                value = "medium";
            };
            class carryall {
                name = "Large";
                value = "large";
            };
            class darter {
                name = "Darter";
                value = "darter";
            };
        };
    };
    class GVARMAIN(muzzle) : GVARMAIN(backpack) {
        property = QUOTE(tss_muzzle);
        //control = QGVARMAIN(muzzleControl);
        control = "Combo";
        displayName = "Custom Muzzle";
        tooltip = "Changes muzzle to selection";
        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenMuzzle),_value, true)]; [_this] call FUNC(applyLoadout));
        typeName = "STRING";
        condition = "objectBrain";
        defaultValue = "";
        class values {
            class default {
                name = "$STR_3DEN_Attributes_Lock_Default_text";
                value = "fire";
                default = 1;
            };
            class silenced {
                name = "Schalldämpfer";
                value = "silent";
            };
        };
    };
    class GVARMAIN(bipod) : GVARMAIN(backpack) {
        property = QUOTE(tss_bipod);
        //control = QGVARMAIN(bipodControl);
        control = "Combo";
        displayName = "Add Bipod";
        tooltip = "Adds a Bipod";
        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBipod),_value, true)]; [_this] call FUNC(applyLoadout));
        typeName = "STRING";
        condition = "objectBrain";
        defaultValue = -1;
        class values {
            class default {
                name = "$STR_3DEN_Attributes_Lock_Default_text";
                value = "none";
                default = 1;
            };
            class bipod {
                name = "Bipod";
                value = "bipod";
            };
        };
    };
};
