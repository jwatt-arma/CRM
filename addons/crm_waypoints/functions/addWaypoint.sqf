params ['_group', '_pos'];
private ['_wp'];
[_group] call crm_waypoints_fnc_clearWaypoints;
_wp = _group addWaypoint [_pos, 1];
_wp setWaypointDescription "WP";
_wp setWaypointStatements ["false", ""];

