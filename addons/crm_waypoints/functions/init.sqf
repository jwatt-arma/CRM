if (hasInterface) then {
	// Create keybinds
	[
		"CRM Waypoints","crm_waypoints_key_add_wp",
		"Add Waypoint",
		{
			if (visibleMap) then {
				[group player] call crm_waypoints_fnc_addWaypointFromMap;
			} else {
				[group player] call crm_waypoints_fnc_addWaypointFromScreen;
			};
		},
		"",
		[27, [false, false, true]] // Alt + ]
	] call CBA_fnc_addKeybind;
	[
		"CRM Waypoints","crm_waypoints_key_clear_wp",
		"Clear Waypoint",
		{ [vehicle player] call crm_waypoints_fnc_clearWaypoints },
		"",
		[27, [true, false, false]] // Shift + ]
	] call CBA_fnc_addKeybind;
};