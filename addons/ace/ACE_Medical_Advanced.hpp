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


class ACE_Medical_Advanced {
    class Treatment {
        class Bandaging {
            class FieldDressing {
                // How effect is the bandage for treating one wounds type injury
                effectiveness = 1;
                // What is the chance and delays (in seconds) of the treated default injury reopening
                reopeningChance = 0.005;
                reopeningMinDelay = 120;
                reopeningMaxDelay = 200;
            };
        };
        class Medication {
            class Morphine {
                painReduce = 15;
                hrIncreaseLow[] = {-10, -20, 35};
                hrIncreaseNormal[] = {-10, -30, 35};
                hrIncreaseHigh[] = {-10, -35, 50};
                timeInSystem = 2700;
                maxDose = 4;
                inCompatableMedication[] = {};
                viscosityChange = -10;
            };
        };
    };
};
