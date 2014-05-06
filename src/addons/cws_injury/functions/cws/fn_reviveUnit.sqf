_unit = _this select 0;

if(!local _unit) exitWith {};

if(!isPlayer _unit) then {
	_unit setVariable ["cws_ais_headhit", 0, true];
	_unit setVariable ["cws_ais_bodyhit", 0, true];
	_unit setVariable ["cws_ais_overall", 0, true];
	_unit setVariable ["cws_ais_legshit", 0, true];
	_unit setVariable ["cws_ais_handshit", 0, true];

	[_unit] call cws_fnc_setUnitDamage;
};

_unit setVariable ["cws_ais_agony", false, true];