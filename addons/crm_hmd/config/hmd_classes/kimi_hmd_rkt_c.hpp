// MFD Configs based on work by Kimi and used with permission
// https://steamcommunity.com/sharedfiles/filedetails/?id=312724602

#include "\CRM\crm_hmd\functions\defines.hpp"
class Kimi_HMD_RKT_C
{
    topLeft="HUD_top_left";
    topRight="HUD_top_right";
    bottomLeft="HUD_bottom_left";
    borderLeft=0;
    borderRight=0;
    borderTop=0;
    borderBottom=0;
    color[]={0.212,0.76899999,0.204,0.2};
    enableParallax=0;
    helmetMountedDisplay=1;
    helmetPosition[]={-0.039999999,0.039999999,0.1};
    helmetRight[]={0.079999998,0,0};
    helmetDown[]={0,-0.079999998,0};
    class Bones
    {
        class PlaneOrientation
        {
            type="fixed";
            pos[]={0.5,0.5};
        };
        class Limit0109
        {
            type="limit";
            limits[]={0.1,0.1,0.89999998,0.89999998};
        };
        class ForwardVec
        {
            type="vector";
            source="forward";
            pos0[]={0,0};
            pos10[]={0.21600001,0.21600001};
        };
        class ForwardVec_Center
        {
            type="vector";
            source="forward";
            pos0[]={0.5,0.5};
            pos10[]=
            {
                "0.500 + 0.2165",
                "0.500 + 0.2165"
            };
        };
        class ForwardVecPNVS
        {
            type="vector";
            source="forward";
            pos0[]={0,0};
            pos10[]={-0.055,-0.055};
        };
        class VspeedBone
        {
            type="linear";
            source="vspeed";
            sourceScale=1.9685;
            min=-20;
            max=20;
            minPos[]={0.93000001,0.2};
            maxPos[]={0.93000001,0.80000001};
        };
        class RadarAltitudeBone
        {
            type="linear";
            source="altitudeAGL";
            sourceOffset=-6;
            sourceScale=3.2808399;
            min=0;
            max=200;
            minPos[]={0.96499997,0.2};
            maxPos[]={0.96499997,0.80000001};
        };
        class WYPT_Tape_Bone
        {
            type="vector";
            source="wppoint";
            pos0[]={0.5,0.12800001};
            pos10[]=
            {
                "0.500 + 0.037",
                0.12800001
            };
        };
        class Tape_Limit
        {
            type="limit";
            limits[]={0.2,0,0.80000001,1};
        };
        class Turret_Tape_Bone
        {
            type="vector";
            source="Turret";
            pos0[]={0.5,0.12800001};
            pos10[]=
            {
                "0.500 + 0.037",
                0.12800001
            };
            projection=1;
        };
        class GunnerAim
        {
            type="vector";
            source="turret";
            pos0[]={0,-2};
            pos10[]={0.0071700001,-0.0099999998};
            projection=0;
        };
        class Gunner_HAD_Limit
        {
            type="limit";
            limits[]={0.40000001,0.86000001,0.60000002,0.94};
        };
        class Slip_Ball_X
        {
            type="vector";
            source="velocity";
            pos0[]={0.5,0.84299999};
            pos10[]={0.51499999,0.84299999};
        };
        class GforceX_Slip
        {
            type="linear";
            source="gmeterX";
            sourceScale=1;
            max=0.15000001;
            min=-0.15000001;
            minPos[]=
            {
                "0.5+0.1",
                "0.9-0.04-0.02"
            };
            maxPos[]=
            {
                "0.5-0.1",
                "0.9-0.04-0.02"
            };
        };
        class WeaponAim: ForwardVec_Center
        {
            source="weapon";
        };
        class TurretAimToView
        {
            type="vector";
            source="weapontoview";
            pos0[]={0.5,0.5};
            pos10[]=
            {
                "0.500 + 0.2165",
                "0.500 + 0.2165"
            };
        };
        class CCIP: ForwardVec_Center
        {
            source="impactpoint";
        };
        class CCIP_2_VIEW: CCIP
        {
            source="impactpointtoview";
        };
        class RocketAim: ForwardVec_Center
        {
            source="weapon";
        };
        class Target: ForwardVec_Center
        {
            source="target";
        };
        class Target2View: Target
        {
            source="targetToView";
        };
        class WYPT_2_VIEW: ForwardVec_Center
        {
            source="wppointtoview";
        };
        class Velocity: ForwardVec_Center
        {
            source="velocityToView";
        };
        class HorizonBankRot
        {
            type="rotational";
            source="horizonBank";
            center[]={0.5,0.5};
            min=-3.1415999;
            max=3.1415999;
            minAngle=-180;
            maxAngle=180;
            aspectRatio=1;
        };
        class Speed_X_Hover_P
        {
            type="vector";
            source="velocity";
            pos0[]={0,0};
            pos10[]={0.02,0};
        };
        class Speed_X_Hover_N
        {
            type="vector";
            source="velocityToView";
            sourcescale="1";
            pos0[]={0,0};
            pos10[]={0.02,0.02};
        };
        class Speed_Z_Hover
        {
            type="linear";
            source="speed";
            sourcescale="1.94384";
            max=20;
            min=-20;
            minPos[]={0.5,0.25};
            maxPos[]={0.5,0.75};
        };
        class Speed_X_Transition
        {
            type="vector";
            source="velocity";
            pos0[]={0,0};
            pos10[]={0.02,0};
        };
        class Speed_Z_Transition
        {
            type="linear";
            source="speed";
            sourcescale="1.94384";
            max=60;
            min=-60;
            minPos[]={0.5,0.25};
            maxPos[]={0.5,0.75};
        };
        class GforceX_Hover
        {
            type="linear";
            source="gmeterX";
            Sourcescale=1;
            max=7;
            min=-7;
            minPos[]={0.25,0};
            maxPos[]={-0.25,0};
        };
        class GforceZ_Hover
        {
            type="linear";
            source="gmeterZ";
            Sourcescale=1;
            max=7;
            min=-7;
            minPos[]={0,-0.25};
            maxPos[]={0,0.25};
        };
        class GforceX_Transition
        {
            type="linear";
            source="gmeterX";
            Sourcescale=1;
            max=7;
            min=-7;
            minPos[]={0.1,0};
            maxPos[]={-0.1,0};
        };
        class GforceZ_Transition
        {
            type="linear";
            source="gmeterZ";
            Sourcescale=1;
            max=7;
            min=-7;
            minPos[]={0,-0.1};
            maxPos[]={0,0.1};
        };
        class Level0_Transition
        {
            type="horizon";
            pos0[]={0.5,0.5};
            pos10[]={0.64999998,0.64999998};
            angle=0;
        };
        class Level0
        {
            type="horizon";
            pos0[]={0.5,0.5};
            pos10[]={0.77999997,0.77999997};
            angle=0;
        };
        class LevelP5: Level0
        {
            angle=5;
        };
        class LevelM5: Level0
        {
            angle=-5;
        };
        class LevelP10: Level0
        {
            angle=10;
        };
        class LevelM10: Level0
        {
            angle=-10;
        };
        class LevelP15: Level0
        {
            angle=15;
        };
        class LevelM15: Level0
        {
            angle=-15;
        };
        class LevelP20: Level0
        {
            angle=20;
        };
        class LevelM20: Level0
        {
            angle=-20;
        };
        class LevelP25: Level0
        {
            angle=25;
        };
        class LevelM25: Level0
        {
            angle=-25;
        };
        class LevelP30: Level0
        {
            angle=30;
        };
        class LevelM30: Level0
        {
            angle=-30;
        };
        class LevelP35: Level0
        {
            angle=35;
        };
        class LevelM35: Level0
        {
            angle=-35;
        };
        class LevelP40: Level0
        {
            angle=40;
        };
        class LevelM40: Level0
        {
            angle=-40;
        };
        class LevelP45: Level0
        {
            angle=45;
        };
        class LevelM45: Level0
        {
            angle=-45;
        };
        class LevelP50: Level0
        {
            angle=50;
        };
        class LevelM50: Level0
        {
            angle=-50;
        };
    };
    turret[]={0};
    class Draw
    {
        color[]=
        {
            QUOTE(MFD_USER_VAR(MFD_USER_YELLOW)),
            "1",
            "0"
        };
        alpha=QUOTE(MFD_USER_VAR(MFD_USER_ALPHA));
        condition=QUOTE(on*MFD_USER_VAR(MFD_USER_ON));
        class Rocket_I_LLW
        {
            condition="rocket";
            type="group";
            class RocketSight
            {
                type="line";
                width=5.5;
                points[]=
                {
                    
                    {
                        "CCIP_2_VIEW",
                        1,
                        {0.022,-0.029999999},
                        1
                    },
                    
                    {
                        "CCIP_2_VIEW",
                        1,
                        {-0.022,-0.029999999},
                        1
                    },
                    {},
                    
                    {
                        "CCIP_2_VIEW",
                        1,
                        {0,-0.029999999},
                        1
                    },
                    
                    {
                        "CCIP_2_VIEW",
                        1,
                        {0,0.029999999},
                        1
                    },
                    {},
                    
                    {
                        "CCIP_2_VIEW",
                        1,
                        {0.022,0.029999999},
                        1
                    },
                    
                    {
                        "CCIP_2_VIEW",
                        1,
                        {-0.022,0.029999999},
                        1
                    }
                };
            };
        };
    };
};
