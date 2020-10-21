params ['_group'];
// Remove map click event handler if closing map

_handlers = [];
_id = addMissionEventHandler ["Map", { 
	["mapClickHandler", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
	{ removeMissionEventHandler ["Map", _x]; } forEach _handlers;
}];

_handlers pushBack _id;

// Add waypoint on click
["mapClickHandler", "onMapSingleClick", {
	[_this select 4, _this select 1] call crm_waypoints_fnc_addWaypoint;
	["mapClickHandler", "onMapSingleClick"] call BIS_fnc_removeStackedEventHandler;
	{ removeMissionEventHandler ["Map", _x]; } forEach (_this select 5);
}, [_group, _handlers]] call BIS_fnc_addStackedEventHandler;
