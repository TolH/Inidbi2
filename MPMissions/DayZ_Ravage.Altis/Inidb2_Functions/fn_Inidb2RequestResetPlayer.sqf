///============================================////============================================//
///REQUEST TO THE SERVER FOR RESETING DATA BECAUSE THE PLAYER DIED
//TO USE: [] call INIDB2_fnc_Inidb2RequestResetPlayer;
///============================================//
	_dataplayrname = profileName;
	_dataplayruid = getPlayerUID player;
		_random_Spawn_Zone = 
			[
				"respawn_resistance","respawn_resistance_1","respawn_resistance_2","respawn_resistance_3","respawn_resistance_4","respawn_resistance_5",
				"respawn_resistance_6","respawn_resistance_7","respawn_resistance_8","respawn_resistance_9","respawn_resistance_10","respawn_resistance_11",
				"respawn_resistance_12","respawn_resistance_13","respawn_resistance_14","respawn_resistance_15","respawn_resistance_16","respawn_resistance_17",
				"respawn_resistance_18","respawn_resistance_19","respawn_resistance_20","respawn_resistance_21"
			] call BIS_fnc_selectRandom;
	_dataplayrpos = getMarkerPos _random_Spawn_Zone;
	_dataplayrdir = round(random 360);
	_dataplayrdamage = 0;
		_starting_Foods_Items1 = 
			[
				"rvg_purificationTablets","rvg_beans","rvg_bacon","rvg_milk","rvg_rice","rvg_plasticBottlePurified","rvg_canteen","rvg_spirit","rvg_franta"
			] call BIS_fnc_selectRandom;
		_starting_Foods_Items2 = 
			[
				"rvg_purificationTablets","rvg_beans","rvg_bacon","rvg_milk","rvg_rice","rvg_plasticBottlePurified","rvg_canteen","rvg_spirit","rvg_franta"
			] call BIS_fnc_selectRandom;
	_dataplayrloadout = [[],[],[],["U_B_CombatUniform_mcam",[["SAN_Headlamp_v1",1],["SAN_Headlamp_v2",1],["rvg_Geiger",1,1],["rvg_canOpener",1,1],[_starting_Foods_Items1,1,1],[_starting_Foods_Items2,1,1]]],[],[],"","",[],["ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""]];
	_dataplayrThirst = 100;
	_dataplayrHunger = 100;
	_dataplayrRadiation = 0;
	un_database_ResetData = 
	[
		_dataplayrname,
		_dataplayruid,
		_dataplayrpos,
		_dataplayrdir,
		_dataplayrdamage,
		_dataplayrloadout,
		_dataplayrThirst,
		_dataplayrHunger,
		_dataplayrRadiation
	];
	publicVariableServer "un_database_ResetData";
///============================================////============================================//