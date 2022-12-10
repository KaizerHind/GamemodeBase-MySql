public OnGameModeInit()
{
    /* # Global Textdraw Register # */
    gl_Register[0] = TextDrawCreate(227.998657, 136.140014, "Sub-Bar");
    TextDrawLetterSize(gl_Register[0], 0.000000, 0.347999);
    TextDrawTextSize(gl_Register[0], 401.398864, 0.000000);
    TextDrawAlignment(gl_Register[0], 1);
    TextDrawColor(gl_Register[0], -16776961);
    TextDrawUseBox(gl_Register[0], 1);
    TextDrawBoxColor(gl_Register[0], 1633772006);
    TextDrawSetShadow(gl_Register[0], 0);
    TextDrawBackgroundColor(gl_Register[0], -16776961);
    TextDrawFont(gl_Register[0], 1);
    TextDrawSetProportional(gl_Register[0], 1);

    gl_Register[1] = TextDrawCreate(406.798522, 142.181900, "R-Bar");
    TextDrawLetterSize(gl_Register[1], 0.000000, 2.400002);
    TextDrawTextSize(gl_Register[1], 408.100006, 0.000000);
    TextDrawAlignment(gl_Register[1], 1);
    TextDrawColor(gl_Register[1], -1);
    TextDrawUseBox(gl_Register[1], 1);
    TextDrawBoxColor(gl_Register[1], 1633772006);
    TextDrawSetShadow(gl_Register[1], 0);
    TextDrawBackgroundColor(gl_Register[1], 255);
    TextDrawFont(gl_Register[1], 0);
    TextDrawSetProportional(gl_Register[1], 1);

    gl_Register[2] = TextDrawCreate(222.698532, 144.486511, "L-Bar");
    TextDrawLetterSize(gl_Register[2], 0.000000, 2.360002);
    TextDrawTextSize(gl_Register[2], 223.099884, 0.000000);
    TextDrawAlignment(gl_Register[2], 1);
    TextDrawColor(gl_Register[2], -1);
    TextDrawUseBox(gl_Register[2], 1);
    TextDrawBoxColor(gl_Register[2], 1633772006);
    TextDrawSetShadow(gl_Register[2], 0);
    TextDrawBackgroundColor(gl_Register[2], 255);
    TextDrawFont(gl_Register[2], 0);
    TextDrawSetProportional(gl_Register[2], 1);

    gl_Register[3] = TextDrawCreate(229.499847, 146.899749, "Bg-Gray");
    TextDrawLetterSize(gl_Register[3], 0.000000, 2.028999);
    TextDrawTextSize(gl_Register[3], 400.100006, 0.000000);
    TextDrawAlignment(gl_Register[3], 1);
    TextDrawColor(gl_Register[3], -1);
    TextDrawUseBox(gl_Register[3], 1);
    TextDrawBoxColor(gl_Register[3], 1633772006);
    TextDrawSetShadow(gl_Register[3], 0);
    TextDrawBackgroundColor(gl_Register[3], 255);
    TextDrawFont(gl_Register[3], 1);
    TextDrawSetProportional(gl_Register[3], 1);

    gl_Register[4] = TextDrawCreate(222.600036, 169.200073, "Line-Gray");
    TextDrawLetterSize(gl_Register[4], 0.000000, -0.439999);
    TextDrawTextSize(gl_Register[4], 408.100006, 0.000000);
    TextDrawAlignment(gl_Register[4], 1);
    TextDrawColor(gl_Register[4], -1);
    TextDrawUseBox(gl_Register[4], 1);
    TextDrawBoxColor(gl_Register[4], -1061109505);
    TextDrawSetShadow(gl_Register[4], 0);
    TextDrawBackgroundColor(gl_Register[4], 255);
    TextDrawFont(gl_Register[4], 1);
    TextDrawSetProportional(gl_Register[4], 1);

    gl_Register[5] = TextDrawCreate(414.700164, 173.393249, "box-bg");
    TextDrawLetterSize(gl_Register[5], 0.000000, 21.160018);
    TextDrawTextSize(gl_Register[5], 216.000000, 0.000000);
    TextDrawAlignment(gl_Register[5], 1);
    TextDrawColor(gl_Register[5], -1);
    TextDrawUseBox(gl_Register[5], 1);
    TextDrawBoxColor(gl_Register[5], 606744806);
    TextDrawSetShadow(gl_Register[5], 0);
    TextDrawBackgroundColor(gl_Register[5], 255);
    TextDrawFont(gl_Register[5], 1);
    TextDrawSetProportional(gl_Register[5], 1);

    gl_Register[6] = TextDrawCreate(368.601928, 232.193801, "ld_shtr:un_a");
    TextDrawTextSize(gl_Register[6], 25.000000, 16.000000);
    TextDrawAlignment(gl_Register[6], 1);
    TextDrawColor(gl_Register[6], -1);
    TextDrawSetShadow(gl_Register[6], 0);
    TextDrawBackgroundColor(gl_Register[6], 255);
    TextDrawFont(gl_Register[6], 4);
    TextDrawSetProportional(gl_Register[6], 0);
    TextDrawSetSelectable(gl_Register[6], true);

    gl_Register[7] = TextDrawCreate(367.900512, 277.669860, "ld_shtr:un_c");
    TextDrawTextSize(gl_Register[7], 25.000000, 16.000000);
    TextDrawAlignment(gl_Register[7], 1);
    TextDrawColor(gl_Register[7], -1);
    TextDrawSetShadow(gl_Register[7], 0);
    TextDrawBackgroundColor(gl_Register[7], 255);
    TextDrawFont(gl_Register[7], 4);
    TextDrawSetProportional(gl_Register[7], 0);
    TextDrawSetSelectable(gl_Register[7], true);

    gl_Register[8] = TextDrawCreate(306.900543, 171.000000, "- Datos Personales");
    TextDrawLetterSize(gl_Register[8], 0.292800, 1.465597);
    TextDrawAlignment(gl_Register[8], 3);
    TextDrawColor(gl_Register[8], -1);
    TextDrawSetShadow(gl_Register[8], 0);
    TextDrawBackgroundColor(gl_Register[8], 255);
    TextDrawFont(gl_Register[8], 1);
    TextDrawSetProportional(gl_Register[8], 1);

    gl_Register[9] = TextDrawCreate(240.001068, 189.426849, "Nombre:");
    TextDrawLetterSize(gl_Register[9], 0.296398, 1.366044);
    TextDrawTextSize(gl_Register[9], 267.000000, 0.000000);
    TextDrawAlignment(gl_Register[9], 1);
    TextDrawColor(gl_Register[9], -1);
    TextDrawSetShadow(gl_Register[9], 0);
    TextDrawBackgroundColor(gl_Register[9], 255);
    TextDrawFont(gl_Register[9], 1);
    TextDrawSetProportional(gl_Register[9], 1);

    gl_Register[10] = TextDrawCreate(239.800338, 235.312484, "Password:");
    TextDrawLetterSize(gl_Register[10], 0.296398, 1.366044);
    TextDrawTextSize(gl_Register[10], 269.000000, -0.029998);
    TextDrawAlignment(gl_Register[10], 1);
    TextDrawColor(gl_Register[10], -1);
    TextDrawSetShadow(gl_Register[10], 0);
    TextDrawBackgroundColor(gl_Register[10], 255);
    TextDrawFont(gl_Register[10], 1);
    TextDrawSetProportional(gl_Register[10], 1);

    gl_Register[11] = TextDrawCreate(363.199981, 141.515548, "Gamemode Roleplay");
    TextDrawLetterSize(gl_Register[11], 0.358799, 1.575109);
    TextDrawAlignment(gl_Register[11], 3);
    TextDrawColor(gl_Register[11], -1);
    TextDrawSetShadow(gl_Register[11], 0);
    TextDrawBackgroundColor(gl_Register[11], 255);
    TextDrawFont(gl_Register[11], 1);
    TextDrawSetProportional(gl_Register[11], 1);

    gl_Register[12] = TextDrawCreate(240.001312, 279.826538, "Edad:");
    TextDrawLetterSize(gl_Register[12], 0.296398, 1.366044);
    TextDrawTextSize(gl_Register[12], 252.000000, 0.000000);
    TextDrawAlignment(gl_Register[12], 1);
    TextDrawColor(gl_Register[12], -1);
    TextDrawSetShadow(gl_Register[12], 0);
    TextDrawBackgroundColor(gl_Register[12], 255);
    TextDrawFont(gl_Register[12], 1);
    TextDrawSetProportional(gl_Register[12], 1);
    TextDrawSetSelectable(gl_Register[12], true);

    gl_Register[13] = TextDrawCreate(240.300613, 321.437469, "Genero:");
    TextDrawLetterSize(gl_Register[13], 0.296398, 1.366044);
    TextDrawTextSize(gl_Register[13], 261.000000, 0.000000);
    TextDrawAlignment(gl_Register[13], 1);
    TextDrawColor(gl_Register[13], -1);
    TextDrawSetShadow(gl_Register[13], 0);
    TextDrawBackgroundColor(gl_Register[13], 255);
    TextDrawFont(gl_Register[13], 1);
    TextDrawSetProportional(gl_Register[13], 1);
    TextDrawSetSelectable(gl_Register[13], true);

    gl_Register[14] = TextDrawCreate(234.300689, 209.453277, "bx-name");
    TextDrawLetterSize(gl_Register[14], 0.000000, 1.039999);
    TextDrawTextSize(gl_Register[14], 342.000000, 0.000000);
    TextDrawAlignment(gl_Register[14], 1);
    TextDrawColor(gl_Register[14], -1);
    TextDrawUseBox(gl_Register[14], 1);
    TextDrawBoxColor(gl_Register[14], -2054846506);
    TextDrawSetShadow(gl_Register[14], 0);
    TextDrawBackgroundColor(gl_Register[14], 255);
    TextDrawFont(gl_Register[14], 1);
    TextDrawSetProportional(gl_Register[14], 1);

    gl_Register[15] = TextDrawCreate(234.300674, 255.771865, "bx-pass");
    TextDrawLetterSize(gl_Register[15], -0.000798, 1.139685);
    TextDrawTextSize(gl_Register[15], 342.000000, 0.000000);
    TextDrawAlignment(gl_Register[15], 1);
    TextDrawColor(gl_Register[15], -1);
    TextDrawUseBox(gl_Register[15], 1);
    TextDrawBoxColor(gl_Register[15], -2054846506);
    TextDrawSetShadow(gl_Register[15], 0);
    TextDrawBackgroundColor(gl_Register[15], 255);
    TextDrawFont(gl_Register[15], 1);
    TextDrawSetProportional(gl_Register[15], 1);

    gl_Register[16] = TextDrawCreate(234.400558, 299.771057, "bx-age");
    TextDrawLetterSize(gl_Register[16], 0.000000, 0.999998);
    TextDrawTextSize(gl_Register[16], 342.000000, 0.000000);
    TextDrawAlignment(gl_Register[16], 1);
    TextDrawColor(gl_Register[16], -1);
    TextDrawUseBox(gl_Register[16], 1);
    TextDrawBoxColor(gl_Register[16], -2054846506);
    TextDrawSetShadow(gl_Register[16], 0);
    TextDrawBackgroundColor(gl_Register[16], 255);
    TextDrawFont(gl_Register[16], 1);
    TextDrawSetProportional(gl_Register[16], 1);

    gl_Register[17] = TextDrawCreate(234.300674, 342.668426, "bx-gender");
    TextDrawLetterSize(gl_Register[17], 0.000000, 1.159999);
    TextDrawTextSize(gl_Register[17], 342.000000, 0.000000);
    TextDrawAlignment(gl_Register[17], 1);
    TextDrawColor(gl_Register[17], -1);
    TextDrawUseBox(gl_Register[17], 1);
    TextDrawBoxColor(gl_Register[17], -2054846506);
    TextDrawSetShadow(gl_Register[17], 0);
    TextDrawBackgroundColor(gl_Register[17], 255);
    TextDrawFont(gl_Register[17], 1);
    TextDrawSetProportional(gl_Register[17], 1);

    gl_Register[18] = TextDrawCreate(399.100097, 128.611175, "ld_beat:chit");
    TextDrawTextSize(gl_Register[18], 15.000000, 19.000000);
    TextDrawAlignment(gl_Register[18], 1);
    TextDrawColor(gl_Register[18], 1633772031);
    TextDrawSetShadow(gl_Register[18], 0);
    TextDrawBackgroundColor(gl_Register[18], 255);
    TextDrawFont(gl_Register[18], 4);
    TextDrawSetProportional(gl_Register[18], 0);
    TextDrawSetSelectable(gl_Register[18], true);

    gl_Register[19] = TextDrawCreate(216.699829, 128.611175, "ld_beat:chit");
    TextDrawTextSize(gl_Register[19], 15.000000, 19.000000);
    TextDrawAlignment(gl_Register[19], 1);
    TextDrawColor(gl_Register[19], 1633772031);
    TextDrawSetShadow(gl_Register[19], 0);
    TextDrawBackgroundColor(gl_Register[19], 255);
    TextDrawFont(gl_Register[19], 4);
    TextDrawSetProportional(gl_Register[19], 0);
    TextDrawSetSelectable(gl_Register[19], true);

    gl_Register[20] = TextDrawCreate(229.700424, 191.846817, "ld_pool:ball");
    TextDrawTextSize(gl_Register[20], 8.000000, 10.000000);
    TextDrawAlignment(gl_Register[20], 1);
    TextDrawColor(gl_Register[20], -1);
    TextDrawSetShadow(gl_Register[20], 0);
    TextDrawBackgroundColor(gl_Register[20], 255);
    TextDrawFont(gl_Register[20], 4);
    TextDrawSetProportional(gl_Register[20], 0);

    gl_Register[21] = TextDrawCreate(229.800033, 282.028869, "ld_pool:ball");
    TextDrawTextSize(gl_Register[21], 8.000000, 10.000000);
    TextDrawAlignment(gl_Register[21], 1);
    TextDrawColor(gl_Register[21], -1);
    TextDrawSetShadow(gl_Register[21], 0);
    TextDrawBackgroundColor(gl_Register[21], 255);
    TextDrawFont(gl_Register[21], 4);
    TextDrawSetProportional(gl_Register[21], 0);
    TextDrawSetSelectable(gl_Register[21], true);

    gl_Register[22] = TextDrawCreate(229.800033, 237.926193, "ld_pool:ball");
    TextDrawTextSize(gl_Register[22], 8.000000, 10.000000);
    TextDrawAlignment(gl_Register[22], 1);
    TextDrawColor(gl_Register[22], -1);
    TextDrawSetShadow(gl_Register[22], 0);
    TextDrawBackgroundColor(gl_Register[22], 255);
    TextDrawFont(gl_Register[22], 4);
    TextDrawSetProportional(gl_Register[22], 0);
    TextDrawSetSelectable(gl_Register[22], true);

    gl_Register[23] = TextDrawCreate(229.800033, 323.431396, "ld_pool:ball");
    TextDrawTextSize(gl_Register[23], 8.000000, 10.000000);
    TextDrawAlignment(gl_Register[23], 1);
    TextDrawColor(gl_Register[23], -1);
    TextDrawSetShadow(gl_Register[23], 0);
    TextDrawBackgroundColor(gl_Register[23], 255);
    TextDrawFont(gl_Register[23], 4);
    TextDrawSetProportional(gl_Register[23], 0);
    TextDrawSetSelectable(gl_Register[23], true);

    /* # Global Textdraw Login # */
    gl_Login[0] = TextDrawCreate(228.798706, 136.040008, "supgray-bar");
    TextDrawLetterSize(gl_Login[0], 0.000000, 0.347999);
    TextDrawTextSize(gl_Login[0], 402.198913, 0.000000);
    TextDrawAlignment(gl_Login[0], 1);
    TextDrawColor(gl_Login[0], -16776961);
    TextDrawUseBox(gl_Login[0], 1);
    TextDrawBoxColor(gl_Login[0], 1633772006);
    TextDrawSetShadow(gl_Login[0], 0);
    TextDrawBackgroundColor(gl_Login[0], -16776961);
    TextDrawFont(gl_Login[0], 1);
    TextDrawSetProportional(gl_Login[0], 1);

    gl_Login[1] = TextDrawCreate(399.100097, 128.711181, "ld_beat:chit");
    TextDrawTextSize(gl_Login[1], 15.000000, 19.000000);
    TextDrawAlignment(gl_Login[1], 1);
    TextDrawColor(gl_Login[1], 1633772031);
    TextDrawSetShadow(gl_Login[1], 0);
    TextDrawBackgroundColor(gl_Login[1], 255);
    TextDrawFont(gl_Login[1], 4);
    TextDrawSetProportional(gl_Login[1], 0);

    gl_Login[2] = TextDrawCreate(216.499816, 128.908950, "ld_beat:chit");
    TextDrawTextSize(gl_Login[2], 15.000000, 19.000000);
    TextDrawAlignment(gl_Login[2], 1);
    TextDrawColor(gl_Login[2], 1633772031);
    TextDrawSetShadow(gl_Login[2], 0);
    TextDrawBackgroundColor(gl_Login[2], 255);
    TextDrawFont(gl_Login[2], 4);
    TextDrawSetProportional(gl_Login[2], 0);

    gl_Login[3] = TextDrawCreate(406.798522, 142.181900, "r-bord");
    TextDrawLetterSize(gl_Login[3], 0.000000, 2.400002);
    TextDrawTextSize(gl_Login[3], 408.100006, 0.000000);
    TextDrawAlignment(gl_Login[3], 1);
    TextDrawColor(gl_Login[3], -1);
    TextDrawUseBox(gl_Login[3], 1);
    TextDrawBoxColor(gl_Login[3], 1633772006);
    TextDrawSetShadow(gl_Login[3], 0);
    TextDrawBackgroundColor(gl_Login[3], 255);
    TextDrawFont(gl_Login[3], 0);
    TextDrawSetProportional(gl_Login[3], 1);

    gl_Login[4] = TextDrawCreate(222.598526, 144.486511, "l-bord");
    TextDrawLetterSize(gl_Login[4], 0.000000, 2.360002);
    TextDrawTextSize(gl_Login[4], 222.999877, 0.000000);
    TextDrawAlignment(gl_Login[4], 1);
    TextDrawColor(gl_Login[4], -1);
    TextDrawUseBox(gl_Login[4], 1);
    TextDrawBoxColor(gl_Login[4], 1633772006);
    TextDrawSetShadow(gl_Login[4], 0);
    TextDrawBackgroundColor(gl_Login[4], 255);
    TextDrawFont(gl_Login[4], 0);
    TextDrawSetProportional(gl_Login[4], 1);

    gl_Login[5] = TextDrawCreate(229.499847, 147.199768, "bg-gray");
    TextDrawLetterSize(gl_Login[5], 0.000000, 2.028999);
    TextDrawTextSize(gl_Login[5], 400.100006, 0.000000);
    TextDrawAlignment(gl_Login[5], 1);
    TextDrawColor(gl_Login[5], -1);
    TextDrawUseBox(gl_Login[5], 1);
    TextDrawBoxColor(gl_Login[5], 1633772006);
    TextDrawSetShadow(gl_Login[5], 0);
    TextDrawBackgroundColor(gl_Login[5], 255);
    TextDrawFont(gl_Login[5], 1);
    TextDrawSetProportional(gl_Login[5], 1);

    gl_Login[6] = TextDrawCreate(222.600036, 169.200073, "white-line");
    TextDrawLetterSize(gl_Login[6], 0.000000, -0.439999);
    TextDrawTextSize(gl_Login[6], 408.100006, 0.000000);
    TextDrawAlignment(gl_Login[6], 1);
    TextDrawColor(gl_Login[6], -1);
    TextDrawUseBox(gl_Login[6], 1);
    TextDrawBoxColor(gl_Login[6], -1061109505);
    TextDrawSetShadow(gl_Login[6], 0);
    TextDrawBackgroundColor(gl_Login[6], 255);
    TextDrawFont(gl_Login[6], 1);
    TextDrawSetProportional(gl_Login[6], 1);

    gl_Login[7] = TextDrawCreate(414.800170, 173.113433, "blue-bg");
    TextDrawLetterSize(gl_Login[7], 0.000000, 12.639996);
    TextDrawTextSize(gl_Login[7], 216.000000, 0.000000);
    TextDrawAlignment(gl_Login[7], 1);
    TextDrawColor(gl_Login[7], -1);
    TextDrawUseBox(gl_Login[7], 1);
    TextDrawBoxColor(gl_Login[7], 606744806);
    TextDrawSetShadow(gl_Login[7], 0);
    TextDrawBackgroundColor(gl_Login[7], 255);
    TextDrawFont(gl_Login[7], 1);
    TextDrawSetProportional(gl_Login[7], 1);

    gl_Login[8] = TextDrawCreate(261.401794, 145.104537, "Gamemode");
    TextDrawLetterSize(gl_Login[8], 0.358799, 1.575109);
    TextDrawAlignment(gl_Login[8], 1);
    TextDrawColor(gl_Login[8], -1);
    TextDrawSetShadow(gl_Login[8], 0);
    TextDrawBackgroundColor(gl_Login[8], 255);
    TextDrawFont(gl_Login[8], 2);
    TextDrawSetProportional(gl_Login[8], 1);

    gl_Login[9] = TextDrawCreate(339.902984, 145.000000, "Base");
    TextDrawLetterSize(gl_Login[9], 0.358799, 1.575109);
    TextDrawAlignment(gl_Login[9], 2);
    TextDrawColor(gl_Login[9], -1);
    TextDrawSetShadow(gl_Login[9], 0);
    TextDrawBackgroundColor(gl_Login[9], 255);
    TextDrawFont(gl_Login[9], 2);
    TextDrawSetProportional(gl_Login[9], 1);

    gl_Login[10] = TextDrawCreate(245.000000, 190.700225, "Nombre:");
    TextDrawLetterSize(gl_Login[10], 0.318399, 1.400887);
    TextDrawAlignment(gl_Login[10], 1);
    TextDrawColor(gl_Login[10], -1);
    TextDrawSetShadow(gl_Login[10], 0);
    TextDrawBackgroundColor(gl_Login[10], 255);
    TextDrawFont(gl_Login[10], 2);
    TextDrawSetProportional(gl_Login[10], 1);

    gl_Login[11] = TextDrawCreate(232.299957, 220.201599, "Password:");
    TextDrawLetterSize(gl_Login[11], 0.318399, 1.400887);
    TextDrawAlignment(gl_Login[11], 1);
    TextDrawColor(gl_Login[11], -1);
    TextDrawSetShadow(gl_Login[11], 0);
    TextDrawBackgroundColor(gl_Login[11], 255);
    TextDrawFont(gl_Login[11], 2);
    TextDrawSetProportional(gl_Login[11], 1);

    gl_Login[12] = TextDrawCreate(294.399963, 192.000000, "b-name");
    TextDrawLetterSize(gl_Login[12], 0.000000, 1.120000);
    TextDrawTextSize(gl_Login[12], 391.000000, 0.000000);
    TextDrawAlignment(gl_Login[12], 1);
    TextDrawColor(gl_Login[12], -1);
    TextDrawUseBox(gl_Login[12], 1);
    TextDrawBoxColor(gl_Login[12], 2088533721);
    TextDrawSetShadow(gl_Login[12], 0);
    TextDrawBackgroundColor(gl_Login[12], 255);
    TextDrawFont(gl_Login[12], 1);
    TextDrawSetProportional(gl_Login[12], 1);

    gl_Login[13] = TextDrawCreate(294.399963, 222.001831, "b-pass");
    TextDrawLetterSize(gl_Login[13], 0.000000, 1.120000);
    TextDrawTextSize(gl_Login[13], 391.000000, 0.000000);
    TextDrawAlignment(gl_Login[13], 1);
    TextDrawColor(gl_Login[13], -1);
    TextDrawUseBox(gl_Login[13], 1);
    TextDrawBoxColor(gl_Login[13], 2088533721);
    TextDrawSetShadow(gl_Login[13], 0);
    TextDrawBackgroundColor(gl_Login[13], 255);
    TextDrawFont(gl_Login[13], 1);
    TextDrawSetProportional(gl_Login[13], 1);

    gl_Login[14] = TextDrawCreate(249.000000, 260.000000, "ld_shtr:un_a");
    TextDrawTextSize(gl_Login[14], 25.000000, 16.000000);
    TextDrawAlignment(gl_Login[14], 1);
    TextDrawColor(gl_Login[14], -1);
    TextDrawSetShadow(gl_Login[14], 0);
    TextDrawBackgroundColor(gl_Login[14], 255);
    TextDrawFont(gl_Login[14], 4);
    TextDrawSetProportional(gl_Login[14], 0);
    TextDrawSetSelectable(gl_Login[14], true);

    gl_Login[15] = TextDrawCreate(347.800476, 260.000061, "ld_shtr:un_c");
    TextDrawTextSize(gl_Login[15], 25.000000, 16.000000);
    TextDrawAlignment(gl_Login[15], 1);
    TextDrawColor(gl_Login[15], -1);
    TextDrawSetShadow(gl_Login[15], 0);
    TextDrawBackgroundColor(gl_Login[15], 255);
    TextDrawFont(gl_Login[15], 4);
    TextDrawSetProportional(gl_Login[15], 0);
    TextDrawSetSelectable(gl_Login[15], true);
    /* ############### DON TOUCH ############### */
    #if defined ongame_td_OnGameModeInit
        return ongame_td_OnGameModeInit();
    #else
        return 1;
    #endif
}
#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif

