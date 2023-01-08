PlayerName(playerid){
    new name[24 + 1];
    GetPlayerName(playerid, name, MAX_PLAYER_NAME);
    return name;
}

public OnGameModeInit()
{
    AntiDescompiler();

	/* ======== [ Configuración general ] ======== */
	ShowPlayerMarkers(PLAYER_MARKERS_MODE_GLOBAL);
	ShowNameTags(1);
	EnableStuntBonusForAll(0);
	DisableInteriorEnterExits();
	ManualVehicleEngineAndLights();
    SetGameModeText(MODE_SERVER);
	SendRconCommand("hostname "#SERVER_NAME" "#MODE_SERVER"");
    SendRconCommand("mapname San Andreas");
    SendRconCommand("weburl "#DISCORD_SV"");
 	SendRconCommand("password ");


    DB = mysql_connect_file("mysql.ini");
    if(mysql_errno(DB) == 0){ print("La Conexion con la DB ha sido Exitosa - [MySQL]\n");}
	else {print("La Conexion con la DB ha Fallado - [MySQL]");  SendRconCommand("exit");}
	/* ############### DON TOUCH ############### */
	#if defined publics_OnGameModeInit
		return publics_OnGameModeInit();
	#else
		return 1;
	#endif
}

#if defined _ALS_OnGameModeInit
	#undef OnGameModeInit
#else
	#define _ALS_OnGameModeInit
#endif

#define OnGameModeInit publics_OnGameModeInit
#if defined publics_OnGameModeInit
	forward publics_OnGameModeInit();
#endif


public OnGameModeExit()
{
    foreach(new a: Player){
		SavePlayer(a);
    }
    mysql_close(DB);
	/* ############### DON TOUCH ############### */
	#if defined publics_OnGameModeExit
		return publics_OnGameModeExit();
	#else
		return 0;
	#endif
}

#if defined _ALS_OnGameModeExit
	#undef OnGameModeExit
#else
	#define _ALS_OnGameModeExit
#endif

#define OnGameModeExit publics_OnGameModeExit
#if defined publics_OnGameModeExit
	forward publics_OnGameModeExit();
#endif


public OnPlayerSpawn(playerid)
{
    if(GetPVarInt(playerid, "Logueado") == 0) {Kick(playerid);}
	/* ############### DON TOUCH ############### */
	#if defined publics_OnPlayerSpawn
		return publics_OnPlayerSpawn(playerid);
	#else
		return 1;
	#endif
}

#if defined _ALS_OnPlayerSpawn
	#undef OnPlayerSpawn
#else
	#define _ALS_OnPlayerSpawn
#endif

#define OnPlayerSpawn publics_OnPlayerSpawn
#if defined publics_OnPlayerSpawn
	forward publics_OnPlayerSpawn(playerid);
#endif


public OnPlayerConnect(playerid)
{
	CamaraAleatoria(playerid);
	mysql_format(DB, global_str, sizeof global_str, "SELECT * FROM users WHERE Name = '%e'", PlayerName(playerid));
	mysql_tquery(DB, global_str, "OnPlayerDataCheck", "d", playerid);
	
	/* ############### DON TOUCH ############### */
	#if defined publics_OnPlayerConnect
		return publics_OnPlayerConnect(playerid);
	#else
		return 1;
	#endif
}

#if defined _ALS_OnPlayerConnect
	#undef OnPlayerConnect
#else
	#define _ALS_OnPlayerConnect
#endif

#define OnPlayerConnect publics_OnPlayerConnect
#if defined publics_OnPlayerConnect
	forward publics_OnPlayerConnect(playerid);
#endif


CALLBACK:OnPlayerDataCheck(playerid){
	if (IsPlayerNPC(playerid)) return SpawnPlayer(playerid);
	if (GetPVarInt(playerid, "Logueado"))
	{
	 	Kick(playerid);
	 	return 1;
	}

	if(cache_num_rows() > 0){
		cache_get_value_name(0, "Password", hash);
		format(InfoJugador[playerid][jPass], 65, "%s", hash);
		ShowDialog(playerid, dLogin, DIALOG_STYLE_PASSWORD, mHeader, mIngreso, ""#CBLANCO"entrar", ""#CBLANCO"Salir");
	}else{
		ShowDialog(playerid, dRegistro, DIALOG_STYLE_PASSWORD, mHeader, mRegistro, ""#CBLANCO"Entrar", ""#CBLANCO"Salir");
	}
	return 1;
}

public OnPlayerEnterCheckpoint(playerid)
{

	/* ############### DON TOUCH ############### */
	#if defined publics_OnPlayerEnterCheckpoint
		return publics_OnPlayerEnterCheckpoint(playerid);
	#else
		return 1;
	#endif
}

#if defined _ALS_OnPlayerEnterCheckpoint
	#undef OnPlayerEnterCheckpoint
#else
	#define _ALS_OnPlayerEnterCheckpoint
#endif

#define OnPlayerEnterCheckpoint publics_OnPlayerEnterCheckpoint
#if defined publics_OnPlayerEnterCheckpoint
	forward publics_OnPlayerEnterCheckpoint(playerid);
#endif

public OnDialogResponse(playerid, dialogid, response, listitem, inputtext[])
{
	switch(dialogid){
		case dLogin:
		{
			if(response)
			{
				new megahash[64 + 1];
				SHA256_PassHash(inputtext, "123h1h23hh", megahash, 64);
				if(strcmp(InfoJugador[playerid][jPass], megahash, false) == 0)
				{
					mysql_tquery(DB, global_str, "PlayerIngreso", "d", playerid);
					Mensaje(playerid, -1, "Bienvenido de nuevo, te echabamos de menos.");
				}
				else
				{
					ShowDialog(playerid, dLogin, DIALOG_STYLE_PASSWORD, mHeader, mError,  ""#CBLANCO"Entrar", ""#CBLANCO"Salir");
				}
			}
			else Kick(playerid);
		}
        case dRegistro:{
            if(response)
            {
				SHA256_PassHash(inputtext, "123h1h23hh", InfoJugador[playerid][TempHash], 64);
                ShowDialog(playerid, dGender, DIALOG_STYLE_MSGBOX, ""#SERVER_NAME" "#MODE_SERVER"", "{ffffff}A Continuacion indicanos tu genero.", "Masculino", "Femenino");
            }
            else Kick(playerid);
        }
		case dGender:
		{
			if(response)
			{
				InfoJugador[playerid][jSexo] = 1;
				InfoJugador[playerid][jRopa] = 46;
				ShowDialog(playerid, dFinish, DIALOG_STYLE_MSGBOX, mHeader, ""#CVERDE"Registro Finalizado; "#CBLANCO"Recuerda cumplir las\nnormas o podrias ser sancionado.", "Aceptar", "");
			}
			else
			{
				InfoJugador[playerid][jSexo] = 2;
				InfoJugador[playerid][jRopa] = 12;
				ShowDialog(playerid, dFinish, DIALOG_STYLE_MSGBOX, mHeader, ""#CVERDE"Registro Finalizado; "#CBLANCO"Recuerda cumplir las\nnormas o podrias ser sancionado.", "Aceptar", "");
			}
		}
		case dFinish:
		{
			if(response)
			{
				mysql_format(DB, global_str, sizeof global_str, "INSERT INTO users (Name, Password, Sexo, Ropa, Score) VALUES ('%e', '%e', '%i', '%i', '5')",
				PlayerName(playerid),
				InfoJugador[playerid][TempHash],
				InfoJugador[playerid][jSexo],
				InfoJugador[playerid][jRopa],
				InfoJugador[playerid][jScore]);
				mysql_query(DB, global_str);

				LimpiarPantalla(playerid, 50);
				FinishRegister(playerid);
			}
			else
			{
				Kick(playerid);
			}
		}
	}
	/* ############### DON TOUCH ############### */
	#if defined publics_OnDialogResponse
		return publics_OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]);
	#else
		return 1;
	#endif
}

#if defined _ALS_OnDialogResponse
	#undef OnDialogResponse
#else
	#define _ALS_OnDialogResponse
#endif

#define OnDialogResponse publics_OnDialogResponse
#if defined publics_OnDialogResponse
	forward publics_OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]);
#endif

public OnPlayerClickTextDraw(playerid, Text:clickedid)
{
    /*new bool:cancel = (clickedid == Text:INVALID_TEXT_DRAW);

    if(IsPlayerConnected(playerid))
    {
		if(cancel)
		{
			Kick(playerid);
			return #IgnoredThis#(playerid);
		}
		else if(clickedid == #IgnoredThis#)
		{
			
		}
    }*/
	/* ############### DON TOUCH ############### */
	#if defined publics_OnPlayerClickTextDraw
		return publics_OnPlayerClickTextDraw(playerid, Text:clickedid);
	#else
		return 1;
	#endif
}

#if defined _ALS_OnPlayerClickTextDraw
	#undef OnPlayerClickTextDraw
#else
	#define _ALS_OnPlayerClickTextDraw
#endif

#define OnPlayerClickTextDraw publics_OnPlayerClickTextDraw
#if defined publics_OnPlayerClickTextDraw
	forward publics_OnPlayerClickTextDraw(playerid, Text:clickedid);
#endif
