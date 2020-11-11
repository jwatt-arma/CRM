
class CfgVehicles {

	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F {
		class ACE_SelfActions;
	};
	class Heli_Transport_01_base_F : Helicopter_Base_H {
		class ACE_SelfActions;
	};
	class B_Heli_Transport_01_F : Heli_Transport_01_base_F {
		class ACE_SelfActions;
	};

	// RHS MELB
	class RHS_MELB_base : Helicopter_Base_H {
		#include "\CRM\crm_waypoints\config\ace_actions.hpp"
	};

	// RHS UH-60
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		#include "\CRM\crm_waypoints\config\ace_actions.hpp"
	};

	// RHS CH-47
	class Heli_Transport_02_base_F : Helicopter_Base_H {
		class ACE_SelfActions;
	}; 
	class RHS_CH_47F_base : Heli_Transport_02_base_F {
		#include "\CRM\crm_waypoints\config\ace_actions.hpp"
	};

};