#define OnGameModeInit ongame_td_OnGameModeInit
#if defined ongame_td_OnGameModeInit
    forward ongame_td_OnGameModeInit();
#endif

stock LoadPlayerTextdraw(i)
{
	/* # Player Register Textdraws # */
    Reg_GetName[i] = CreatePlayerTextDraw(i, 234.099960, 206.053405, "");
    PlayerTextDrawLetterSize(i, Reg_GetName[i], 0.325998, 1.550222);
    PlayerTextDrawTextSize(i, Reg_GetName[i], 323.000000, 0.000000);
    PlayerTextDrawAlignment(i, Reg_GetName[i], 1);
    PlayerTextDrawColor(i, Reg_GetName[i], -1);
    PlayerTextDrawSetShadow(i, Reg_GetName[i], 0);
    PlayerTextDrawBackgroundColor(i, Reg_GetName[i], 255);
    PlayerTextDrawFont(i, Reg_GetName[i], 1);
    PlayerTextDrawSetProportional(i, Reg_GetName[i], 1);

    Reg_GetPass[i] = CreatePlayerTextDraw(i, 234.200042, 252.343521, "");
    PlayerTextDrawLetterSize(i, Reg_GetPass[i], 0.325998, 1.550222);
    PlayerTextDrawTextSize(i, Reg_GetPass[i], 316.000000, 0.000000);
    PlayerTextDrawAlignment(i, Reg_GetPass[i], 1);
    PlayerTextDrawColor(i, Reg_GetPass[i], -1);
    PlayerTextDrawSetShadow(i, Reg_GetPass[i], 0);
    PlayerTextDrawBackgroundColor(i, Reg_GetPass[i], 255);
    PlayerTextDrawFont(i, Reg_GetPass[i], 1);
    PlayerTextDrawSetProportional(i, Reg_GetPass[i], 1);
    PlayerTextDrawSetSelectable(i, Reg_GetPass[i], true);

    Reg_GetAge[i] = CreatePlayerTextDraw(i, 233.899932, 295.253875, "");
    PlayerTextDrawLetterSize(i, Reg_GetAge[i], 0.325998, 1.550222);
    PlayerTextDrawTextSize(i, Reg_GetAge[i], 311.000000, 0.000000);
    PlayerTextDrawAlignment(i, Reg_GetAge[i], 1);
    PlayerTextDrawColor(i, Reg_GetAge[i], -1);
    PlayerTextDrawSetShadow(i, Reg_GetAge[i], 0);
    PlayerTextDrawBackgroundColor(i, Reg_GetAge[i], 255);
    PlayerTextDrawFont(i, Reg_GetAge[i], 1);
    PlayerTextDrawSetProportional(i, Reg_GetAge[i], 1);
    PlayerTextDrawSetSelectable(i, Reg_GetAge[i], true);

    Reg_GetGender[i] = CreatePlayerTextDraw(i, 234.099945, 339.357391, "");
    PlayerTextDrawLetterSize(i, Reg_GetGender[i], 0.325998, 1.550222);
    PlayerTextDrawTextSize(i, Reg_GetGender[i], 328.000000, 0.000000);
    PlayerTextDrawAlignment(i, Reg_GetGender[i], 1);
    PlayerTextDrawColor(i, Reg_GetGender[i], -1);
    PlayerTextDrawSetShadow(i, Reg_GetGender[i], 0);
    PlayerTextDrawBackgroundColor(i, Reg_GetGender[i], 255);
    PlayerTextDrawFont(i, Reg_GetGender[i], 1);
    PlayerTextDrawSetProportional(i, Reg_GetGender[i], 1);

	/* # Player Login Textdraws # */
    Log_GetName[i] = CreatePlayerTextDraw(i, 294.000000, 188.000000, "");
    PlayerTextDrawLetterSize(i, Log_GetName[i], 0.337998, 1.595021);
    PlayerTextDrawAlignment(i, Log_GetName[i], 1);
    PlayerTextDrawColor(i, Log_GetName[i], -1);
    PlayerTextDrawSetShadow(i, Log_GetName[i], 0);
    PlayerTextDrawBackgroundColor(i, Log_GetName[i], 255);
    PlayerTextDrawFont(i, Log_GetName[i], 1);
    PlayerTextDrawSetProportional(i, Log_GetName[i], 1);

    Log_GetPass[i] = CreatePlayerTextDraw(i, 294.099945, 218.501617, "");
    PlayerTextDrawLetterSize(i, Log_GetPass[i], 0.337998, 1.595021);
    PlayerTextDrawAlignment(i, Log_GetPass[i], 1);
    PlayerTextDrawColor(i, Log_GetPass[i], -1);
    PlayerTextDrawSetShadow(i, Log_GetPass[i], 0);
    PlayerTextDrawBackgroundColor(i, Log_GetPass[i], 255);
    PlayerTextDrawFont(i, Log_GetPass[i], 1);
    PlayerTextDrawSetProportional(i, Log_GetPass[i], 1);

	return 1;
}

