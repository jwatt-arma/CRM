if (hasInterface) then {
	// Create keybind
	[
		"CRM Autpilot","crm_autopiliot_key_toggle_autopilot",
		"Turn Autopilot On/Off",
		{ [vehicle player] call crm_autopilot_fnc_enableAutopilot },
		"",
		[27, [false, false, true]] // Alt + X
	] call CBA_fnc_addKeybind;
};