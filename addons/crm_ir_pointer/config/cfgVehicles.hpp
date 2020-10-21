class CfgVehicles {

  // Classes to inherit from
  class Helicopter;
  class Helicopter_Base_H {
  };
  class Heli_Transport_01_base_F: Helicopter_Base_H {
  };

 // Add IR pointer to MELB
  class RHS_MELB_base: Helicopter_Base_H {
	  crm_ir_pointer_turret_index = 0;
    crm_ir_pointer_source = "laserstart";
    crm_ir_pointer_weapon = "rhs_weap_laserDesignator_AI";
    crm_ir_pointer_x_offset = 0;
    crm_ir_pointer_y_offset = 0;
    crm_ir_pointer_z_offset = 0;
    //crm_ir_pointer_angle_offset = -10;
	  class EventHandlers {
		class crm_ir_pointer
      {
        init = "_this call crm_ir_pointer_fnc_onVehicleInit";
      };
	  };
  };
};
