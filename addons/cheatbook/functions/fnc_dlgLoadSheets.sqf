#include "script_component.hpp"

disableSerialization;
params["_ctrl"];

private _dir = 0;
if (_ctrl isEqualType displayNull) then {
    GVAR(page) = 0;
    _ctrl = _ctrl displayCtrl IDC_SHEETS_RSCPICTURE_1200;
} else {
    _dir = _ctrl;
    _ctrl = (findDisplay TSS_DLG_SHEETS) displayCtrl  IDC_SHEETS_RSCPICTURE_1200;
};

GVAR(page) = GVAR(page) + _dir;
private _array = SHEETSLIST select GVAR(id);
private _count = count _array;
GVAR(page) = if (GVAR(Page) < 0) then {_count - 1} else {GVAR(Page) mod _count};
TRACE_2("",GVAR(page),_count);

private _image = Format[QPATHTOF(data\ui\%1),(_array select GVAR(page)) select 0];

[
    {
        params ["_image","_ctrl","_array"];
        ctrlSetText [
            IDC_SHEETS_RSCPICTURE_1200,
            _image
        ];
        _ctrl ctrlSetPosition [
            TSS_DLG_SHEETS_PICX * ((_array select GVAR(page)) select 1),
            TSS_DLG_SHEETS_PICY,
            TSS_DLG_SHEETS_PICW * ((_array select GVAR(page)) select 1),
            TSS_DLG_SHEETS_PICH
        ];
        _ctrl ctrlCommit 0;
    },
    [_image,_ctrl,_array]
] call CBA_fnc_execNextFrame;
