#define COMBOENTRY(var1) \
class var1 { \
    name = #var1; \
    value = #var1; \
}
#define CEXPRESSION(var1) expression = QUOTE(missionnamespace setVariable [ARR_2(QQGVARMAIN(var1),_value)]; call FUNC(reequip3Den);)
#define CEXPRESSION2(var1) expression = QUOTE(missionnamespace setVariable [ARR_2(QQGVARMAIN(var1),_value)];)

class Cfg3DEN {
    class Mission {
        class Scenario {
            class AttributeCategories {
                class ADDON {
                    displayName = "TSS Units Atributes";
                    class Attributes {
                        class DisableNVG {
                            displayName = "Tag / Nacht";
                            property = QGVARMAIN(3denDayNight);
                            control = "Combo";
                            CEXPRESSION(3denDayNight);
                            defaultValue = "day";
                            typeName = "STRING";
                            wikiType = "[[String]]";
                            class values {
                                class DEFAULT {
                                    name = "Tag";
                                    value = "day";
                                    default = 1;
                                };
                                COMBOENTRY(Night);
                                COMBOENTRY(Both);
                            };
                        };
                        class Camo {
                            displayName = "Camo";
                            property = QGVARMAIN(3denCamo);
                            control = "Combo";
                            CEXPRESSION(3denCamo);
                            defaultValue = "mdt";
                            typeName = "STRING";
                            wikiType = "[[String]]";
                            class values {
                                class DEFAULT {
                                    name = "Mdt";
                                    value = "mdt";
                                    default = 1;
                                };
                                COMBOENTRY(des);
                                COMBOENTRY(wdl);
                                COMBOENTRY(snw);
                            };
                        };
                        class LoadoutRange {
                            displayName = "Loadout-Interkation Reichweite";
                            property = QGVARMAIN(3denLoadoutRange);
                            control = "EditShort";
                            CEXPRESSION2(3denLoadoutRange);
                            defaultValue = 30;
                            typeName = "NUMBER";
                            wikiType = "[[NUMBER]]";
                        };
                        class LoadoutTimeout {
                            displayName = "Loadout-Interkation Timeout in Sekunden";
                            property = QGVARMAIN(3denLoadoutTimeout);
                            control = "EditShort";
                            CEXPRESSION2(3denLoadoutTimeout);
                            defaultValue = 600;
                            typeName = "NUMBER";
                            wikiType = "[[NUMBER]]";
                        };
                    };
                };
            };
        };
    };
    class Object {
        class AttributeCategories {
            class ADDON {
                displayName = "=TSS= Einstellungen";
                collapsed = 0;
                class Attributes {
                    class GVAR(MedKitClsAlpha) {
                        displayName = "CLS Kit Alpha Interaktion";
                        tooltip = "Fügt ACE Interaktion zum Objekt hinzu um ein CLS Kit Alpha zu beziehen.";
                        property = QGVAR(3denGetMedicAlpha);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(addMedKitInteraction), [_this, 'ClsAlpha'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(MedKitClsBravo) {
                        displayName = "CLS Kit Bravo Interaktion";
                        tooltip = "Fügt ACE Interaktion zum Objekt hinzu um ein CLS Kit Bravo zu beziehen.";
                        property = QGVAR(3denGetMedicBravo);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(addMedKitInteraction), [_this, 'ClsBravo'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(MedKitPtm) {
                        displayName = "Platoon Medic Kit Interaktion";
                        tooltip = "Fügt ACE Interaktion zum Objekt hinzu um ein Platoon Medic Kit zu beziehen.";
                        property = QGVAR(3denGetMedicPtm);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(addMedKitInteraction), [_this, 'Ptm'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(MedKitPtd) {
                        displayName = "Platoon Doctor Kit Interaktion";
                        tooltip = "Fügt ACE Interaktion zum Objekt hinzu um ein Platoon Doctor Kit zu beziehen.";
                        property = QGVAR(3denGetMedicPtd);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(addMedKitInteraction), [_this, 'Ptd'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(MedKitPtdBase) {
                        displayName = "Platoon Doctor Base Kit Interaktion";
                        tooltip = "Fügt ACE Interaktion zum Objekt hinzu um ein Platoon Doctor Base Kit zu beziehen.";
                        property = QGVAR(3denGetMedicPtdBase);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(addMedKitInteraction), [_this, 'PtdBase'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(MagazineArsenal) {
                        displayName = "Munitions-Arsenal Interaktion";
                        tooltip = "Fügt TSS Munitions-Arsenal zum Objekt hinzu.";
                        property = QGVAR(3denMagazineArsenal);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(initArsenal), [_this, 'magazines'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(TSSArsenal) {
                        displayName = "TSS-Arsenal Interaktion";
                        tooltip = "Fügt TSS-Arsenal zum Objekt hinzu.";
                        property = QGVAR(3denTSSArsenal);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_3(QQGVAR(initArsenal), [_this, 'tss'])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    class GVAR(PersonalArsenal) {
                        displayName = "Eigen-Arsenal Interaktion";
                        tooltip = "Fügt Eigen-Arsenal Interaktion zum Objekt hinzu.";
                        property = QGVAR(3denPersonalArsenal);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_2(QQGVAR(initPersonalBox), [_this])] call CBA_fnc_globalEventJIP});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    /*
                    class GVAR(ObtainMagazine) {
                        displayName = "TSS-Arsenal Interaktion";
                        tooltip = "Fügt TSS-Arsenal zum Objekt hinzu.";
                        property = QGVAR(3denMagazineArsenal);
                        control = "Checkbox";
                        expression = QUOTE(if(_value) then {[ARR_2(_this, 'tss')] call FUNC(initArsenal)});
                        defaultValue = "(false)";
                        condition = "objectSimulated * (1 - objectBrain) * (1 - objectVehicle) * (1 - objectAgent)";
                        typeName = "BOOL";
                    };
                    */
                };
            };
        };
    };
};
