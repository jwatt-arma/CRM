if (hasInterface) then {
	// Create keybind
	[
		"CRM Autohover","crm_autohover_key_toggle_autohover",
		"Turn Autohover On/Off",
		{ [vehicle player] call crm_autohover_fnc_toggleAutohover },
		"",
		[45, [false, false, true]] // Alt + X
	] call CBA_fnc_addKeybind;
};