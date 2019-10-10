class CfgDifficultyPresets {
    delete Recruit;
    delete Regular;
    delete Veteran;
    defaultPreset = QUOTE(ADDON);
    class ADDON {
        description = "Hat das TSS BCT bestanden";
        displayName = "TSS";
        optionDescription = "Hat das TSS BCT bestanden";
        optionPicture = QPATHTOEF(main,data\ui\tss.paa);
        levelAI = QGVVAR(TSS);
        // aiLevelPreset defines AI skill level and is counted from 0 and can have following values: 0 (Low), 1 (Normal), 2 (High), 3 (Custom).
        // when 3 (Custom) is chosen, values of skill and precision are taken from the class CustomAILevel.
        levelAI = 3;

        class Options {
            /* Simulation */
            reducedDamage = 0;    // Reduced damage

            /* Situational awareness */
            groupIndicators = 0;    // Group indicators (0 = never, 1 = limited distance, 2 = always)
            friendlyTags = 0;    // Friendly name tags (0 = never, 1 = limited distance, 2 = always)
            enemyTags = 0;      // Enemy name tags (0 = never, 1 = limited distance, 2 = always)
            detectedMines = 0;    // Detected mines (0 = never, 1 = limited distance, 2 = always)
            commands = 0;      // Commands (0 = never, 1 = fade out, 2 = always)
            waypoints = 0;      // Waypoints (0 = never, 1 = fade out, 2 = always)

            /* Personal awareness */
            weaponInfo = 1;      // Weapon info (0 = never, 1 = fade out, 2 = always)
            stanceIndicator = 1;    // Stance indicator (0 = never, 1 = fade out, 2 = always)
            staminaBar = 1;      // Stamina bar
            weaponCrosshair = 0;    // Weapon crosshair
            visionAid = 0;      // Vision aid
            squadRadar = 0;      // Squad radar

            /* View */
            thirdPersonView = 0;    // 3rd person view
            cameraShake = 1;      // Camera shake

            /* Multiplayer */
            scoreTable = 0;      // Score table
            deathMessages = 0;    // Killed by
            vonID = 0;      // VoN ID

            /* Misc */
            mapContent = 0;      // Extended map content
            autoReport = 0;      // (former autoSpot) Automatic reporting of spotted enemied by players only. This doesn't have any effect on AIs.
            multipleSaves = 0;    // Multiple saves
        };
    };

    class CustomAILevel {
        skillAI = 1.0;
        precisionAI = 0.7;
    };
};
