if (hasInterface) then {
	// Create keybinds
	[
		"CRM Autohover","crm_autohover_key_toggle_autohover",
		"Autohover On/Off",
		{ [vehicle player] call crm_autohover_fnc_toggleAutohover },
		"",
		[45, [false, false, true]] // Alt + X
	] call CBA_fnc_addKeybind;
	[
		"CRM Autohover","crm_autohover_key_toggle_althold",
		"Altitude Hold On/Off",
		{ [vehicle player] call crm_autohover_fnc_toggleAltHold },
		"",
		[45, [true, false, false]] // Shift + X
	] call CBA_fnc_addKeybind;
};