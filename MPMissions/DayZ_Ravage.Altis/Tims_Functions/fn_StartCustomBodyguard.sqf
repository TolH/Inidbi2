//============================================//
//	TO USE: [] call Tims_fnc_StartCustomBodyguard;
params ["_actionRequest"];
//============================================//
//RESET
if (_actionRequest == "RESET") then 
{
	[player] execVM "Custom\TIMS\Bodyguard\BodyGuard_Delete.sqf";
	{
		deleteVehicle _x;
	}forEach units group player;
	deleteGroup group player;
	GUARD_AImax = 0;
	systemChat "BodyGuard Reseted!";
};
//============================================//
if (_actionRequest == "AT") then 
{
	if (GUARD_AImax < 3) then 
	{
		GUARD_AImax = GUARD_AImax + 1; 
		private _unit = group player createUnit ["I_Soldier_VR_F", getPos player, [], 0, "FORM"];
		_unit setUnitLoadout [getUnitLoadout "B_CTRG_soldier_GL_LAT_F", true];
		systemChat "AntiTank BodyGuard Joined Your Party!";
		_unit setskill 0.6;
		_unit setCombatMode "RED";
		_unit allowFleeing 0;
		_unit addMPEventHandler ["MPKilled",{ GUARD_AImax = GUARD_AImax - 1; deleteVehicle (_this select 0); }]; 
		[_unit] execVM "Custom\TIMS\Bodyguard\BodyGuard_Delete.sqf";
		if (GUARD_AImax == 1) then { systemChat "BodyGuard 1of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 2) then { systemChat "BodyGuard 2of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 3) then { systemChat "BodyGuard 3of3 Joined Your Party!"; }; 
	}; 
};
//============================================//
if (_actionRequest == "SNIPER") then 
{
	if (GUARD_AImax < 3) then 
	{
		GUARD_AImax = GUARD_AImax + 1; 
		private _unit = group player createUnit ["I_Soldier_VR_F", getPos player, [], 0, "FORM"];
		_unit setUnitLoadout [getUnitLoadout "B_ghillie_ard_F", true];
		systemChat "Sniper BodyGuard Joined Your Party!";
		_unit setskill 0.6;
		_unit setCombatMode "RED";
		_unit allowFleeing 0;
		_unit addMPEventHandler ["MPKilled",{ GUARD_AImax = GUARD_AImax - 1; deleteVehicle (_this select 0); }]; 
		[_unit] execVM "Custom\TIMS\Bodyguard\BodyGuard_Delete.sqf";
		if (GUARD_AImax == 1) then { systemChat "BodyGuard 1of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 2) then { systemChat "BodyGuard 2of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 3) then { systemChat "BodyGuard 3of3 Joined Your Party!"; }; 
	}; 
};
//============================================//
if (_actionRequest == "MEDIC") then 
{
	if (GUARD_AImax < 3) then 
	{
		GUARD_AImax = GUARD_AImax + 1; 
		private _unit = group player createUnit ["I_Soldier_VR_F", getPos player, [], 0, "FORM"];
		_unit setUnitLoadout [getUnitLoadout "O_V_Soldier_Medic_ghex_F", true];
		systemChat "Medic BodyGuard Joined Your Party!";
		_unit setskill 0.6;
		_unit setCombatMode "RED";
		_unit allowFleeing 0;
		_unit addMPEventHandler ["MPKilled",{ GUARD_AImax = GUARD_AImax - 1; deleteVehicle (_this select 0); }]; 
		[_unit] execVM "Custom\TIMS\Bodyguard\BodyGuard_Delete.sqf";
		if (GUARD_AImax == 1) then { systemChat "BodyGuard 1of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 2) then { systemChat "BodyGuard 2of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 3) then { systemChat "BodyGuard 3of3 Joined Your Party!"; }; 
	}; 
};
//============================================//
if (_actionRequest == "LMG") then 
{
	if (GUARD_AImax < 3) then 
	{
		GUARD_AImax = GUARD_AImax + 1; 
		private _unit = group player createUnit ["I_Soldier_VR_F", getPos player, [], 0, "FORM"];
		_unit setUnitLoadout [getUnitLoadout "B_Patrol_Soldier_MG_F", true];
		systemChat "LMG BodyGuard Joined Your Party!";
		_unit setskill 0.6;
		_unit setCombatMode "RED";
		_unit allowFleeing 0;
		_unit addMPEventHandler ["MPKilled",{ GUARD_AImax = GUARD_AImax - 1; deleteVehicle (_this select 0); }]; 
		[_unit] execVM "Custom\TIMS\Bodyguard\BodyGuard_Delete.sqf";
		if (GUARD_AImax == 1) then { systemChat "BodyGuard 1of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 2) then { systemChat "BodyGuard 2of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 3) then { systemChat "BodyGuard 3of3 Joined Your Party!"; }; 
	}; 
};
//============================================//
if (_actionRequest == "CLONE") then 
{
	if (GUARD_AImax < 3) then 
	{
		GUARD_AImax = GUARD_AImax + 1; 
		private _unit = group player createUnit ["I_Soldier_VR_F", getPos player, [], 0, "FORM"];
		_unit setUnitLoadout [getUnitLoadout player, true];
		systemChat "Clone BodyGuard Joined Your Party!";
		_unit setskill 0.6;
		_unit setCombatMode "RED";
		_unit allowFleeing 0;
		_unit addMPEventHandler ["MPKilled",{ GUARD_AImax = GUARD_AImax - 1; deleteVehicle (_this select 0); }]; 
		[_unit] execVM "Custom\TIMS\Bodyguard\BodyGuard_Delete.sqf";
		if (GUARD_AImax == 1) then { systemChat "BodyGuard 1of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 2) then { systemChat "BodyGuard 2of3 Joined Your Party!"; }; 
		if (GUARD_AImax == 3) then { systemChat "BodyGuard 3of3 Joined Your Party!"; }; 
	}; 
};