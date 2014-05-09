// Authored by chessmaster42
// Based on 'A3 Wounding System' by Psychobastard

private ["_unit","_canHeal","_need_help","_help_him"];
_unit = _this select 0;

//Bail out if the unit isn't valid
if(isNil "_unit") exitWith {};
if(isNull _unit) exitWith {};

//Bail out if the unit isn't local
if(!local _unit) exitWith {};

//Bail out if the unit is no longer alive
if(!alive _unit) exitWith {};

//Bail out if the unit can't heal anyone
if(!([_unit] call cws_fnc_canHeal)) exitWith {};

//Bail out if the unit is already looking for wounded mates
if(_unit getVariable ["cws_injury_LookingForWoundedMates", false]) exitWith {};

//Set a flag to indicate the start of the search
_unit setVariable ["cws_injury_LookingForWoundedMates", true, true];

_help_him = objNull;

//Check for group members that might need help
{
	_isHealable = [_x] call cws_fnc_IsHealable;
	_inAgony = _x getVariable ["cws_ais_agony", false];
	if (_isHealable && _inAgony) exitWith {_help_him = _x};
} forEach (units group _unit - [_unit]);

//If noone in the group needs help see if anyone else nearby does
if(isNull _help_him) then {
	_min_distance = 100;
	_unitFaction = side (group _unit);
	{
		//Ensure that the group we're checking is on the same side as the unit
		if((side _x) == _unitFaction) then {
			{
				_distance = _unit distance _x;
				_isHealable = [_x] call cws_fnc_IsHealable;
				_inAgony = _x getVariable ["cws_ais_agony", false];

				//Update the selection if closer, in agony, are healable, and our not ourselves
				if ((_distance < _min_distance) && _isHealable && _inAgony && (_x != _unit)) then {
					_min_distance = _distance;
					_help_him = _x;
				};
			} foreach units _x;
		};
	} forEach allGroups;
};

//Check if we found someone to help
if(isNull _help_him) then {
	//Unset the looking flag
	_unit setVariable ["cws_injury_LookingForWoundedMates", false, true];

	if(cws_ais_debugging) then {
		[format ["%1 found nobody to help", _unit], 2] call ccl_fnc_ShowMessage;
	};
} else {
	//Unset the looking flag
	_unit setVariable ["cws_injury_LookingForWoundedMates", false, true];

	if(cws_ais_debugging) then {
		[format ["%1 is going to help %2", _unit, _help_him], 2] call ccl_fnc_ShowMessage;
	};

	//Go help them!
	[_help_him, _unit] spawn cws_fnc_FirstAid;
};