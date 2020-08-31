// ACE Advanced Ballistics
force force ace_advanced_ballistics_ammoTemperatureEnabled = true;
force force ace_advanced_ballistics_barrelLengthInfluenceEnabled = true;
force force ace_advanced_ballistics_bulletTraceEnabled = true;
force force ace_advanced_ballistics_enabled = true;
force force ace_advanced_ballistics_muzzleVelocityVariationEnabled = true;
force force ace_advanced_ballistics_simulationInterval = 0.05;

// ACE Advanced Fatigue
force force ace_advanced_fatigue_enabled = true;
force force ace_advanced_fatigue_loadFactor = 1;
force force ace_advanced_fatigue_performanceFactor = 1;
force force ace_advanced_fatigue_recoveryFactor = 1;
force force ace_advanced_fatigue_swayFactor = 1;
force force ace_advanced_fatigue_terrainGradientFactor = 1;

// ACE Advanced Throwing
force ace_advanced_throwing_enablePickUp = true;
force ace_advanced_throwing_enablePickUpAttached = true;

// ACE Arsenal
force ace_arsenal_allowDefaultLoadouts = true;
force ace_arsenal_allowSharedLoadouts = true;
force ace_arsenal_enableIdentityTabs = true;

// ACE Artillery
ace_artillerytables_advancedCorrections = true;
ace_artillerytables_disableArtilleryComputer = true;
ace_mk6mortar_airResistanceEnabled = true;
ace_mk6mortar_allowCompass = false;
ace_mk6mortar_allowComputerRangefinder = false;
ace_mk6mortar_useAmmoHandling = true;

// ACE Captives
force ace_captives_allowHandcuffOwnSide = true;
force ace_captives_allowSurrender = true;
force ace_captives_requireSurrender = 1;
force ace_captives_requireSurrenderAi = false;

// ACE Common
force ace_common_checkPBOsAction = 0;
force ace_common_checkPBOsCheckAll = true;
force ace_common_checkPBOsWhitelist = "[""cba_settings_userconfig"", ""Intercept_Core"", ""dedmen_sqf_assembly"", ""dedmen_arma_script_profiler""]";
force ace_noradio_enabled = true;
force force ace_parachute_hideAltimeter = true;

// ACE Cook off
force force ace_cookoff_ammoCookoffDuration = 1;
force ace_cookoff_enable = true;
force ace_cookoff_enableAmmobox = true;
force ace_cookoff_enableAmmoCookoff = true;
force ace_cookoff_probabilityCoef = 1;

// ACE Crew Served Weapons
force ace_csw_ammoHandling = 2;
force force ace_csw_defaultAssemblyMode = true;
force force ace_csw_handleExtraMagazines = true;
force ace_csw_progressBarTimeCoefficent = 2;

// ACE Explosives
force force ace_explosives_explodeOnDefuse = true;
force force ace_explosives_punishNonSpecialists = true;
force force ace_explosives_requireSpecialist = true;

// ACE Fragmentation Simulation
force force ace_frag_enabled = true;
force ace_frag_maxTrack = 10;
force ace_frag_maxTrackPerFrame = 10;
force force ace_frag_reflectionsEnabled = false;
force force ace_frag_spallEnabled = false;

// ACE Goggles
force force ace_goggles_effects = 2;
ace_goggles_showInThirdPerson = false;

// ACE Hearing
force force ace_hearing_autoAddEarplugsToUnits = false;
force force ace_hearing_disableEarRinging = true;
force force ace_hearing_earplugsVolume = 0.5;
force force ace_hearing_enableCombatDeafness = false;
force force ace_hearing_enabledForZeusUnits = false;
force force ace_hearing_unconsciousnessVolume = 0.4;

// ACE Interaction
force force ace_interaction_disableNegativeRating = true;
force ace_interaction_enableMagazinePassing = true;
force ace_interaction_enableTeamManagement = true;

