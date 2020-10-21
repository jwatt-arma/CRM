class CfgFunctions {
  class crm_take_control {
    class functions {
      class canTakeControls {
        file = "take_control\scripts\canTakeControls.sqf";
      };
      class takeControls {
        file = "take_control\scripts\takeControls.sqf";
      };
      class postInit {
        file = "take_control\scripts\init.sqf";
        postInit = 1;
      };
    };
  };
};
