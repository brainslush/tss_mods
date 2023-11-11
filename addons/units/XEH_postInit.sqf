#include "script_component.hpp"

// add ace menu entry for personal loadout customizer
if (hasInterface && {player getVariable [QGVAR(isTss),false]}) then {
    player setVariable [QGVAR(canAccessLoadout), true];
    if (
        {(_x # 0 # 0) isEqualTo QGVAR(Loadout)} count (player getVariable ["ace_interact_menu_selfActions", []]) == 0
    ) then {
        private _action = [
            QGVAR(Loadout), "Loadout", "", {
                [true] call FUNC(handleSniperBackpack);
                GVAR(ArsenalTypeOpen) = "personal";
                [player, player] call ace_arsenal_fnc_openBox;
            }, {
                _player == player && {
                    player getVariable [QGVAR(canAccessLoadout), false] && {
                        player getVariable [QGVAR(isTss),false]
                    }
                }
            }
        ] call ACE_interact_menu_fnc_createAction;
        [player, 1, ["ACE_SelfActions"],_action] call ace_interact_menu_fnc_addActionToObject;

        private _items = player getVariable ["tss_arsenalList_unit", []];
        [player, _items, false] call ace_arsenal_fnc_addVirtualItems;
    };

    // hide interaction when out of range or beyond
    //TRACE_2("Adding Arsenal restriction",getClientStateNumber,isMultiplayer);
    [{getClientStateNumber >= 10 || {!isMultiplayer}}, {
        //TRACE_2("We are in the right state",getClientStateNumber,isMultiplayer);
        player setVariable [QGVARMAIN(spawnPos), getPos player];
        [
            "Loadoutkonfigurator für " + str GVAR(LoadoutTimeout) + "s in " +
            str GVAR(LoadoutRange) + "m Radius verfügbar."
        ] call CBA_fnc_notify;
        [
            {
                ((player getVariable QGVARMAIN(spawnPos)) distance2D (getPos player)) > GVAR(LoadoutRange) 
            }, {
                player setVariable [QGVAR(canAccessLoadout), false];
                ["Loadoutkonfigurator nicht mehr verfügbar."] call CBA_fnc_notify;
            }, "", GVAR(LoadoutTimeout), {
                player setVariable [QGVAR(canAccessLoadout), false];
                ["Loadoutkonfigurator nicht mehr verfügbar."] call CBA_fnc_notify;
            }
        ] call CBA_fnc_waitUntilAndExecute;
    }] call CBA_fnc_waitUntilAndExecute;
};

call FUNC(convertDummyInteractions);
