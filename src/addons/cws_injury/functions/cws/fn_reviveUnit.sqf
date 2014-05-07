_unit = _this select 0;

if(!local _unit) exitWith {};

//Due to some weirdness when using this on AI we full heal them as well
if(!isPlayer _unit) then {
	_unit setVariable ["cws_ais_headhit", 0, true];
	_unit setVariable ["cws_ais_bodyhit", 0, true];
	_unit setVariable ["cws_ais_overall", 0, true];
	_unit setVariable ["cws_ais_legshit", 0, true];
	_unit setVariable ["cws_ais_handshit", 0, true];

	_unit setHit ["head", 0];
	_unit setHit ["body", 0];
	_unit setHit ["legs", 0];
	_unit setHit ["hands", 0];

	_unit setDamage 0;
};

_unit setVariable ["cws_ais_agony", false, true];