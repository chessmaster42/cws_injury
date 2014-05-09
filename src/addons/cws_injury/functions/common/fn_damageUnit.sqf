_unit = _this select 0;

if(!local _unit) exitWith {};
/*
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
*/
//Workaround to artificially alter bleed time, part A
_oldLifetimeFactor = cws_ais_random_lifetime_factor;
cws_ais_random_lifetime_factor = 1800;

_unit setVariable ["cws_ais_agony", true, true];

//Workaround to artificially alter bleed time, part B
waitUntil {(_unit getVariable ["cws_ais_bleedout_time", 0]) > 0};
cws_ais_random_lifetime_factor = _oldLifetimeFactor;