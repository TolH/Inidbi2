//============================================////============================================//
// TO SHOW INGAME:   		createDialog "TIMS_BODYGUARD_SELECTION";
// IDD USED FOR INFISTAR: #77777
//============================================////============================================//
	class TIMS_BODYGUARD_SELECTION
	{
		idd = 77777;
		class controls
		{
			class MySelection_Picture1
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\AT.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (345 / 1920) * SafeZoneW";
			y = "SafeZoneY + (209.285714285714 / 1080) * SafeZoneH";
			w = "(225 / 1920) * SafeZoneW";
			h = "(225.714285714286 / 1080) * SafeZoneH";
			};
			class MySelection_Picture2
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\Sniper.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (600 / 1920) * SafeZoneW";
			y = "SafeZoneY + (194.285714285714 / 1080) * SafeZoneH";
			w = "(225 / 1920) * SafeZoneW";
			h = "(225.714285714286 / 1080) * SafeZoneH";
			};
			class MySelection_Picture3
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\Medic.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (855 / 1920) * SafeZoneW";
			y = "SafeZoneY + (179.285714285714 / 1080) * SafeZoneH";
			w = "(225 / 1920) * SafeZoneW";
			h = "(225.714285714286 / 1080) * SafeZoneH";
			};
			class MySelection_Picture4
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\LMG.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (1110 / 1920) * SafeZoneW";
			y = "SafeZoneY + (194.285714285714 / 1080) * SafeZoneH";
			w = "(225 / 1920) * SafeZoneW";
			h = "(225.714285714286 / 1080) * SafeZoneH";
			};
			class MySelection_Picture5
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\Clone.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (1365 / 1920) * SafeZoneW";
			y = "SafeZoneY + (209.285714285714 / 1080) * SafeZoneH";
			w = "(225 / 1920) * SafeZoneW";
			h = "(225.714285714286 / 1080) * SafeZoneH";
			};
			class MySelection_Picture6
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\UAV1.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (615 / 1920) * SafeZoneW";
			y = "SafeZoneY + (479.285714285714 / 1080) * SafeZoneH";
			w = "(195 / 1920) * SafeZoneW";
			h = "(135.714285714286 / 1080) * SafeZoneH";
			};
			class MySelection_Picture7
			{
				deletable = 0;
				fade = 0;
				access = 0;
				type = 0;
				idc = -1;
				style = 48; //+ 0x800;
				colorBackground[] = {0, 0, 0, 0};
				colorText[] = {1, 1, 1, 1};
				font = "PuristaBold";
				sizeEx = 0;
				lineSpacing = 0;
				text = "Custom\TIMS\Images\UAV2.jpg";
				fixedWidth = 0;
				shadow = 1;
			x = "SafeZoneX + (1125 / 1920) * SafeZoneW";
			y = "SafeZoneY + (479.285714285714 / 1080) * SafeZoneH";
			w = "(195 / 1920) * SafeZoneW";
			h = "(135.714285714286 / 1080) * SafeZoneH";
			};
			class MyButtonClose 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.6,0.6,0.6,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 1, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (870.207612456747 / 1920) * SafeZoneW";
			y = "SafeZoneY + (570.000000000001 / 1080) * SafeZoneH";
			w = "(179.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "				Close Menu";
				action = " closeDialog 0; ";
			};
			class MyButtonReset 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.6,0.6,0.6,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 1, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (870.207612456747 / 1920) * SafeZoneW";
			y = "SafeZoneY + (525.000000000001 / 1080) * SafeZoneH";
			w = "(179.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "								Reset";
				action = " [""RESET""] call TIMS_fnc_StartCustomBodyguard; ";
			};
			class MySelection_Button1 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.8,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 1, 1 };  // no sound
				soundEscape[] = { "", 1, 1 };  // no sound
			x = "SafeZoneX + (345.207612456747 / 1920) * SafeZoneW";
			y = "SafeZoneY + (435.000000000001 / 1080) * SafeZoneH";
			w = "(224.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "															AT";
				action = " [""AT""] call TIMS_fnc_StartCustomBodyguard; ";
			};
			class MySelection_Button2 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.8,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (600.207612456747 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420.000000000001 / 1080) * SafeZoneH";
			w = "(224.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "											Sniper";
				action = " [""SNIPER""] call TIMS_fnc_StartCustomBodyguard; ";
			};
			class MySelection_Button3 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.8,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (855.20761245675 / 1920) * SafeZoneW";
			y = "SafeZoneY + (405.000000000001 / 1080) * SafeZoneH";
			w = "(224.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999994 / 1080) * SafeZoneH";
				text = "											Medic";
				action = " [""MEDIC""] call TIMS_fnc_StartCustomBodyguard; ";
			};
			class MySelection_Button4 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.8,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (1110.20761245675 / 1920) * SafeZoneW";
			y = "SafeZoneY + (420.000000000001 / 1080) * SafeZoneH";
			w = "(224.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "														LMG";
				action = " [""LMG""] call TIMS_fnc_StartCustomBodyguard; ";
			};
			class MySelection_Button5 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.8,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (1365.20761245675 / 1920) * SafeZoneW";
			y = "SafeZoneY + (435.000000000001 / 1080) * SafeZoneH";
			w = "(224.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "									  Clone";
				action = " [""CLONE""] call TIMS_fnc_StartCustomBodyguard; ";
			};
			class MySelection_Button6 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.6,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (615.20761245675 / 1920) * SafeZoneW";
			y = "SafeZoneY + (615.000000000001 / 1080) * SafeZoneH";
			w = "(194.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "										UAV1";
				action = " closeDialog 0; if !((""I_UavTerminal"" in (vestItems player + uniformItems player + backpackItems player + assignedItems player))) then {player addItem ""I_UavTerminal"";}; private _UAV_SELECTION_1 = createVehicle [""I_UGV_01_rcws_F"", getPos player, [], 0, ""NONE""]; ";
			};
			class MySelection_Button7 
			{
				idc = -1;
				type = CT_BUTTON;
				style = ST_LEFT;
				default = false;
				font = "PuristaBold";
				sizeEx = 0.04;
				colorText[] = {0,0,0,1};
				colorFocused[] = { 1, 0, 0, 1 };   // border color for focused state
				colorDisabled[] = {0.3,0.3,0.3,1};
				colorBackground[] = {0.1,0.6,0.1,1};
				colorBackgroundDisabled[] = {0.6,0.6,0.6,1};
				colorBackgroundActive[] = {1,0.5,0,1};
				offsetX = 0.003;
				offsetY = 0.003;
				offsetPressedX = 0.002;
				offsetPressedY = 0.002;
				colorShadow[] = { 0, 0, 0, 0.5 };
				colorBorder[] = { 0, 0, 0, 1 };
				borderSize = 0;
				soundEnter[] = { "", 0, 1 };  // no sound
				soundPush[] = { "", 1, 1 };
				soundClick[] = { "", 0, 1 };  // no sound
				soundEscape[] = { "", 0, 1 };  // no sound
			x = "SafeZoneX + (1125.20761245675 / 1920) * SafeZoneW";
			y = "SafeZoneY + (615.000000000001 / 1080) * SafeZoneH";
			w = "(194.792387543253 / 1920) * SafeZoneW";
			h = "(29.9999999999995 / 1080) * SafeZoneH";
				text = "										UAV2";
				action = " closeDialog 0; if !((""I_UavTerminal"" in (vestItems player + uniformItems player + backpackItems player + assignedItems player))) then {player addItem ""I_UavTerminal"";}; private _UAV_SELECTION_1 = createVehicle [""B_T_UAV_03_F"", getPos player, [], 0, ""NONE""]; ";
			};
			class BODYGUARD_INFORMATION_TEXT
			{
				idc = -1;
				access = 0;
				type = 13;
				style = 0;
				font = "PuristaBold";
				size = 0.04;
				shadow = 1;
				x = "SafeZoneX + (611.105610561056 / 1920) * SafeZoneW";
				y = "SafeZoneY + (661.617821782178 / 1080) * SafeZoneH";
				w = "(708.999999999999 / 1920) * SafeZoneW";
				h = "(136 / 1080) * SafeZoneH";
				text = "<t size='1.3' font='LCD14' underline='1' align='center'>INFORMATION:</t><br /> <t underline='1'>KEYBINDINGS:</t><br />";
				tooltip = "";
			};
		};
	};
//============================================////============================================//