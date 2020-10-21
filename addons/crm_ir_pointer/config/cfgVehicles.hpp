class CfgVehicles {

 // Add IR pointer to MELB
 class Air;
  class Helicopter: Air {
	  class EventHandlers {
		class crm_ir_pointer {
			init = "_this call crm_ir_pointer_fnc_onVehicleInit";
		};
	  };
  };
};