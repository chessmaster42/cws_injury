//Backup the CWS debugging state and temporarily turn it off
_cwsDebugging = cws_ais_debugging;
cws_ais_debugging = false;

//Iterate through all units in groups
{
	{
		if(isNil "_x") then {
			//Do nothing
		} else {
			if(isNull _x) then {
				//Do nothing
			} else {
				//If the unit has CWS loaded and is alive
				if ((_x getVariable ["cws_ais_aisInit", false]) && (alive _x)) then {
					//Build the config for the icon
					_unitDamage = [_x] call cws_fnc_GetUnitDamage;
					_iconColor = [1, 1 - _unitDamage, 1 - _unitDamage, 0.5 + _unitDamage * 0.5];
					_pos = visiblePosition _x;
					_pos set [2, (_pos select 2) + 4];
					_icon_size = 0.5;
					_angle = 0;
					_message = "CWS";
					_text_size = 0.025;
				
					//Add bleedout time if the unit is in agony
					if(_x getVariable "cws_ais_agony") then {
						_life_remaining = _x getVariable ["cws_ais_bleedout_time", 0];
						_message = _message + format[" (%1%2)", ceil (_life_remaining * 100), "%"];
				
						//Add healing percentage if the unit is being healed
						_healingProgress = _x getVariable ["cws_ais_healing_progress", 0];
						if(_healingProgress > 0) then {
							_message = _message + format[" (%1%2)", ceil (_healingProgress * 100), "%"];
							_iconColor = [0, 1, 0, 1];
						};
					};
				
					//Draw the icon in 3D space
					drawIcon3D["a3\ui_f\data\map\MapControl\hospital_ca.paa", _iconColor, _pos, _icon_size, _icon_size, _angle, _message, 0, _text_size];
				};
			};
		};
	} forEach units _x;
} forEach allGroups;

//Restore the CWS debugging state
cws_ais_debugging = _cwsDebugging;