#define COMBOENTRY(var1) \
class var1 { \
    name = #var1; \
    value = #var1; \
}
#define CEXPRESSION(var1) expression = QUOTE(missionnamespace setVariable [ARR_3(QQGVARMAIN(var1),_value, true)]; call FUNC(reequip3Den);)

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
                        /*
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
                            CEXPRESSION(3denMuzzle);
                            defaultValue = "";
                            typeName = "STRING";
                            wikiType = "[[String]]";
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
                        */
                    };
                };
            };
        };
    };
};
