_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

if (_activated) then {
	_enableDebugging = _logic getVariable ["EnableDebugging", 0];
	_enableReviveGuaranty = _logic getVariable ["EnableReviveGuaranty", 1];
	_enableMedicSelfRevive = _logic getVariable ["EnableMedicSelfRevive", 1];
	_enableInjuryMarker = _logic getVariable ["EnableInjuryMarker", 1];
	_enableInjuryMessage = _logic getVariable ["EnableInjuryMessage", 1];
	_enableInjury3DIcon = _logic getVariable ["EnableInjury3DIcon", 1];
	_enableDeadDialog = _logic getVariable ["EnableDeadDialog", 0];
	_enableBleedingDisplay = _logic getVariable ["EnableBleedingDisplay", 1];

	_ramboFactor = _logic getVariable ["RamboFactor", "3"];
	_lifetimeFactor = _logic getVariable ["LifetimeFactor", "200"];
	_iconRange = _logic getVariable ["IconRange", "50"];
	_deleteTime = _logic getVariable ["DeleteTime", "300"];
	_firstaidDistance = _logic getVariable ["FirstaidDistance", "2"];
	_damageLimit = _logic getVariable ["DamageLimit", "0.9"];

	[["cws_ais_debugging", if(_enableDebugging == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_revive_guaranty", if(_enableReviveGuaranty == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_allow_self_revive", if(_enableMedicSelfRevive == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_show_injury_marker", if(_enableInjuryMarker == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_show_injury_message", if(_enableInjuryMessage == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_show_3d_icons", if(_enableInjury3DIcon == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_dead_dialog", if(_enableDeadDialog == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_bleeding_display", if(_enableBleedingDisplay == 1) then {true} else {false}], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;

	[["cws_ais_rambofactor", parseNumber _ramboFactor], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_random_lifetime_factor", parseNumber _lifetimeFactor], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_3d_icon_range", parseNumber _iconRange], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_delTime", parseNumber _deleteTime], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_firstaid_distance", parseNumber _firstaidDistance], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	[["cws_ais_damage_limit", parseNumber _damageLimit], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;

	["CWS Configured!", 2, ["CWS"]] call ccl_fnc_ShowMessage;
};