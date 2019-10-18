class ACE_Medical_Actions {
    class Advanced {
        class fieldDressing;
        class SurgicalKit: fieldDressing {
            treatmentTime = "(count ((_this select 1) getVariable ['ACE_Medical_bandagedWounds', []]) * 60)";
        };

        class PersonalAidKit: fieldDressing {
            condition = "!((_this select 1) getVariable 'ACE_isUnconscious') &&  ( count ((_this select 1) getVariable ['ace_medical_bandagedWounds', []]) == 0) &&  (((_this select 1) getVariable ['ace_medical_bloodVolume', 100]) > 90)";
        };
    };
};

#define MULTIPLIER 0.4
class ACE_Medical_Advanced {
    class Treatment {
        class Bandaging {
            class FieldDressing {
                class Abrasion {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class AbrasionMedium: Abrasion {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class AbrasionLarge: Abrasion {
                    reopeningChance = MULTIPLIER * 0.9;
                };
                class Avulsions: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class Contusion: Abrasion {
                    reopeningChance = MULTIPLIER * 0;
                };
                class CrushWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.2;
                };
                class CrushWoundMinor: CrushWound {
                    reopeningChance = MULTIPLIER * 0.2;
                };
                class CrushWoundMedium: CrushWound {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class CrushWoundLarge: CrushWound {
                    reopeningChance = MULTIPLIER * 0.4;
                };
                class Cut: Abrasion {
                    reopeningChance = MULTIPLIER * 0.1;
                };
                class CutMinor: Cut {
                    reopeningChance = MULTIPLIER * 0.1;
                };
                class CutMedium: Cut {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class CutLarge: Cut {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class Laceration: Abrasion {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class LacerationMinor: Laceration {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class LacerationMedium: Laceration {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class LacerationLarge: Laceration {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class velocityWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class punctureWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
            };
            class PackingBandage: fieldDressing {
                class Abrasion {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class AbrasionMedium: Abrasion {
                    reopeningChance = MULTIPLIER * 0.9;
                };
                class AbrasionLarge: Abrasion {
                    reopeningChance = MULTIPLIER * 1;
                };
                class Avulsions: Abrasion {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class Contusion: Abrasion {
                    reopeningChance = MULTIPLIER * 0;
                };
                class CrushWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class CrushWoundMinor: CrushWound {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class CrushWoundMedium: CrushWound {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class CrushWoundLarge: CrushWound {
                    reopeningChance = MULTIPLIER * 0.8;
                };
                class Cut: Abrasion {
                    reopeningChance = MULTIPLIER * 0.4;
                };
                class CutMinor: Cut {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class CutMedium: Cut {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class CutLarge: Cut {
                    reopeningChance = MULTIPLIER * 0.8;
                };
                class Laceration: Abrasion {
                    reopeningChance = MULTIPLIER * 0.65;
                };
                class LacerationMinor: Laceration {
                    reopeningChance = MULTIPLIER * 0.65;
                };
                class LacerationMedium: Laceration {
                    reopeningChance = MULTIPLIER * 0.8;
                };
                class LacerationLarge: Laceration {
                    reopeningChance = MULTIPLIER * 0.9;
                };
                class velocityWound: Abrasion {
                    reopeningChance = MULTIPLIER * 1;
                };
                class punctureWound: Abrasion {
                    reopeningChance = MULTIPLIER * 1;
                };
            };
            class ElasticBandage: fieldDressing {
                class Abrasion {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class AbrasionMedium: Abrasion {
                    reopeningChance = MULTIPLIER * 0.9;
                };
                class AbrasionLarge: Abrasion {
                    reopeningChance = MULTIPLIER * 1;
                };
                class Avulsions: Abrasion {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class Contusion: Abrasion {
                    reopeningChance = MULTIPLIER * 0;
                };
                class CrushWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class CrushWoundMinor: CrushWound {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class CrushWoundMedium: CrushWound {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class CrushWoundLarge: CrushWound {
                    reopeningChance = MULTIPLIER * 0.8;
                };
                class Cut: Abrasion {
                    reopeningChance = MULTIPLIER * 0.4;
                };
                class CutMinor: Cut {
                    reopeningChance = MULTIPLIER * 0.6;
                };
                class CutMedium: Cut {
                    reopeningChance = MULTIPLIER * 0.7;
                };
                class CutLarge: Cut {
                    reopeningChance = MULTIPLIER * 0.8;
                };
                class Laceration: Abrasion {
                    reopeningChance = MULTIPLIER * 0.65;
                };
                class LacerationMinor: Laceration {
                    reopeningChance = MULTIPLIER * 0.65;
                };
                class LacerationMedium: Laceration {
                    reopeningChance = MULTIPLIER * 0.8;
                };
                class LacerationLarge: Laceration {
                    reopeningChance = MULTIPLIER * 0.9;
                };
                class velocityWound: Abrasion {
                    reopeningChance = MULTIPLIER * 1;
                };
                class punctureWound: Abrasion {
                    reopeningChance = MULTIPLIER * 1;
                };
            };
            class QuikClot: fieldDressing {
                class Abrasion {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class AbrasionMedium: Abrasion {
                    reopeningChance = MULTIPLIER * 0.4;
                };
                class AbrasionLarge: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class Avulsions: Abrasion {
                    reopeningChance = MULTIPLIER * 0.2;
                };
                class Contusion: Abrasion {
                    reopeningChance = MULTIPLIER * 0;
                };
                class CrushWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class CrushWoundMinor: CrushWound {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class Cut: Abrasion {
                    reopeningChance = MULTIPLIER * 0.2;
                };
                class CutMinor: Cut {
                    reopeningChance = MULTIPLIER * 0.3;
                };
                class Laceration: Abrasion {
                    reopeningChance = MULTIPLIER * 0.4;
                };
                class LacerationMinor: Laceration {
                    reopeningChance = MULTIPLIER * 0.4;
                };
                class velocityWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
                class punctureWound: Abrasion {
                    reopeningChance = MULTIPLIER * 0.5;
                };
            };
        };

        class Medication {
            class Morphine {
                timeInSystem = 2700;
            };
        };
    };
};
