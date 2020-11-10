
#include "\CRM\crm_hmd\config\mfd_defaults.hpp"
#include "\CRM\crm_hmd\config\pilot_hmd.hpp"
#include "\CRM\crm_hmd\config\ace_actions.hpp"

class Turrets: Turrets {
    class CopilotTurret: CopilotTurret {
        #include "\CRM\crm_hmd\config\cpg_hmd.hpp"
    };
};