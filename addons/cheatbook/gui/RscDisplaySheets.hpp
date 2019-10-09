class RSCDisplayTSSSheets {
    idd = TSS_DLG_SHEETS;
    onLoad = QUOTE(_this call FUNC(dlg_sheets_load));

    class controls {
        class RscPicture_1200: RscPicture {
            idc = IDC_SHEETS_RSCPICTURE_1200;
            text = "#(argb,8,8,3)color(1,1,1,1)";
            x = -28 * GUI_GRID_W + GUI_GRID_X;
            y = -10 * GUI_GRID_H + GUI_GRID_Y;
            w = 31.82 * GUI_GRID_W;
            h = 45 * GUI_GRID_H;
        };
        class RscButton_1600: RscButton {
            onMouseButtonClick = QUOTE([1] call FUNC(dlg_sheets_load));
            idc = IDC_SHEETS_RSCBUTTON_1600;
            text = ">>>"; //--- ToDo: Localize;
            x = 63.5 * GUI_GRID_W + GUI_GRID_X;
            y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 4 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
        };
        class RscButton_1601: RscButton {
            onMouseButtonClick = QUOTE([-1] call FUNC(dlg_sheets_load));
            idc = IDC_SHEETS_RSCBUTTON_1601;
            text = "<<<"; //--- ToDo: Localize;
            x = -27.5 * GUI_GRID_W + GUI_GRID_X;
            y = -9.5 * GUI_GRID_H + GUI_GRID_Y;
            w = 4 * GUI_GRID_W;
            h = 1.5 * GUI_GRID_H;
        };
    };
};
