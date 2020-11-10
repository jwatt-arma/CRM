
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
        statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdImperial;";
      };
      class HmdOff {
        displayName = "Metric";
        statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdImperial;";
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
    class HmdColor {
      displayName = "Color";
      class HmdGreen {
        displayName = "Green";
        statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdYellow;";
      };
      class HmdYellow {
        displayName = "Yellow";
        statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdYellow;";
      };
    };
    class HmdBrightness {
      displayName = "Brightness";
      class HmdBrighter {
        displayName = "Up";
        statement = "[vehicle player] call crm_hmd_fnc_increaseHmdBright;";
      };
      class HmdDimmer {
        displayName = "Down";
        statement = "[vehicle player] call crm_hmd_fnc_decreaseHmdBright;";
      };
    };
  };
};