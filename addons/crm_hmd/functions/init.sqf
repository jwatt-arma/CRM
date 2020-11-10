if (hasInterface) then {
	// Create keybinds
	[
		"CRM HMD","key_hmd_toggle",
		"Toggle HMD On/Off",
		{ [vehicle player] call crm_hmd_fnc_toggleHmdOn; },
		"",
		[53, [false, false, false]] // "/"
	] call CBA_fnc_addKeybind;

	[
		"CRM HMD","key_hmd_units",
		"Toggle HMD Units",
		{ [vehicle player] call crm_hmd_fnc_toggleHmdImperial; },
		"",
		[53, [false, true, false]] // "Ctrl + /"
	] call CBA_fnc_addKeybind;
	
	[
		"CRM HMD","key_hmd_mode",
		"Toggle HMD Mode",
		{ [vehicle player] call crm_hmd_fnc_toggleHmdFull; },
		"",
		[53, [true, false, false]] // "Shift + /"
	] call CBA_fnc_addKeybind;
	
	[
		"CRM HMD","key_hmd_color",
		"Toggle HMD Color",
		{ [vehicle player] call crm_hmd_fnc_toggleHmdYellow; },
		"",
		[53, [false, false, true]] // "Alt + /"
	] call CBA_fnc_addKeybind;
	
	[
		"CRM HMD","key_hmd_bright_up",
		"Increase HMD Brightness",
		{ [vehicle player] call crm_hmd_fnc_increaseHmdBright; },
		"",
		[78	, [false, false, true]] // "Alt + /"
	] call CBA_fnc_addKeybind;
	
	[
		"CRM HMD","key_hmd_bright_down",
		"Decrease HMD Brightness",
		{ [vehicle player] call crm_hmd_fnc_decreaseHmdBright; },
		"",
		[74	, [false, false, true]] // "Alt + /"
	] call CBA_fnc_addKeybind;
};