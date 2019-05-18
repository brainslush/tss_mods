#define combocamoentry(var1) \
class var1 { \
    name = #var1; \
    value = #var1; \
};
#define camoexpression(var1) expression = QUOTE(missionnamespace setVariable [ARR_3(QQGVARMAIN(var1),_value, true)]; if (is3DEN) then {call FUNC(reequipALL)});

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class GVARMAIN(attributes) {
                class Attributes {
                    class GVARMAIN(backpack) {
                        property = QUOTE(tss_backpack);
                        //control = QGVARMAIN(backpackControl);
                        control = "Combo";
                        displayName = "Custom Backpack";
                        tooltip = "Changes backpack to selection";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBackpack),_value, true)]; _this spawn FUNC(equip));
                        typeName = "NUMBER";
                        condition = "objectBrain";
                        defaultValue = -1;
                        class values {
                            class DEFAULT {
                                name = "$STR_3DEN_Attributes_Lock_Default_text";
                                value = -1;
                                default = 1;
                            };
                            class KEIN {
                                name = "Kein";
                                value = 0;
                            };
                            class ASSAULTPACK {
                                name = "Assault Pack";
                                value = 1;
                            };
                            class KITBAG {
                                name = "Kitbag Pack";
                                value = 2;
                            };
                            class CARRYALL {
                                name = "Carryall";
                                value = 3;
                            };
                            class CRYERO {
                                name = "Cryero";
                                value = 4;
                            };
                            class DARTER {
                                name = "Darter";
                                value = 5;
                            };
                            class CRRC {
                                name = "CRRC";
                                value = 6;
                            };
                            class M3TRIPOD {
                                name = "M3 Minitripod";
                                value = 7;
                            };
                            class M2GUN {
                                name = "M2 Gun";
                                value = 8;
                            };
                            class MK19TRIPOD {
                                name = "Mk19 Tripod";
                                value = 9;
                            };
                            class MK19GUN {
                                name = "Mk19 Gun";
                                value = 10;
                            };
                            class ATROUNDCARRIER {
                                name = "AT Round Carrier";
                                value = 11;
                            };
                            class ANTENNABAG {
                                name = "Antenna Bag";
                                value = 12;
                            };
                        };
                    };
                    class GVARMAIN(muzzle) : GVARMAIN(backpack) {
                        property = QUOTE(tss_muzzle);
                        //control = QGVARMAIN(muzzleControl);
                        control = "Combo";
                        displayName = "Custom Muzzle";
                        tooltip = "Changes muzzle to selection";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenMuzzle),_value, true)]; _this spawn FUNC(equip));
                        typeName = "NUMBER";
                        condition = "objectBrain";
                        defaultValue = -1;
                        class values {
                            class DEFAULT {
                                name = "$STR_3DEN_Attributes_Lock_Default_text";
                                value = -1;
                                default = 1;
                            };
                            class PRIM {
                                name = "Primär";
                                value = 0;
                            };
                            class SEK {
                                name = "Sekundär";
                                value = 1;
                            };
                            class BOTH {
                                name = "Beide";
                                value = 1;
                            };
                        };
                    };
                    class GVARMAIN(bipod) : GVARMAIN(backpack) {
                        property = QUOTE(tss_bipod);
                        //control = QGVARMAIN(bipodControl);
                        control = "Combo";
                        displayName = "Add Bipod";
                        tooltip = "Adds a Bipod";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBipod),_value, true)]; _this spawn FUNC(equip));
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
                                value = 0;
                            };
                        };
                    };
                };
            };
        };
    };
    class Mission {
        class Scenario {
            class AttributeCategories {
                class ADDON {
                    displayName = "TSS Units Atributes";
                    class Attributes {
                        class DisableNVG {
                            displayName = "Deaktiviere NVG";
                            property = QGVARMAIN(3den_disableNVG);
                            control = "Checkbox";
                            camoexpression(3den_disableNVG)
                            defaultValue = "false";
                            typeName = "BOOL";
                            wikiType = "[[Bool]]";
                        };
                        class CamoRanger {
                            displayName = "Ranger Camo";
                            property = QGVARMAIN(3den_camoRanger);
                            control = "Combo";
                            camoexpression(3den_camoRanger)
                            defaultValue = "";
                            typeName = "STRING";
                            wikiType = "[[String]]";
                            class values {
                                class DEFAULT {
                                    name = "Wie gesetzt";
                                    value = "";
                                    default = 1;
                                };
                                combocamoentry(DES1)
                                combocamoentry(DES2)
                                combocamoentry(WDL1)
                                combocamoentry(WDL2)
                                combocamoentry(JGL1)
                                combocamoentry(JGL2)
                                combocamoentry(MDT1)
                                combocamoentry(MDT2)
                                combocamoentry(MOUT)
                                combocamoentry(SNOW)
                                combocamoentry(BUAT)
                            };
                        };
                    };
                };
            };
        };
    };
};
