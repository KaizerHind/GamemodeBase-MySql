/*======================================================================*/

enum jInfo
{
    ID,
    jName[25],
    jPass[64 + 1],
	TempHash[64 + 1],
    jSexo,
    jRopa,
    jScore
}

new
	MySQL:DB,
	global_str[1024],
    hash[64 + 1];

new InfoJugador[MAX_PLAYERS][jInfo];

/*======================================================================*/

/* Macros */
#define CALLBACK:%0(%1)     forward %0(%1); public %0(%1)
#define Loop(%0,%1,%2)  	for(new %0 = %2; %0 < %1; %0++)
#define Mensaje         	SendClientMessage
#define MensajeTodos 		SendClientMessageToAll

#define ShowDialog(            ShowPlayerDialog(

/* Configuracion Manual Server.cfg */
#define DISCORD_SV          "https://discord.gg/CODIGO"
#define SERVER_NAME         "GamemodeBase"
#define MODE_SERVER         "Roleplay"
#define LANGUAGE_SERVER     "Espaņol/Spanish"

/* Mensajes Predeterminados */
#define mHeader             "\t"#CWZ""#SERVER_NAME" "#CWZ2""#MODE_SERVER""
#define mRegistro           ""#CBLANCO"Bienvenido al Servidor.\nIngresa una contraseņa para registrarte."
#define mIngreso            ""#CBLANCO"Bienvenido a "#CWZ""#SERVER_NAME" "#CWZ2""#MODE_SERVER"\n"#CBLANCO"Ingresa tu contraseņa para ingresar al Servidor."
#define mError				""#CERROR"La contraseņa ingresada no corresponde\na la registrada en la "#CBLANCO"Base de datos.\n\nIntenta nuevamente."

/*======================================================================*/