stock ShowRegisterTextdraw(playerid){
    /* # Global/Player Textdraw Register # */

    TextDrawShowForPlayer(playerid,gl_Register[0]);
    TextDrawShowForPlayer(playerid,gl_Register[1]);
    TextDrawShowForPlayer(playerid,gl_Register[2]);
    TextDrawShowForPlayer(playerid,gl_Register[3]);
    TextDrawShowForPlayer(playerid,gl_Register[4]);
    TextDrawShowForPlayer(playerid,gl_Register[5]);
    TextDrawShowForPlayer(playerid,gl_Register[6]);
    TextDrawShowForPlayer(playerid,gl_Register[7]);
    TextDrawShowForPlayer(playerid,gl_Register[8]);
    TextDrawShowForPlayer(playerid,gl_Register[9]);
    TextDrawShowForPlayer(playerid,gl_Register[10]);
    TextDrawShowForPlayer(playerid,gl_Register[11]);
    TextDrawShowForPlayer(playerid,gl_Register[12]);
    TextDrawShowForPlayer(playerid,gl_Register[13]);
    TextDrawShowForPlayer(playerid,gl_Register[14]);
    TextDrawShowForPlayer(playerid,gl_Register[15]);
    TextDrawShowForPlayer(playerid,gl_Register[16]);
    TextDrawShowForPlayer(playerid,gl_Register[17]);
    TextDrawShowForPlayer(playerid,gl_Register[18]);
    TextDrawShowForPlayer(playerid,gl_Register[19]);
    TextDrawShowForPlayer(playerid,gl_Register[20]);
    TextDrawShowForPlayer(playerid,gl_Register[21]);
    TextDrawShowForPlayer(playerid,gl_Register[22]);
    TextDrawShowForPlayer(playerid,gl_Register[23]);

    PlayerTextDrawShow(playerid,Reg_GetAge[playerid]);
    PlayerTextDrawShow(playerid,Reg_GetGender[playerid]);

    format(global_str, sizeof global_str,"%s", PlayerName(playerid));
    PlayerTextDrawSetString(playerid, Reg_GetName[playerid],global_str);
    PlayerTextDrawShow(playerid,Reg_GetName[playerid]);

    SelectTextDraw(playerid, 0x5785b3F2);
    return 1;}

