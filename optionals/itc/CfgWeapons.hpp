class BaseSoundModeType;

class cfgWeapons
{
    class CannonCore;
    class weapon_Cannon_Phalanx: CannonCore {
        class manual;
        class close;
        class medium;
        class far;
    };
    class itc_land_weapon_cram: weapon_Cannon_Phalanx {
        class manual: manual {
            class StandardSound: BaseSoundModeType {
                begin1[] = {QPATHTOF(sounds\phalanxcannon.wss), 4, 1, 1000};
                soundBegin[] = {"begin1", 1};
                end1[] = {QPATHTOF(sounds\phalanxend), 3, 1, 1000};
                soundEnd[] = {"end1", 1};
            };
        };
        class close: close {
            class StandardSound: BaseSoundModeType {
                begin1[] = {QPATHTOF(sounds\phalanxcannon.wss), 4, 1, 1000};
                soundBegin[] = {"begin1", 1};
                end1[] = {QPATHTOF(sounds\phalanxend), 3, 1, 1000};
                soundEnd[] = {"end1", 1};
            };
        };
        class medium: medium {
            class StandardSound: BaseSoundModeType {
                begin1[] = {QPATHTOF(sounds\phalanxcannon.wss), 4, 1, 1000};
                soundBegin[] = {"begin1", 1};
                end1[] = {QPATHTOF(sounds\phalanxend), 3, 1, 1000};
                soundEnd[] = {"end1", 1};
            };
        };
        class far: far {
            class StandardSound: BaseSoundModeType {
                begin1[] = {QPATHTOF(sounds\phalanxcannon.wss), 4, 1, 1000};
                soundBegin[] = {"begin1", 1};
                end1[] = {QPATHTOF(sounds\phalanxend), 3, 1, 1000};
                soundEnd[] = {"end1", 1};
            };
        };
    };
};
