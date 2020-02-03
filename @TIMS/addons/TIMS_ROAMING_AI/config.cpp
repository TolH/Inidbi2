class CfgPatches 
{
	class TIMS_ROAMING_AI 
	{
		units[] = {};
		weapons[] = {}; 
		requiredAddons[] = {};	
		author[]= {"TOLH"}; 		
	};
};

class CfgFunctions
{
	class TIMSlaunch
	{
		class TIMS_Initialization
		{
			class Init
			{
				file = "TIMS_ROAMING_AI\fn_init.sqf";
				preInit = 1;
			};
		};
	};
};