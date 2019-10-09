class GVARMAIN(muzzle) {
    property = QUOTE(tss_muzzle);
    control = "Combo";
    displayName = "Custom Muzzle";
    tooltip = "Changes muzzle to selection";
    expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenMuzzle),_value, true)]; [_this] call FUNC(applyLoadout));
    typeName = "STRING";
    condition = "objectBrain";
    defaultValue = "fire";
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