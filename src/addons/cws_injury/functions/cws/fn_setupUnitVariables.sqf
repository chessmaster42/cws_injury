// Authored by chessmaster42
// Based on 'A3 Wounding System' by Psychobastard

private["_unit"];
_unit = _this select 0;

//If the unit is invalid, exit immediately
if(isNil "_unit") exitWith {};
if(isNull _unit) exitWith {};

//If the unit is dead, exit immediately
if(!alive _unit) exitWith {};

if(local _unit) then {
	_unit setVariable ["cws_ais_side", side _unit, true];

	_unit setVariable ["cws_ais_itemStorage", [0,0], true];
	_unit setVariable ["cws_ais_unit_died", false, true];

	_unit setVariable ["cws_ais_bodyhit", _unit getVariable ["cws_ais_bodyhit", 0], true];
	_unit setVariable ["cws_ais_headhit", _unit getVariable ["cws_ais_headhit", 0], true];
	_unit setVariable ["cws_ais_overall", _unit getVariable ["cws_ais_overall", 0], true];
	_unit setVariable ["cws_ais_legshit", _unit getVariable ["cws_ais_legshit", 0], true];
	_unit setVariable ["cws_ais_handshit", _unit getVariable ["cws_ais_handshit", 0], true];

	_unit setVariable ["cws_ais_agony", _unit getVariable ["cws_ais_agony", false], true];
	_unit setVariable ["unit_is_unconscious", _unit getVariable ["unit_is_unconscious", false], true];
	_unit setVariable ["cws_ais_leader", _unit getVariable ["cws_ais_leader", false], true];

	_unit setVariable ["dragger", _unit getVariable ["dragger", ObjNull], true];
	_unit setVariable ["healer", _unit getVariable ["healer", ObjNull], true];

	_unit setVariable ["cws_ais_fall_in_agony_time_delay", _unit getVariable ["cws_ais_fall_in_agony_time_delay", 0], true];
} else {
	_unit setVariable ["cws_ais_side", side _unit];

	_unit setVariable ["cws_ais_itemStorage", [0,0]];
	_unit setVariable ["cws_ais_unit_died", false];
	
	_unit setVariable ["cws_ais_bodyhit", _unit getVariable ["cws_ais_bodyhit", 0]];
	_unit setVariable ["cws_ais_headhit", _unit getVariable ["cws_ais_headhit", 0]];
	_unit setVariable ["cws_ais_overall", _unit getVariable ["cws_ais_overall", 0]];
	_unit setVariable ["cws_ais_legshit", _unit getVariable ["cws_ais_legshit", 0]];
	_unit setVariable ["cws_ais_handshit", _unit getVariable ["cws_ais_handshit", 0]];

	_unit setVariable ["cws_ais_agony", _unit getVariable ["cws_ais_agony", false]];
	_unit setVariable ["unit_is_unconscious", _unit getVariable ["unit_is_unconscious", false]];
	_unit setVariable ["cws_ais_leader", _unit getVariable ["cws_ais_leader", false]];

	_unit setVariable ["dragger", _unit getVariable ["dragger", ObjNull]];
	_unit setVariable ["healer", _unit getVariable ["healer", ObjNull]];

	_unit setVariable ["cws_ais_fall_in_agony_time_delay", _unit getVariable ["cws_ais_fall_in_agony_time_delay", 0]];
};