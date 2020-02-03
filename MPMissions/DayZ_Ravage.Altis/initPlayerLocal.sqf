//============================================//
	titleCut ["", "BLACK FADED", 1];
	waitUntil {time > 2};
	//CHECK IF INIDB DATABASE ALREADY EXIST TO LOAD SAVED DATA IF ANY
	[] call INIDB2_fnc_Inidb2RequestLoadOnStart;
	//Player Nametags
	addMissionEventHandler ["Draw3D", {[3200] call TIMS_fnc_StartCustomNameplate;}];
	//BODYGUARD VARS
	GUARD_AImax = 0;
//============================================//

//============================================////============================================//
	//CUSTOM SOUND TO SEND TO EVERYONE
//============================================////============================================//
		//SERVER USE:
		//	SFX_CUSTOM = "sound_here_from_description_ext_CLASS"; publicVariable "SFX_CUSTOM";
	//SFX_CUSTOM
	"SFX_CUSTOM" addPublicVariableEventHandler
	{
		private ["_soundSFX"];
		_soundSFX = _this select 1;
		playSound _soundSFX;
	};
//============================================////============================================//
	//CUSTOM UI FOR MISSION MESSAGE NOTIFICATION
//============================================////============================================//
		//SERVER USE:
		//	MISSION_NOTIFICATION_MSG = "RscTitles_from_description_ext"; publicVariable "MISSION_NOTIFICATION_MSG";
	//MISSION_NOTIFICATION_MSG
	"MISSION_NOTIFICATION_MSG" addPublicVariableEventHandler
	{
		private ["_MissionMSG"];
		_MissionMSG = _this select 1;
		cutRsc [_MissionMSG, "PLAIN"];
	};
//============================================////============================================//
