
forward PlayerIngreso(playerid);
public PlayerIngreso(playerid) 
{
    if(cache_num_rows () == 0)
    {
        Mensaje(playerid, -1, "Contraseña incorrecta, ingresala nuevamente.");
        ShowDialog(playerid, dLogin, DIALOG_STYLE_PASSWORD, mHeader, mError,  ""CBLANCO"Entrar", ""CBLANCO"Salir");
    }
    else
    {
        cache_get_value_int(0, "Ropa", InfoJugador[playerid][jRopa]);
        cache_get_value_int(0, "Sexo", InfoJugador[playerid][jSexo]);
		cache_get_value_int(0, "Score", InfoJugador[playerid][jScore]);

		SetPlayerScore(playerid, InfoJugador[playerid][jScore]);

        SetPVarInt(playerid, "Logueado", 1);
        AccountLoaded(playerid);
    }
    return 1;
}

forward AccountLoaded(playerid);
public AccountLoaded(playerid){
    TogglePlayerSpectating(playerid, false);

    format(InfoJugador[playerid][jName], 25, "%s", PlayerName(playerid));
	SetSpawnInfo(playerid, 0, InfoJugador[playerid][jRopa], -1423.0900, -288.7728, 14.1594, 138.0, 0, 0, 0, 0, 0, 0);
	SpawnPlayer(playerid);
    return 1;
}

FinishRegister(playerid)
{ 
    TogglePlayerSpectating(playerid, false);

	//Bienvenida
	Mensaje(playerid,-1,"- "#CBLANCO"!Felicidades; Bienvenido a "mHeader""#CBLANCO", disfruta tu estancia!");

    //Spawn de Registro
	SetPVarInt(playerid, "Logueado", 1);
   	CongelarEx(playerid, 6);
	SetPlayerVirtualWorld(playerid, 0);
    SetSpawnInfo(playerid, 0, InfoJugador[playerid][jRopa], -1423.0900, -288.7728, 14.1594, 138.0, 0, 0, 0, 0, 0, 0);
    SpawnPlayer(playerid);

	//Stats + Armas
	SetPlayerScore(playerid, 5);

    printf("- %s Se ha registrado por Primera vez en el Servidor.", PlayerName(playerid));
	return 1;
}

stock SavePlayer(playerid){
    mysql_format(DB, global_str, sizeof(global_str), "UPDATE users SET Score = %d WHERE ID = %d LIMIT 1",
    InfoJugador[playerid][jScore],
    InfoJugador[playerid][ID]);

    mysql_tquery(DB, global_str);
    return 1;
}