stock ShowLoginTextdraw(){
    /* # Global/Player Textdraw Login # */
    PlayerTextDrawShow(playerid,Log_GetName[playerid]);
    PlayerTextDrawShow(playerid,Log_GetPass[playerid]);

    TextDrawShowForPlayer(playerid, gl_Login[0]);
    TextDrawShowForPlayer(playerid, gl_Login[1]);
    TextDrawShowForPlayer(playerid, gl_Login[2]);
    TextDrawShowForPlayer(playerid, gl_Login[3]);
    TextDrawShowForPlayer(playerid, gl_Login[4]);
    TextDrawShowForPlayer(playerid, gl_Login[5]);
    TextDrawShowForPlayer(playerid, gl_Login[6]);
    TextDrawShowForPlayer(playerid, gl_Login[7]);
    TextDrawShowForPlayer(playerid, gl_Login[8]);
    TextDrawShowForPlayer(playerid, gl_Login[9]);
    TextDrawShowForPlayer(playerid, gl_Login[10]);
    TextDrawShowForPlayer(playerid, gl_Login[11]);
    TextDrawShowForPlayer(playerid, gl_Login[12]);
    TextDrawShowForPlayer(playerid, gl_Login[13]);
    TextDrawShowForPlayer(playerid, gl_Login[14]);
    TextDrawShowForPlayer(playerid, gl_Login[15]);
    return 1;}

