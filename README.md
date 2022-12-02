
# GamemodeBase - MySQL

### How to install?
1. Download the [database]((https://github.com/KaizerHind/GamemodeBase_MySQL/blob/master/Database/dbserver.sql)), go to [Xampp](http://localhost/phpmyadmin/server_import.php) and create a new clean database, then import the new one.
2. Download the [gamemode](https://github.com/KaizerHind/GamemodeBase_MySQL/archive/refs/heads/master.zip) and extract the content to the path you want.
3. Lastly, remember to configure the [mysql.ini](https://github.com/KaizerHind/GamemodeBase_MySQL/blob/master/mysql.ini) file, which contains the database configuration.
---
### Dependencies

-   [SA-MP 0.3.7-R2 Windows Server](http://files.sa-mp.com/samp037_svr_R2-1-1_win32.zip)
-   [Crashdetect](https://github.com/Zeex/samp-plugin-crashdetect)
-   [Streamer](https://github.com/samp-incognito/samp-streamer-plugin)
-   [Sscanf](https://github.com/maddinat0r/sscanf)
-   [MySQL-r41](https://github.com/pBlueG/SA-MP-MySQL)
-   [YSI-Includes](https://github.com/pawn-lang/YSI-Includes)
---

# • **Español:**
Esta es una simple base, contiene **Sistema de Registro**, **Ingreso**, **guardado de Sexo**, **skin** y **score**. La gamemode fue desarrollada de manera **'Modular'**, por lo que parte del codigo esta distribuido en **./include/**, cabe resaltar que si alguien le añade un sistema de muebles o algo relacionado a edicion de objetos, y deben utilizar los siguientes parametros **OnPlayerPickUpDynamicPickup, OnPlayerSelectDynamicObject,OnPlayerEditDynamicObject**, deberan añadir esto en index.pwn, debajo donde son cargado los includes de forward y public.

**Contenido:**

    |— Root
    |—— ./include/ <-- Contiene variables comunes y/o enums.
    |——— ./include/Modules/ <-- Almacena las funciones nativas y forwards creados.
    |———— ./include/Functions/ <-- Almacena callbacks simples sin mucho trabajo.

----
# • **English:**
This is a simple base, it contains a **Registration System**, **Entry**, and **saving of Sex**, **skin** and **score**. The gamemode was developed in a **'Modular'** way, so part of the code is distributed in **./include/**, it should be noted that if someone adds a furniture system or something related to object editing, and they must use the following parameters **OnPlayerPickUpDynamicPickup , OnPlayerSelectDynamicObject, OnPlayerEditDynamicObject,** you should add this in index.pwn, below where the forward and public includes are loaded.

 **Content:**

    |— Root
    |—— ./include/ <-- Contains common variables and/or enums.
    |——— ./include/Modules/ <-- Stores the native functions and forwards created.
    |———— ./include/Functions/ <-- It stores simple callbacks without much work.
----
