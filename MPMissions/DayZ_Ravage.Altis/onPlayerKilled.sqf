//PLAYER DIED. SEND RESET PACKET TO DATABASE
	[] call INIDB2_fnc_Inidb2RequestResetPlayer;
//PLAYER RACING VARS
	PLAYER_IS_RACING = 0;
//AI BODYGUARD VARS
	GUARD_AImax = 0;