// MFD Configs based on work by Kimi and used with permission
// https://steamcommunity.com/sharedfiles/filedetails/?id=312724602

#include "\CRM\crm_hmd\functions\defines.hpp"
class Kimi_HMD_HAD_Pilot_Lynx_2
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
        class Laser_Toggle_On
        {
            type="group";
            condition="laseron";
            class Laser_On
            {
                type="text";
                text="LRFD ON";
                source="static";
                align="right";
                scale=1;
                pos[]=
                {
                    {0.61000001,0.82999998},
                    1
                };
                right[]=
                {
                    {0.64999998,0.82999998},
                    1
                };
                down[]=
                {
                    {0.61000001,0.87},
                    1
                };
            };
        };
    };
};
