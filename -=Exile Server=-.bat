	@ECHO off
	COLOR 0A
	TITLE EXILE Server restarter
	SETLOCAL EnableExtensions enabledelayedexpansion
	SET StartServer=arma3server_x64.exe
	SET StartLOGREADER=SC_EXILE\LogReader_Server.py
	SET /A restartCounter=0


	REM -================================================================================-
	REM RESTART TIME HERE IN HOURS
	SET Restart= 3
	REM SERVER LAUNCH PARAMETERS
	SET ServerMods= "-serverMod=@inidbi2;@Ares Mod - Achilles Expansion;@SLZ;@Vcom AI V3.3.3;@LAMBS_Danger.fsm;@TIMS;" "-mod=@CBA_A3;@Ravage;@Enhanced Movement;@MrSanchez' Headlamps;" "-config=@inidbi2\config.cfg" "-cfg=@inidbi2\basic.cfg" "-profiles=SC_EXILE" "-port=2302" "-profiles=SC_EXILE" "-name=SC_EXILE" -autoinit -filepatching
	SET /A Hours=%Restart%*3600
	GOTO StartArma3Server
	REM -================================================================================-


	:StartArma3Server
	ECHO 			   ========================================
	ECHO 		Starting Arma 3 Server, The server has been restarted (%restartCounter%) times.
	ECHO 			   ========================================
	START /b %StartServer% %ServerMods%
	ECHO 	      	   Server SET to restart every %Restart% Hours, standing by...
	TIMEOUT 10 /NOBREAK
	CLS
	START /b %StartLOGREADER%
	REM TIMEOUT %Hours% /NOBREAK
	REM GOTO RestartServer

	REM :RestartServer
	REM SET /A restartCounter+=1
	REM ECHO 			   ========================================
	REM ECHO 			Please wait while the server is restarting.
	REM ECHO 			   ========================================
    REM TASKKILL /F /IM %StartServer% >nul
	REM TIMEOUT 4 >nul
	REM CLS
	REM GOTO StartArma3Server