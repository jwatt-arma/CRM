class cfgVehicles {
	//class AllVehicles;
	class Air;
	class Helicopter : Air {
		class ACE_SelfActions;
	};
	class Helicopter_Base_F : Helicopter {	
		foo = 1;
        class ACE_SelfActions: ACE_SelfActions {
			class waypoints {
				displayName = "Waypoints";
				exceptions[] = {"notOnMap"};
				class addWaypointFromMap {
					displayName = "Add Waypoint";
					statement = "[group player] call crm_waypoints_fnc_addWaypointFromMap;";
					condition = "visibleMap";
					exceptions[] = {"notOnMap"};
				};
				class addWaypointFromScreen {
					displayName = "Add Waypoint";
					statement = "[group player] call crm_waypoints_fnc_addWaypointFromScreen;";
				};
				class clearWaypoints {
					displayName = "Clear Waypoint";
					statement = "[group player] call crm_waypoints_fnc_clearWaypoints;";
					exceptions[] = {"notOnMap"};
				};
			};
		};
	};
};
