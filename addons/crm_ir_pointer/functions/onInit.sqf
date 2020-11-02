if (hasInterface) then {
	// Create keybind
	[
		"CRM IR Pointer","key_toggle_crm_ir_pointer",
		"Toggle IR Laser Pointer",
		{ [vehicle player] call crm_ir_pointer_fnc_toggleIrPointer; },
		"",
		[38, [false, false, true]] // Alt + L
	] call CBA_fnc_addKeybind;
};