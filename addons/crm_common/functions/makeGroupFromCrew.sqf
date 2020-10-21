params ['_unit', '_all'];
private ['_group', '_pilot', '_copilot', '_vehicle', '_crew'];

// Create a group
_group = createGroup [side _unit, true];

// Figure out who pilot & copilot are
_vehicle = vehicle _unit;
_pilot = driver _vehicle;
_copilot = [_vehicle] call crm_common_fnc_getCopilot;
_crew = [_pilot, _copilot];
if (_all) then {
	_crew = _crew + ([_vehicle] call crm_common_fnc_getCrewTurretUnits);
};

// Have crew join the group
_crew join _group;

// Set PIC as leader of group
_group selectLeader _pilot;