_logic = _this select 0;
_units = _this select 1;
_activated = _this select 2;

if (_activated) then {
	{
		[[_x], "cws_fnc_LoadCWS"] spawn ccl_fnc_GlobalExec;
	} forEach _units;
	
	["CWS is now loading on some units ...", 3, ["CWS"]] call ccl_fnc_ShowMessage;
};