// Authored by chessmaster42

private["_unit"];
_unit = _this select 0;

//If the unit is invalid, exit
if(isNil "_unit") exitWith {false};
if(isNull _unit) exitWith {false};

//If the unit is not alive, exit
if(!alive _unit) exitWith {false};

//If the unit has a dragger or healer, exit
if(!isNull (_unit getVariable ["dragger", objNull])) exitWith {false};
if(!isNull (_unit getVariable ["healer", objNull])) exitWith {false};

true