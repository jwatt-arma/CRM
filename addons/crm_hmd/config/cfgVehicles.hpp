class UserActions;

class CfgVehicles {
  
	class Helicopter {
		class ACE_SelfActions;
    	class Turrets;
	};
	class Helicopter_Base_F: Helicopter {
		class Turrets: Turrets {
		class MainTurret;
		};
		class UserActions;
		class MFD;
		class ACE_SelfActions: ACE_SelfActions {

		};
  	};

	class Helicopter_Base_H: Helicopter_Base_F {
		#include "mfd_defaults.hpp"
		class Turrets: Turrets {
			class CopilotTurret: MainTurret {
				class MFD {
					#include "cpg_hmd.hpp"
				};
			};
		};
		class MFD: MFD {
			#include "pilot_hmd.hpp"
		};
		class UserActions: UserActions
		{
			#include "user_actions.hpp"
		};
		class ACE_SelfActions: ACE_SelfActions {
			class hmd_actions {
				displayName = "HMD";
				class HmdOnOff {
					displayName = "On/Off";
					class HmdOn {
						displayName = "On";
						statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdOn;";
					};
					class HmdOff {
						displayName = "Off";
						statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdOn;";
					};
				};
				class HmdUnits {
					displayName = "Units";
					class HmdOn {
						displayName = "Imperial";
						statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdUnitsImperial;";
					};
					class HmdOff {
						displayName = "Metric";
						statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdUnitsImperial;";
					};
				};
				class HmdMode {
					displayName = "Mode";
					class HmdOn {
						displayName = "Full";
						statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdFull;";
					};
					class HmdOff {
						displayName = "Declutter";
						statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdFull;";
					};
				};
			};
		};
  	};
};