// ACE Logistics
force force ace_cargo_enable = true;
ace_cargo_loadTimeCoefficient = 5;
ace_cargo_paradropTimeCoefficent = 4;
force ace_rearm_level = 1;
force ace_rearm_supply = 0;
ace_refuel_hoseLength = 50;
force force ace_refuel_rate = 0.519893;
ace_repair_addSpareParts = true;
force force ace_repair_autoShutOffEngineWhenStartingRepair = false;
force force ace_repair_consumeItem_toolKit = 0;
force ace_repair_engineerSetting_fullRepair = 2;
ace_repair_engineerSetting_repair = 1;
ace_repair_engineerSetting_wheel = 0;
ace_repair_fullRepairLocation = 3;
force ace_repair_fullRepairRequiredItems = ["ToolKit"];
force ace_repair_miscRepairRequiredItems = ["ToolKit"];
force ace_repair_repairDamageThreshold = 0.6;
force ace_repair_repairDamageThreshold_engineer = 0.4;
force force ace_repair_wheelRepairRequiredItems = [];

// ACE Magazine Repack
force force ace_magazinerepack_timePerAmmo = 3;
force force ace_magazinerepack_timePerBeltLink = 10;
force force ace_magazinerepack_timePerMagazine = 5;

// ACE Map
force force ace_map_BFT_Enabled = false;
force ace_map_DefaultChannel = -1;
force force ace_map_mapGlow = true;
force force ace_map_mapIllumination = true;
ace_map_mapLimitZoom = false;
force force ace_map_mapShake = true;
force ace_map_mapShowCursorCoordinates = false;
force force ace_markers_moveRestriction = 0;

// ACE Map Gestures
force force ace_map_gestures_enabled = true;
force force ace_map_gestures_interval = 0.03;
force force ace_map_gestures_maxRange = 8;

// ACE Medical
ace_medical_ai_enabledFor = 0;
force force ace_medical_AIDamageThreshold = 1;
force force ace_medical_bleedingCoefficient = 0.5;
force force ace_medical_blood_bloodLifetime = 900;
force force ace_medical_blood_enabledFor = 2;
force force ace_medical_blood_maxBloodObjects = 500;
force force ace_medical_fatalDamageSource = 2;
ace_medical_fractures = 2;
force ace_medical_gui_maxDistance = 3;
force force ace_medical_ivFlowRate = 1;
ace_medical_limping = 1;
force force ace_medical_painCoefficient = 5;
force force ace_medical_playerDamageThreshold = 25;
force force ace_medical_spontaneousWakeUpChance = 0.05;
force force ace_medical_spontaneousWakeUpEpinephrineBoost = 3;
ace_medical_statemachine_AIUnconsciousness = true;
ace_medical_statemachine_cardiacArrestTime = 360;
force force ace_medical_statemachine_fatalInjuriesAI = 0;
force force ace_medical_statemachine_fatalInjuriesPlayer = 0;
force force ace_medical_treatment_advancedBandages = true;
force force ace_medical_treatment_advancedDiagnose = true;
force force ace_medical_treatment_advancedMedication = true;
force ace_medical_treatment_allowLitterCreation = true;
ace_medical_treatment_allowSelfIV = 1;
ace_medical_treatment_allowSelfStitch = 0;
force force ace_medical_treatment_allowSharedEquipment = 0;
ace_medical_treatment_clearTraumaAfterBandage = false;
ace_medical_treatment_consumePAK = 1;
ace_medical_treatment_consumeSurgicalKit = 1;
force ace_medical_treatment_convertItems = 0;
force ace_medical_treatment_cprSuccessChance = 0.4;
force ace_medical_treatment_holsterRequired = 2;
ace_medical_treatment_litterCleanupDelay = 600;
force ace_medical_treatment_locationEpinephrine = 0;
ace_medical_treatment_locationPAK = 2;
force force ace_medical_treatment_locationsBoostTraining = false;
ace_medical_treatment_locationSurgicalKit = 2;
ace_medical_treatment_maxLitterObjects = 500;
ace_medical_treatment_medicEpinephrine = 0;
ace_medical_treatment_medicPAK = 2;
ace_medical_treatment_medicSurgicalKit = 2;
ace_medical_treatment_timeCoefficientPAK = 5;
force ace_medical_treatment_woundReopening = true;

// ACE Nightvision
force force ace_nightvision_aimDownSightsBlur = 0;
force force ace_nightvision_disableNVGsWithSights = false;
ace_nightvision_effectScaling = 0.1;
ace_nightvision_fogScaling = 0;
ace_nightvision_noiseScaling = 0.1;
ace_nightvision_shutterEffects = true;

