//============================================////============================================//
//=====================================/*-CONFIG START-*/=====================================//
//============================================////============================================//
//==================================//
	/*ROAMING_AI SELECTION*/
		AI_ROAMING_ACTIVATED		= 1;		//ENABLE ROAMING AI (default=1 Enabled)
		CIVILLIAN_ACTIVITY			= 0;		// ACTIVATE CIVILIAN ACTIVITY (1=Enabled)
		AI_BONUS_VR_HUNT			= 10;		//SPAWN A SPECIAL AI WORTH 1 MILLION WHEN PLAYER KILLED THIS AMOUNT OF AI (Default=50)
		AI_ROAMING_FLYING_MAX		= 3;		//MAX NUMBER OF FLYING VEHICLE ROAMING THE MAP
		AI_ROAMING_GROUND_MAX		= 5;		//MAX NUMBER OF GROUND VEHICLE ROAMING THE MAP
		AI_ROAMING_UNIT_ON_FOOT_MAX = 100;		//MAX NUMBER OF UNIT_ON_FOOT ROAMING THE MAP
		AI_ROAMING_FLYING_CHOICE	= 
			[
				"O_Heli_Light_02_dynamicLoadout_F",
			 	"B_Heli_Transport_01_F",
			 	"B_Plane_CAS_01_dynamicLoadout_F"
			];
		AI_ROAMING_GROUND_CHOICE	= 
			[
				"O_G_Offroad_01_armed_F",
				"B_G_Offroad_01_armed_F"
			];
		AI_ROAMING_MEN_CHOICE		= 
			[
				"O_sniper_F","O_spotter_F","O_SoldierU_GL_F","O_SoldierU_SL_F","O_sniper_F","O_spotter_F","O_recon_F","O_recon_JTAC_F","O_recon_LAT_F","O_recon_M_F","O_recon_TL_F","O_recon_exp_F",
			 	"O_sniper_F","O_spotter_F","O_soldierU_AA_F","O_soldierU_AR_F","O_soldierU_AT_F","O_soldierU_A_F","O_soldierU_F","O_sniper_F","O_spotter_F",
			 	"O_recon_F","O_recon_JTAC_F","O_recon_LAT_F","O_recon_M_F","O_recon_TL_F","O_recon_exp_F","O_sniper_F","O_spotter_F","O_soldierU_LAT_F","O_soldierU_M_F","O_soldierU_TL_F","O_soldierU_exp_F","O_soldierU_medic_F","O_sniper_F","O_spotter_F"
			];
//==================================// 
	/*AI_OPTIONNAL CONFIGS*/
		AI_ROCKET_EQUIP_CHANCE		= 25;		// THE CHANCE IN % AI WILL SPAWN WITH A ROCKET LAUNCHER. (DEFAULT =25%).
		AI_MONEY_DROP				= 5000;		// RANDOM MAX AMOUNT OF MONEY IN THE AI INVENTORY.
//==================================// 
	/*AI_SKILLS CONFIGS*/
		//SET BETWEEN (0.0 TO 1.0 BEING MAX VALUE)
		AI_SKILLS_ROAMING_RND = [0.10, 0.11, 0.12, 0.13, 0.14, 0.15, 0.16, 0.17, 0.18, 0.19, 0.20, 0.21, 0.22, 0.23, 0.24, 0.25];
//==================================//
//============================================////============================================//
//======================================/*-CONFIG END-*/======================================//
//============================================////============================================//
