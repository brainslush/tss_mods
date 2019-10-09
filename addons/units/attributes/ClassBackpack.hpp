class GVARMAIN(backpack) {
    property = QUOTE(tss_backpack);
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