// ACE Overheating
force force ace_overheating_enabled = true;
force force ace_overheating_overheatingDispersion = true;
ace_overheating_showParticleEffects = true;
ace_overheating_showParticleEffectsForEveryone = true;
force force ace_overheating_unJamFailChance = 0.199049;
force ace_overheating_unJamOnreload = false;

// ACE Pointing
force force ace_finger_enabled = true;
force force ace_finger_indicatorForSelf = true;
force force ace_finger_maxRange = 5;

// ACE Pylons
force ace_pylons_enabledForZeus = true;
force ace_pylons_enabledFromAmmoTrucks = true;
force ace_pylons_rearmNewPylons = false;
force ace_pylons_requireEngineer = false;
force ace_pylons_requireToolkit = false;
force ace_pylons_searchDistance = 50;
force ace_pylons_timePerPylon = 10;

// ACE Quick Mount
force force ace_quickmount_distance = 3;
force force ace_quickmount_speed = 2;

// ACE Respawn
force force ace_respawn_removeDeadBodiesDisconnected = false;
force force ace_respawn_savePreDeathGear = false;

// ACE Scopes
force force ace_scopes_correctZeroing = true;
force force ace_scopes_deduceBarometricPressureFromTerrainAltitude = false;
force force ace_scopes_defaultZeroRange = 100;
force force ace_scopes_enabled = true;
force force ace_scopes_forceUseOfAdjustmentTurrets = false;
force force ace_scopes_overwriteZeroRange = false;
force force ace_scopes_simplifiedZeroing = false;
force force ace_scopes_useLegacyUI = false;
force force ace_scopes_zeroReferenceBarometricPressure = 1013.25;
force force ace_scopes_zeroReferenceHumidity = 0;
force force ace_scopes_zeroReferenceTemperature = 15;

// ACE Spectator
force ace_spectator_enableAI = false;
force ace_spectator_restrictModes = 0;
force ace_spectator_restrictVisions = 0;

// ACE Switch Units
force force ace_switchunits_enableSwitchUnits = false;

// ACE Uncategorized
force ace_fastroping_requireRopeItems = true;
force force ace_gforces_enabledFor = 2;
force ace_hitreactions_minDamageToTrigger = 0.5;
force force ace_laser_dispersionCount = 2;
force ace_microdagr_mapDataAvailable = 2;
force ace_microdagr_waypointPrecision = 2;
ace_optionsmenu_showNewsOnMainMenu = true;
force force ace_overpressure_distanceCoefficient = 1;

// ACE User Interface
force ace_ui_allowSelectiveUI = true;

// ACE Vehicle Lock
force ace_vehiclelock_defaultLockpickStrength = 60;
force ace_vehiclelock_lockVehicleInventory = false;
force ace_vehiclelock_vehicleStartingLockState = -1;

// ACE Vehicles
force force ace_vehicles_keepEngineRunning = true;

// ACE Weather
force ace_weather_enabled = true;
force ace_weather_updateInterval = 60;
force ace_weather_windSimulation = true;

// ACE Wind Deflection
force force ace_winddeflection_enabled = true;
force force ace_winddeflection_simulationInterval = 0.05;
force force ace_winddeflection_vehicleEnabled = true;

// ACE Zeus
force force ace_zeus_autoAddObjects = false;
force force ace_zeus_canCreateZeus = 1;
force force ace_zeus_radioOrdnance = false;
force force ace_zeus_remoteWind = false;
force force ace_zeus_revealMines = 0;
force force ace_zeus_zeusAscension = false;
force force ace_zeus_zeusBird = false;

// ACEX Sitting
force acex_sitting_enable = true;

// ACRE2
acre_sys_core_automaticAntennaDirection = true;
force force acre_sys_core_fullDuplex = false;
force acre_sys_core_ignoreAntennaDirection = true;
force acre_sys_core_interference = true;
force force acre_sys_core_revealToAI = 1;
force acre_sys_core_terrainLoss = 0.1;
force force acre_sys_core_ts3ChannelSwitch = false;
force acre_sys_signal_signalModel = 2;

// ACRE2 Zeus
acre_sys_zeus_zeusCanSpectate = true;
acre_sys_zeus_zeusCommunicateViaCamera = false;
acre_sys_zeus_zeusDefaultVoiceSource = true;

// Metis Marker
mts_markers_saveLastSelection = true;
mts_markers_showPresetsUI = false;
