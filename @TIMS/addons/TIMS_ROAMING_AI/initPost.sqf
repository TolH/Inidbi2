//============================================////============================================//
	//WAIT 1 MINUTE BEFORE STARTING TIMS AFTER A SERVER RESTART.
		uiSleep 45;
	//LOAD CONFIG
		config_script1 = [] execVM "TIMS_ROAMING_AI\config.sqf";
		waitUntil {scriptDone config_script1};
		diag_log "=======================================================================";
		diag_log "-=TIMS_ROAMING_AI=-: config File Loaded!";
	//PRECALL LOOT+MISC STUFF
		call compile preprocessFileLineNumbers "TIMS_ROAMING_AI\Loot\Loot_List\Loot_BACKPACKS_List.sqf";
		diag_log "-=TIMS_ROAMING_AI=-: Loot+Misc Loaded!";
		call compile preprocessFileLineNumbers "TIMS_ROAMING_AI\short.sqf";
		diag_log "-=TIMS_ROAMING_AI=-: Short File Loaded!";
	//WAIT 30SECONDS THEN CHECK IF ROAMING ACTIVATED
		if (AI_ROAMING_ACTIVATED isEqualTo 1) then
		{
			uiSleep 30;
			START_ROAMING_FLYING_PATROL = [] execVM "TIMS_ROAMING_AI\Roaming_AI\-=ROAMING_AI=-.sqf";
			uiSleep 10;
			call compile preprocessFileLineNumbers "TIMS_ROAMING_AI\CommonLib\CommonLib.sqf";
			call compile preprocessFileLineNumbers "TIMS_ROAMING_AI\PatrolledAreas\Server\Functions.sqf";
			diag_log "=======================================================================";
			diag_log "-=TIMS_ROAMING_AI=-: PATROLLEDAREAS Loaded!";
			diag_log "=======================================================================";
			uiSleep 10;
			call compile preprocessFileLineNumbers "TIMS_ROAMING_AI\PatrolledAreas\ConfigAndStart.sqf";
		};
	//CHECK IF CIVILLIAN ACTIVITY IS ACTIVATED
		if (CIVILLIAN_ACTIVITY isEqualTo 1) then
		{
			_nil = [] execVM "TIMS_ROAMING_AI\cos\cosInit.sqf";
			call compile preprocessFileLineNumbers "TIMS_ROAMING_AI\CommonLib\CommonLib.sqf";
			diag_log "=======================================================================";
			diag_log "-=TIMS_ROAMING_AI=-: CIVILIAN ACTIVITY Loaded!";
			diag_log "=======================================================================";
			diag_log "=======================================================================";
		};
//============================================////============================================//