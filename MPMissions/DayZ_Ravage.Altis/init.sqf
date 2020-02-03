//=========================================================//
waituntil {!(IsNull (findDisplay 46))};
bodyguard_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ((_this select 1) == 7) then { createDialog 'TIMS_BODYGUARD_SELECTION' };"];
save_progress_keyDownEHId = (findDisplay 46) displayAddEventHandler ["KeyDown", "if ( (_this select 1) == 10 ) then { [] call INIDB2_fnc_Inidb2RequestSavePlayer; };"];
//=========================================================//
