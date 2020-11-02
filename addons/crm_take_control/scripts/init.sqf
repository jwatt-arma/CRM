if (hasInterface) then {
	// Create keybind
	[
		"CRM Take Control","key_takeControls",
		"Take Control of Aircraft",
		{ [] call crm_take_control_fnc_takeControls },
		"",
		[46, [false, true, false]] // CTRL + C
	] call CBA_fnc_addKeybind;
};