public OnGameModeInit()
{

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
	return 1;
}