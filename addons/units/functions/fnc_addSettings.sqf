#include "script_component.hpp"
/*
 * Author: brainslush
 * Add CBA Settings.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call tss_mods_units_fnc_reequip3Den
 *
 * Public: No
*/


[
    QGVAR(LoadoutDayNight),
    "LIST",
    ["Tageszeit", "Ist es eine Nacht- oder Tagoperation oder beides?"],
    "TSS Loadout Settings",
    [["day", "night", "both"], ["Tag", "Nacht", "Beides"], 2],
    1,
    {
        [] call FUNC(reequip3Den);
    }
] call CBA_fnc_addSetting;

[
    QGVAR(LoadoutCamo),
    "LIST",
    "Camo",
    "TSS Loadout Settings",
    [
        ["mdt", "des", "wdl", "snw", "jgl"],
        [
            "Mediteran",
            "Wüste",
            "Mitteleuropäischer Wald",
            "Schnee",
            "Dschungel"
        ],
        0],
    1,
    {
        [] call FUNC(reequip3Den);
    }
] call CBA_fnc_addSetting;

[
    QGVAR(LoadoutRange),
    "SLIDER",
    ["Reichweite Loadoutmenü", "Wie weit vom Spawnpunkt enfernt ist das Loadoutmenü verfügbar?"],
    "TSS Loadout Settings",
    [1, 30000, 30, 0],
    1,
    {
        [] call FUNC(reequip3Den);
    }
] call CBA_fnc_addSetting;

[
    QGVAR(LoadoutTimeout),
    "SLIDER",
    ["Timeout Loadoutmenü", "Wie viele Sekunden seit dem Spawn ist das Loautoutmenü verfügbar?"],
    "TSS Loadout Settings",
    [1, 18000, 600, 0],
    1,
    {
        [] call FUNC(reequip3Den);
    }
] call CBA_fnc_addSetting;