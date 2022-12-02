/*======================================================================*/

new
	MySQL:DB,
	global_str[1024];

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

new InfoJugador[MAX_PLAYERS][jInfo];

/*======================================================================*/

/* Macros */
#define CALLBACK:%0(%1)     forward %0(%1); public %0(%1)
#define Loop(%0,%1,%2)  	for(new %0 = %2; %0 < %1; %0++)
#define Mensaje         	SendClientMessage
#define MensajeTodos 		SendClientMessageToAll
#define TextoJugador 		GameTextForPlayer
#define TextoTodos 			GameTextForAll

#define sDialog(            ShowPlayerDialog(

/* Configuracion Manual Server.cfg */
#define DISCORD_SV          "https://discord.gg/CODIGO"
#define NOMBRE_SERVER       "Add Your ServerName Here"
#define MODE_SERVER         "Roleplay"
#define LANGUAGE_SERVER     "Español/Spanish"

/* Mensajes Predeterminados */
#define mHeader             "\t"#CWZ"YourName "#CWZ2"Server"
#define mRegistro           ""#CBLANCO"Bienvenido al Servidor.\nIngresa una contraseña para registrarte."
#define mIngreso            ""#CBLANCO"Bienvenido a "#CWZ"YourName "#CWZ2"Server\n"#CBLANCO"Ingresa tu contraseña para ingresar al Servidor."
#define mError				""#CERROR"La contraseña ingresada no corresponde\na la registrada en la "#CBLANCO"Base de datos.\n\nIntenta nuevamente."

/*======================================================================*/