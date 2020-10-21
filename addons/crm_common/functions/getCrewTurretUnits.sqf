params ['_vehicle'];
private ['_turrets', '_return'];

// Get all non-FFV turrets in vehicle
_turrets = allTurrets [_vehicle, false];

// Get units for each turret
_return = [];
{
	_return pushBack _x;
} forEach _turrets;

_return