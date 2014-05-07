_unit = _this select 0;

if(!local _unit) exitWith {};

_unit setVariable ["cws_ais_headhit", cws_ais_damage_limit, true];
_unit setVariable ["cws_ais_bodyhit", cws_ais_damage_limit, true];
_unit setVariable ["cws_ais_overall", cws_ais_damage_limit, true];
_unit setVariable ["cws_ais_legshit", cws_ais_damage_limit, true];
_unit setVariable ["cws_ais_handshit", cws_ais_damage_limit, true];

_unit setHit ["head", cws_ais_damage_limit];
_unit setHit ["body", cws_ais_damage_limit];
_unit setHit ["legs", cws_ais_damage_limit];
_unit setHit ["hands", cws_ais_damage_limit];

_unit setDamage cws_ais_damage_limit;

//Workaround to permanently pause bleeding, part A
_unit setVariable ["healer", _unit, true];

_unit setVariable ["cws_ais_agony", true, true];

//Workaround to permanently pause bleeding, part B
waitUntil {isNull (_unit getVariable ["healer", objnull])};
_unit setVariable ["healer", _unit, true];