class GVARMAIN(bipod) {
    property = QUOTE(tss_bipod);
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