stock HideRegisterTextdraw(playerid){
    /* # Global Textdraw Register # */
    TextDrawHideForPlayer(playerid,gl_Register[0]);
    TextDrawHideForPlayer(playerid,gl_Register[1]);
    TextDrawHideForPlayer(playerid,gl_Register[2]);
    TextDrawHideForPlayer(playerid,gl_Register[3]);
    TextDrawHideForPlayer(playerid,gl_Register[4]);
    TextDrawHideForPlayer(playerid,gl_Register[5]);
    TextDrawHideForPlayer(playerid,gl_Register[6]);
    TextDrawHideForPlayer(playerid,gl_Register[7]);
    TextDrawHideForPlayer(playerid,gl_Register[8]);
    TextDrawHideForPlayer(playerid,gl_Register[9]);
    TextDrawHideForPlayer(playerid,gl_Register[10]);
    TextDrawHideForPlayer(playerid,gl_Register[11]);
    TextDrawHideForPlayer(playerid,gl_Register[12]);
    TextDrawHideForPlayer(playerid,gl_Register[13]);
    TextDrawHideForPlayer(playerid,gl_Register[14]);
    TextDrawHideForPlayer(playerid,gl_Register[15]);
    TextDrawHideForPlayer(playerid,gl_Register[16]);
    TextDrawHideForPlayer(playerid,gl_Register[17]);
    TextDrawHideForPlayer(playerid,gl_Register[18]);
    TextDrawHideForPlayer(playerid,gl_Register[19]);
    TextDrawHideForPlayer(playerid,gl_Register[20]);
    TextDrawHideForPlayer(playerid,gl_Register[21]);
    TextDrawHideForPlayer(playerid,gl_Register[22]);
    TextDrawHideForPlayer(playerid,gl_Register[23]);

    CancelSelectTextDraw(playerid);
    return 1;}

stock HideLoginTextdraw(playerid){
    /* # Global Textdraw Login # */
    TextDrawHideForPlayer(playerid, gl_Login[0]);
    TextDrawHideForPlayer(playerid, gl_Login[1]);
    TextDrawHideForPlayer(playerid, gl_Login[2]);
    TextDrawHideForPlayer(playerid, gl_Login[3]);
    TextDrawHideForPlayer(playerid, gl_Login[4]);
    TextDrawHideForPlayer(playerid, gl_Login[5]);
    TextDrawHideForPlayer(playerid, gl_Login[6]);
    TextDrawHideForPlayer(playerid, gl_Login[7]);
    TextDrawHideForPlayer(playerid, gl_Login[8]);
    TextDrawHideForPlayer(playerid, gl_Login[9]);
    TextDrawHideForPlayer(playerid, gl_Login[10]);
    TextDrawHideForPlayer(playerid, gl_Login[11]);
    TextDrawHideForPlayer(playerid, gl_Login[12]);
    TextDrawHideForPlayer(playerid, gl_Login[13]);
    TextDrawHideForPlayer(playerid, gl_Login[14]);
    TextDrawHideForPlayer(playerid, gl_Login[15]);
    
    CancelSelectTextDraw(playerid);
    return 1;}