//Starts the Initialization of Server code For TIMS.
	if (isServer) then 
	{
		[] ExecVM "@inidbi2\InitServer\INIDB_Server_Altis.sqf";
		//[] ExecVM "\TIMS_ROAMING_AI\fn_init.sqf";
	};
//REMOVE DEAD PLAYER BODIES WHEN THEY DISCONNECT SO THEY CAN'T DUPE GEAR
    addMissionEventHandler ['HandleDisconnect',{[(_this select 0)] spawn {uiSleep 3; deleteVehicle (_this select 0);};}];
