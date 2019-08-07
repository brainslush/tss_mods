#define COMBOENTRY(var1) \
class var1 { \
    name = #var1; \
    value = #var1; \
}
#define CEXPRESSION(var1) expression = QUOTE(missionnamespace setVariable [ARR_3(QQGVARMAIN(var1),_value, true)]; if (is3DEN) then {call FUNC(reequipALL)})

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            /*
            class GVARMAIN(attributes) {
                class Attributes {
                    class GVARMAIN(backpack) {
                        property = QUOTE(tss_backpack);
                        //control = QGVARMAIN(backpackControl);
                        control = "Combo";
                        displayName = "Custom Backpack";
                        tooltip = "Changes backpack to selection";
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBackpack),_value, true)]; _this spawn FUNC(applyLoadout));
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
                                name = "Kein";
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
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenMuzzle),_value, true)]; _this spawn FUNC(applyLoadout));
                        typeName = "STRING";
                        condition = "objectBrain";
                        defaultValue = "";
                        class values {
                            class default {
                                name = "$STR_3DEN_Attributes_Lock_Default_text";
                                value = "";
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
                        expression = QUOTE(_this setVariable [ARR_3(QQGVAR(EdenBipod),_value, true)]; _this spawn FUNC(applyLoadout));
                        typeName = "STRING";
                        condition = "objectBrain";
                        defaultValue = -1;
                        class values {
                            class default {
                                name = "$STR_3DEN_Attributes_Lock_Default_text";
                                value = "";
                                default = 1;
                            };
                            class bipod {
                                name = "Bipod";
                                value = "bipod";
                            };
                        };
                    };
                };
            };
            */
        };
    };
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
                        class Backpack {
                            displayName = "Backpack";
                            property = QGVARMAIN(3denBackpack);
                            control = "Combo";
                            CEXPRESSION(3denBackpack);
                            defaultValue = "";
                            typeName = "STRING";
                            wikiType = "[[String]]";
                            class values {
                                class DEFAULT {
                                    name = "Alle";
                                    value = "all";
                                    default = 1;
                                };
                                COMBOENTRY(small);
                                COMBOENTRY(medium);
                                COMBOENTRY(large);
                            };
                        };
                        class Muzzle {
                            displayName = "Muzzle";
                            property = QGVARMAIN(3denMuzzle);
                            control = "Combo";
                            CEXPRESSION(3denMuzzle)
                            defaultValue = "";
                            typeName = "STRING";
                            wikiType = "[[String]]";
                            class values {
                                class DEFAULT {
                                    name = "Alle";
                                    value = "all";
                                    default = 1;
                                };
                                COMBOENTRY(small);
                                COMBOENTRY(medium);
                                COMBOENTRY(large);
                            };
                        };
                    };
                };
            };
        };
    };
};
