#include "script_component.hpp"
#include "\z\ace\addons\arsenal\defines.hpp"

/*
 * Author: brainslush
 * Updates the visibility of arsenal controls
 *
 * Arguments:
 * 0: Display <DISPLAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [0] call tss_mods_units_fnc_updateArsenalControls
 *
 * Public: No
*/

switch (GVAR(ArsenalTypeOpen)) do {
    // hide controls for magazine arsenal
    case "magazines" : {
        params["_display", ["_lctrl", -1, [-1]]];
        if (_lctrl isEqualTo -1) then {
            [{
                params["_display"];
                {
                    private _ctrl = _display displayCtrl _x;
                    _ctrl ctrlEnable false;
                    _ctrl ctrlSetFade 1;
                    _ctrl ctrlCommit 0;
                } forEach [
                    IDC_iconBackgroundPrimaryWeapon,
                    IDC_buttonPrimaryWeapon,
                    IDC_iconBackgroundHandgun,
                    IDC_buttonHandgun,
                    IDC_iconBackgroundSecondaryWeapon,
                    IDC_buttonSecondaryWeapon,
                    IDC_iconBackgroundHeadgear,
                    IDC_buttonHeadgear,
                    IDC_iconBackgroundGoggles,
                    IDC_buttonGoggles,
                    IDC_iconBackgroundNVG,
                    IDC_buttonNVG,
                    IDC_iconBackgroundBinoculars,
                    IDC_buttonBinoculars,
                    IDC_iconBackgroundMap,
                    IDC_buttonMap,
                    IDC_iconBackgroundGPS,
                    IDC_buttonGPS,
                    IDC_iconBackgroundRadio,
                    IDC_buttonRadio,
                    IDC_iconBackgroundCompass,
                    IDC_buttonCompass,
                    IDC_iconBackgroundWatch,
                    IDC_buttonWatch,
                    IDC_iconBackgroundFace,
                    IDC_buttonFace,
                    IDC_iconBackgroundVoice,
                    IDC_buttonVoice,
                    IDC_iconBackgroundInsigna,
                    IDC_buttonInsigna,
                    IDC_buttonLoadouts,
                    IDC_buttonExport,
                    IDC_buttonImport
                ];
            }, _this] call CBA_fnc_execNextFrame;
        } else {
            if (_lctrl in [IDC_buttonUniform, IDC_buttonVest, IDC_buttonBackpack]) then {
                [{
                    params["_display"];
                    {
                        private _ctrl = _display displayCtrl _x;
                        _ctrl ctrlEnable false;
                        _ctrl ctrlSetFade 1;
                        _ctrl ctrlCommit 0;
                    } forEach [
                        IDC_iconBackgroundOptic,
                        IDC_buttonOptic,
                        IDC_iconBackgroundItemAcc,
                        IDC_buttonItemAcc,
                        IDC_iconBackgroundMuzzle,
                        IDC_buttonMuzzle,
                        IDC_iconBackgroundBipod,
                        IDC_buttonBipod,
                        IDC_iconBackgroundCurrentMag,
                        IDC_buttonCurrentMag,
                        IDC_iconBackgroundCurrentMag2,
                        IDC_buttonCurrentMag2,
                        IDC_iconBackgroundMisc,
                        IDC_buttonMisc 
                    ];
                }, _this] call CBA_fnc_execNextFrame;
            };
        };
    };
    // hide controls for personal loadout
    case "personal" : {
        params["_display", ["_lctrl", -1, [-1]]];
        if (_lctrl isEqualTo -1) then {
            [
                {
                    params["_display"];
                    {
                        private _ctrl = _display displayCtrl _x;
                        _ctrl ctrlEnable false;
                        _ctrl ctrlSetFade 1;
                        _ctrl ctrlCommit 0;
                    } forEach [
                        IDC_iconBackgroundBinoculars,
                        IDC_buttonBinoculars,
                        IDC_iconBackgroundMap,
                        IDC_buttonMap,
                        IDC_iconBackgroundGPS,
                        IDC_buttonGPS,
                        IDC_iconBackgroundRadio,
                        IDC_buttonRadio,
                        IDC_iconBackgroundCompass,
                        IDC_buttonCompass,
                        //IDC_iconBackgroundWatch,
                        //IDC_buttonWatch,
                        IDC_iconBackgroundFace,
                        IDC_buttonFace,
                        IDC_iconBackgroundVoice,
                        IDC_buttonVoice,
                        IDC_iconBackgroundInsigna,
                        IDC_buttonInsigna,
                        IDC_buttonLoadouts,
                        IDC_buttonExport,
                        IDC_buttonImport
                    ];
                }, _this] call CBA_fnc_execNextFrame;
        } else {
            if (_lctrl in [IDC_buttonUniform, IDC_buttonVest, IDC_buttonBackpack]) then {
                [{params["_display"]; TOGGLE_RIGHT_PANEL_HIDE}, _this] call CBA_fnc_execNextFrame;
            };
        };
    };
};
