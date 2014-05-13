cws_ais_debugging				=	false;			//	Enable to turn on full debugging for CWS (default: false)

cws_ais_revive_guaranty         =   true;			//	Enable for a 100% revive chance. False, and the unit can die immediately (default: true)
cws_ais_allow_self_revive		=	true;			//	Enable if you want to allow the medic to self-revive using first aid while down. Key combo is Ctrl+E (default: true)
cws_ais_show_injury_marker      =   true;			//	Enable to show a marker for injured units on the map (default: true)
cws_ais_show_injury_message     =   true;			//	Enable to show a message in side chat will show when a unit is injured (default: true)
cws_ais_show_3d_icons           =   true;			//	Enable and a 3D icon will show you in-game the position of injured units within a range of 30 metres (default: true)
cws_ais_dead_dialog             =   false;			//	Enable the deadcam and the dead dialog (default: false)
cws_ais_bleeding_display		=	true;			//	Enable the bleeding counter display for the injured unit (default: true)

cws_ais_rambofactor             =   3;              //  Damage tolerance for the unit before the unit are unconcious ( 1== low, 2 == normal, 3 == higher, 5 == extreme)
cws_ais_random_lifetime_factor  =   200;            //  Base time for bleeding out. The final time depends on the damage the unit takes before they are unconcious. The time is randomized and not exact.
cws_ais_3d_icon_range			=	50;				//	Max range for the 3D icons, if enabled
cws_ais_delTime                 =   300;			//  Time in seconds until dead bodys are deleted. If set to 0 this feature is disabled. (only units with CWS loaded will be deleted)
cws_ais_firstaid_distance		=	2;				//	Maximum distance between the healer and the injured to do first aid
cws_ais_damage_limit			=	0.9;			//	Maximum damage a unit will receive if revive gauranty is enabled

cws_ais_killcam_quotes = [
    [(localize "STR_QUOTE_1"),(localize "STR_AUTHOR_1")],
	[(localize "STR_QUOTE_2"),(localize "STR_AUTHOR_2")],
	[(localize "STR_QUOTE_3"),(localize "STR_AUTHOR_3")],
	[(localize "STR_QUOTE_4"),(localize "STR_AUTHOR_4")],
	[(localize "STR_QUOTE_5"),(localize "STR_AUTHOR_5")],
	[(localize "STR_QUOTE_6"),(localize "STR_AUTHOR_6")],
	[(localize "STR_QUOTE_7"),(localize "STR_AUTHOR_7")],
	[(localize "STR_QUOTE_8"),(localize "STR_AUTHOR_8")],
	[(localize "STR_QUOTE_9"),(localize "STR_AUTHOR_9")],
	[(localize "STR_QUOTE_10"),(localize "STR_AUTHOR_10")],
	[(localize "STR_QUOTE_11"),(localize "STR_AUTHOR_11")],
	[(localize "STR_QUOTE_12"),(localize "STR_AUTHOR_12")],
	[(localize "STR_QUOTE_13"),(localize "STR_AUTHOR_13")],
	[(localize "STR_QUOTE_14"),(localize "STR_AUTHOR_14")],
	[(localize "STR_QUOTE_15"),(localize "STR_AUTHOR_15")],
	[(localize "STR_QUOTE_16"),(localize "STR_AUTHOR_16")],
	[(localize "STR_QUOTE_17"),(localize "STR_AUTHOR_17")],
	[(localize "STR_QUOTE_18"),(localize "STR_AUTHOR_18")],
	[(localize "STR_QUOTE_19"),(localize "STR_AUTHOR_19")],
	[(localize "STR_QUOTE_20"),(localize "STR_AUTHOR_20")],
	[(localize "STR_QUOTE_21"),(localize "STR_AUTHOR_21")],
	[(localize "STR_QUOTE_22"),(localize "STR_AUTHOR_22")],
	[(localize "STR_QUOTE_23"),(localize "STR_AUTHOR_23")],
	[(localize "STR_QUOTE_24"),(localize "STR_AUTHOR_24")],
	[(localize "STR_QUOTE_25"),(localize "STR_AUTHOR_25")],
	[(localize "STR_QUOTE_26"),(localize "STR_AUTHOR_26")],
	[(localize "STR_QUOTE_27"),(localize "STR_AUTHOR_27")],
	[(localize "STR_QUOTE_28"),(localize "STR_AUTHOR_28")],
	[(localize "STR_QUOTE_29"),(localize "STR_AUTHOR_29")],
	[(localize "STR_QUOTE_30"),(localize "STR_AUTHOR_30")],
	[(localize "STR_QUOTE_31"),(localize "STR_AUTHOR_31")],
	[(localize "STR_QUOTE_32"),(localize "STR_AUTHOR_32")],
	[(localize "STR_QUOTE_33"),(localize "STR_AUTHOR_33")],
	[(localize "STR_QUOTE_34"),(localize "STR_AUTHOR_34")],
	[(localize "STR_QUOTE_35"),(localize "STR_AUTHOR_35")],
	[(localize "STR_QUOTE_36"),(localize "STR_AUTHOR_36")],
	[(localize "STR_QUOTE_37"),(localize "STR_AUTHOR_37")],
	[(localize "STR_QUOTE_38"),(localize "STR_AUTHOR_38")],
	[(localize "STR_QUOTE_39"),(localize "STR_AUTHOR_39")],
	[(localize "STR_QUOTE_40"),(localize "STR_AUTHOR_40")],
	[(localize "STR_QUOTE_41"),(localize "STR_AUTHOR_41")],
	[(localize "STR_QUOTE_42"),(localize "STR_AUTHOR_42")],
	[(localize "STR_QUOTE_LAST"),(localize "STR_AUTHOR_LAST")]
];

[] spawn {
	[] call ccl_fnc_WaitForGameLoad;

	//Broadcast our version info
	_modConfig = (configFile >> "CfgPatches" >> "cws_injury");
	_version = gettext (_modConfig >> "versionStr");
	[[format ["%1 is loading CWS v%2", name player, _version], 2, ["CWS"]], "ccl_fnc_ShowMessage", false] call ccl_fnc_GlobalExec;

	["Initializing ...", 2, ["CWS"]] call ccl_fnc_ShowMessage;

	//Globally load the system on all playable units
	[[nil, 3], "cws_fnc_LoadCWS", false] call ccl_fnc_GlobalExec;

	//Load the curator 3D icons
	if(isServer && isDedicated) then {
		//Skip 3D icon loading for dedicated servers
	} else {
		//Only continue if the player is a curator
		if([player] call ccl_fnc_IsZeusCurator) then
		{
			{
				_curatorUnit = getAssignedCuratorUnit _x;

				if(_curatorUnit == player) exitWith {
					[format ["Adding 3D icon handler to %1 ...", player], 2, ["CWS"]] call ccl_fnc_ShowMessage;
			
					//Load the 3D icon handler
					_3d = addMissionEventHandler ["Draw3D", {[] call cws_fnc_DrawCuratorIcons}];
			
					//Make sure that the curator unit has a radio item
					player addItem "ItemRadio";
					player assignItem "ItemRadio";
				};
			} foreach allCurators;
		};
	};

	["Initialized", 2, ["CWS"]] call ccl_fnc_ShowMessage;
};