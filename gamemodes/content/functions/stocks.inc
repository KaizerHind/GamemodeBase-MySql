stock CongelarEx(playerid,segundos=0)
{
	if(!segundos) return TogglePlayerControllable(playerid,false);

	else if(segundos)
	{
		TogglePlayerControllable(playerid,false);
		SetTimerEx("Descongelar",segundos*1000,false,"i",playerid);
	}
	return 1;
}

CALLBACK: Descongelar(playerid) return TogglePlayerControllable(playerid,true);

stock LimpiarPantalla(playerid,lineas)
{
	Loop(i,lineas,0) Mensaje(playerid,-1,"");
 	return 1;
}

stock CamaraAleatoria(playerid)
{
	new RandMovement;
	RandMovement = random(4);
	TogglePlayerSpectating(playerid, true);
 	switch(RandMovement)
  	{
   		case 0:// Edificios con estanques.
     	{
			SetPlayerCameraPos(playerid, -2071.5801, -666.3800, 103.7000);
			SetPlayerCameraLookAt(playerid, -2071.5100, -667.3700, 103.3500);
			InterpolateCameraPos(playerid, -2071.039550, -665.536987, 102.881881, -2002.191650, -1260.880371, 119.231437, 12000);
			InterpolateCameraLookAt(playerid, -2070.205566, -670.447204, 102.441047, -2003.003417, -1256.015380, 118.410949, 12000);
		}
   		case 1:// Calle recta cerca  los Edificios.
     	{
			SetPlayerCameraPos(playerid, -1905.3481, -1314.3691, 41.8694);
			SetPlayerCameraLookAt(playerid, -1905.2710, -1313.3732, 42.0744);
			InterpolateCameraPos(playerid, -1904.092895, -1315.652832, 48.796180, -1817.523193, -597.643188, 106.978424, 12000);
			InterpolateCameraLookAt(playerid, -1904.099243, -1310.659423, 48.539691, -1821.576904, -594.860534, 106.070632, 12000);
		}
   		case 2:// Barco de Carga
     	{
			SetPlayerCameraPos(playerid, -1464.2495, 194.5354, 24.7865);
			SetPlayerCameraLookAt(playerid, -1464.5734, 193.5907, 24.6215);
			InterpolateCameraPos(playerid, -1444.139160, 185.487747, 29.126504, -1712.517456, -5.979914, 67.152709, 12000);
			InterpolateCameraLookAt(playerid, -1448.307006, 182.726303, 29.067914, -1707.998168, -4.777845, 65.383300, 12000);
		}
   		case 3:// Presidencia
	    {
			SetPlayerCameraPos(playerid, -2655.9807, -229.9838, 6.0500);
			SetPlayerCameraLookAt(playerid, -2656.2134, -230.9551, 6.2150);
			InterpolateCameraPos(playerid, -2655.536621, -237.035171, 7.645241, -2876.789062, -286.310089, 37.762966, 12000);
			InterpolateCameraLookAt(playerid, -2659.083984, -240.558776, 7.641335, -2872.790283, -289.137329, 36.754310, 12000);
		}
	}
	return 1;
}