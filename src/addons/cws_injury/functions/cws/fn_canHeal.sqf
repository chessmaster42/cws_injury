// Authored by chessmaster42

private["_unit","_has_medikit","_has_firstaidkit","_isMedic"];
_unit = _this select 0;

//If the unit is invalid, exit immediately
if(isNil "_unit") exitWith {false};
if(isNull _unit) exitWith {false};

//If the unit is dead, exit immediately
if(!alive _unit) exitWith {false};

//If the unit is in agony, exit immediately
if(_unit getVariable ["cws_ais_agony", false]) exitWith {false};

//Check that the unit isn't already healing someone
if(_unit getVariable ["cws_injury_HealingInProgress", false]) exitWith {false};

//If the unit has no supplies, exit immediately
_has_medikit = ((items _unit) find "Medikit" > -1);
_has_firstaidkit = ((items _unit) find "FirstAidKit" >= 0);
_isMedic = [_unit] call cws_fnc_isMedic;
if(!(_has_medikit && _isMedic) && !_has_firstaidkit) exitWith {false};

//If nothing has failed then we return true
true