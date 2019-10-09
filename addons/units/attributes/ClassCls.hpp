class GVARMAIN(clsb) {
    property = QUOTE(tss_clsb);
    control = "Checkbox";
    displayName = "CLS Bravo";
    tooltip = "Fügt CLS Bravo Kit zur Einheit hinzu";
    expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenClsB), _value, true)]; [_this] call FUNC(applyLoadout));
    typeName = "BOOL";
    condition = "objectBrain";
    defaultValue = "(false)";
};