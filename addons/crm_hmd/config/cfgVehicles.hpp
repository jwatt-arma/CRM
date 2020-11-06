
class CfgVehicles {
	class Helicopter_Base_F;
	class Helicopter_Base_H : Helicopter_Base_F {
		#include "\CRM\crm_hmd\config\inheritance.hpp"
	};
	class RHS_MELB_base : Helicopter_Base_H {
		#include "\CRM\crm_hmd\config\mfd_defaults.hpp"
		#include "\CRM\crm_hmd\config\pilot_hmd.hpp"
		#include "\CRM\crm_hmd\config\ace_actions.hpp"
	};
};
