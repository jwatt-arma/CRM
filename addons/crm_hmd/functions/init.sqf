if (hasInterface) then {
	// Create keybinds
	[
		"CRM HMD","key_hmd_toggle",
		"Toggle HMD On/Off",
		{ [vehicle player] call crm_hmd_toggleHmdOn; },
		"",
		[53, [false, false, false]] // "/"
	] call CBA_fnc_addKeybind;

	[
		"CRM HMD","key_hmd_units",
		"Toggle HMD Units",
		{ [vehicle player] call crm_hmd_toggleHmdImperial; },
		"",
		[53, [false, true, false]] // "Ctrl + /"
	] call CBA_fnc_addKeybind;
	
	[
		"CRM HMD","key_hmd_mode",
		"Toggle HMD Mode",
		{ [vehicle player] call crm_hmd_toggleHmdFull; },
		"",
		[53, [true, false, false]] // "Shift + /"
	] call CBA_fnc_addKeybind;
};