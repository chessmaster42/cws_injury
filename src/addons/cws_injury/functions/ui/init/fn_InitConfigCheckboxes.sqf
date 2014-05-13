#include "\A3\ui_f_curator\ui\defineResinclDesign.inc"

_control = _this select 0;

_control ctrlRemoveAllEventHandlers "setFocus";

//Get the display for the dialog
_display = ctrlParent _control;

//Set the initial state of the checkboxes based on the current config
_ctrl = _display displayCtrl 43032;
_ctrl cbSetChecked cws_ais_revive_guaranty;
_ctrl = _display displayCtrl 43034;
_ctrl cbSetChecked cws_ais_allow_self_revive;
_ctrl = _display displayCtrl 43036;
_ctrl cbSetChecked cws_ais_show_injury_marker;
_ctrl = _display displayCtrl 43038;
_ctrl cbSetChecked cws_ais_show_injury_message;
_ctrl = _display displayCtrl 43040;
_ctrl cbSetChecked cws_ais_show_3d_icons;
_ctrl = _display displayCtrl 43042;
_ctrl cbSetChecked cws_ais_dead_dialog;
_ctrl = _display displayCtrl 43044;
_ctrl cbSetChecked cws_ais_bleeding_display;

//Setup handler when OK is clicked
_ctrlButtonOK = _display displayCtrl IDC_OK;
_ctrlButtonOK ctrlAddEventHandler ["buttonclick", {
	_display = ctrlParent (_this select 0);

	//Update the config with the new values
	_ctrl = _display displayCtrl 43032;
	[["cws_ais_revive_guaranty", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	_ctrl = _display displayCtrl 43034;
	[["cws_ais_allow_self_revive", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	_ctrl = _display displayCtrl 43036;
	[["cws_ais_show_injury_marker", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	_ctrl = _display displayCtrl 43038;
	[["cws_ais_show_injury_message", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	_ctrl = _display displayCtrl 43040;
	[["cws_ais_show_3d_icons", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	_ctrl = _display displayCtrl 43042;
	[["cws_ais_dead_dialog", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
	_ctrl = _display displayCtrl 43044;
	[["cws_ais_bleeding_display", (cbChecked _ctrl)], "cws_fnc_LoadConfigSetting"] spawn ccl_fnc_GlobalExec;
}];