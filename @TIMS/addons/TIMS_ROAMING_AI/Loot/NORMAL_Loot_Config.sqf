/*
	//CRATE LOOT RATE/QUALITY CAN BE:
		NORMAL_Loot_Setup;
	//CRATE LOOT TYPE CAN BE:
		"BACKPACKS"
	//EXEMPLE HOW TO USE:
		[_crate1,"BACKPACKS"] ExecVM NORMAL_Loot_Setup;
*/
//============================================////============================================//
private _crate = _this select 0;
private _type = _this select 1;
//============================================////============================================//
private _BACKPACKS_randomMAX 	= floor(random 10);
//============================================////============================================//
//"BACKPACKS" TYPE CRATE Loots...
//============================================////============================================//
	if (_type isEqualTo "BACKPACKS") then 
	{
		//============================================////============================================//
		//LOOT_ARMA3_BACKPACKS
		_scount = count LOOT_ARMA3_BACKPACKS;
		for "_x" from 1 to _BACKPACKS_randomMAX do 
		{
			_sSelect = floor(random _sCount);
			_item = LOOT_ARMA3_BACKPACKS select _sSelect;
			_crate addBackpackCargoGlobal [_item,(round(random 3))];
		};
	};
//============================================////============================================//