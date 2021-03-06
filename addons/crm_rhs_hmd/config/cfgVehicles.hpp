
class CfgVehicles {

	// CH-47I
	class Helicopter;
	class Helicopter_Base_F: Helicopter {
		class Turrets;
	};
	class Helicopter_Base_H : Helicopter_Base_F {
		class Turrets: Turrets {
			class MainTurret;
			class CopilotTurret: MainTurret {

			};
		};
		class MFD;
		class ACE_SelfActions;
	};
	class Heli_Transport_01_base_F : Helicopter_Base_H {
		#include "\CRM\crm_hmd\config\parent.hpp"
	};
	class B_Heli_Transport_01_F : Heli_Transport_01_base_F {
		#include "\CRM\crm_hmd\config\parent.hpp"
	};

	// RHS MELB
	class RHS_MELB_base : Helicopter_Base_H {
		#include "\CRM\crm_hmd\config\hmd.hpp"
	};

	// RHS UH-60
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		#include "\CRM\crm_hmd\config\hmd.hpp"
	};

	// RHS CH-47
	class Heli_Transport_02_base_F : Helicopter_Base_H {
		#include "\CRM\crm_hmd\config\parent.hpp"
	}; 
	class RHS_CH_47F_base : Heli_Transport_02_base_F {
		#include "\CRM\crm_hmd\config\hmd.hpp"
	};

	class vtx_H60_base: Heli_Transport_01_base_F {
		#include "\CRM\crm_hmd\config\hmd.hpp"
	};

};
