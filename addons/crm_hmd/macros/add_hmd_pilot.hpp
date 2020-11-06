#define ADD_HMD_PILOT(child, parent, grandparent) \
class grandparent; \
class parent: grandparent { \
    class ACE_SelfActions; \
}; \
class child : parent { \
    ##include "CRM\crm_hmd\config\pilot_hmd.hpp" \
    class ACE_SelfActions: ACE_SelfActions { \
        class hmd_actions { \
            displayName = "HMD"; \
            class HmdOnOff { \
                displayName = "On/Off"; \
                class HmdOn { \
                    displayName = "On"; \
                    statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdOn;"; \
                }; \
                class HmdOff { \
                    displayName = "Off"; \
                    statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdOn;"; \
                }; \
            }; \
            class HmdUnits { \
                displayName = "Units"; \
                class HmdOn { \
                    displayName = "Imperial"; \
                    statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdUnitsImperial;"; \
                }; \
                class HmdOff { \
                    displayName = "Metric"; \
                    statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdUnitsImperial;"; \
                }; \
            }; \
            class HmdMode { \
                displayName = "Mode"; \
                class HmdOn { \
                    displayName = "Full"; \
                    statement = "[vehicle player, 0] call crm_hmd_fnc_setHmdFull;"; \
                }; \
                class HmdOff { \
                    displayName = "Declutter"; \
                    statement = "[vehicle player, 1] call crm_hmd_fnc_setHmdFull;"; \
                }; \
            }; \
        }; \
    }; \
};
