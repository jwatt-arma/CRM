// MFD Configs based on work by Kimi and used with permission
// https://steamcommunity.com/sharedfiles/filedetails/?id=312724602

class MFD_Pilot_10
{
    topLeft="MFD_10_TL";
    topRight="MFD_10_TR";
    bottomLeft="MFD_10_BL";
    borderLeft=0;
    borderRight=0;
    borderTop=0;
    borderBottom=0;
    color[]={1,1,1,1};
    helmetMountedDisplay=0;
    helmetPosition[]={-0.037500001,0.037500001,0.1};
    helmetRight[]={0.075000003,0,0};
    helmetDown[]={0,-0.075000003,0};
    font="LucidaConsoleB";
    turret[]={0};
    class Bones
    {
    };
    class Draw
    {
        alpha=1;
        color[]={0.25,1,0.25};
        condition="on";
        class ReticleGroup
        {
            color[]={1,1,1};
            class Reticle
            {
                type="line";
                width=4;
                points[]=
                {

                    {
                        {0.491429,0.452766},
                        1
                    },

                    {
                        {0.495,0.452766},
                        1
                    },

                    {
                        {0.495,0.457802},
                        1
                    },

                    {
                        {0.491429,0.457802},
                        1
                    },

                    {
                        {0.491429,0.452766},
                        1
                    },
                    {},

                    {
                        {0.499286,0.45578799},
                        1
                    },

                    {
                        {0.57714301,0.45578799},
                        1
                    },
                    {},

                    {
                        {0.49285701,0.46283901},
                        1
                    },

                    {
                        {0.49285701,0.55752701},
                        1
                    },
                    {},

                    {
                        {0.48857099,0.45578799},
                        1
                    },

                    {
                        {0.41,0.45578799},
                        1
                    },
                    {},

                    {
                        {0.49285701,0.35404801},
                        1
                    },

                    {
                        {0.49285701,0.446722},
                        1
                    },
                    {},

                    {
                        {0.61000001,0.29965201},
                        1
                    },

                    {
                        {0.64285702,0.29965201},
                        1
                    },

                    {
                        {0.64285702,0.342967},
                        1
                    },
                    {},

                    {
                        {0.64285702,0.57565898},
                        1
                    },

                    {
                        {0.64285702,0.619982},
                        1
                    },

                    {
                        {0.61071402,0.619982},
                        1
                    },
                    {},

                    {
                        {0.374286,0.619982},
                        1
                    },

                    {
                        {0.341429,0.619982},
                        1
                    },

                    {
                        {0.341429,0.57565898},
                        1
                    },
                    {},

                    {
                        {0.374286,0.29965201},
                        1
                    },

                    {
                        {0.341429,0.29965201},
                        1
                    },

                    {
                        {0.341429,0.342967},
                        1
                    }
                };
            };
            class ModeText
            {
                type="text";
                source="static";
                text="Mode: TI WHOT";
                scale=1;
                sourceScale=1;
                align="right";
                pos[]=
                {
                    {0.039999999,0.31999999},
                    1
                };
                right[]=
                {
                    {0.07,0.31999999},
                    1
                };
                down[]=
                {
                    {0.039999999,0.345},
                    1
                };
            };
            class RangeText
            {
                type="text";
                source="static";
                text="Range:";
                scale=1;
                sourceScale=1;
                align="right";
                pos[]=
                {
                    {0.36000001,0.81},
                    1
                };
                right[]=
                {
                    {0.40000001,0.81},
                    1
                };
                down[]=
                {
                    {0.36000001,0.84500003},
                    1
                };
            };
            class Fuel
            {
                type="text";
                source="impactDistance";
                sourceScale=1;
                sourceLength=4;
                align="right";
                scale=1;
                pos[]=
                {
                    {0.50999999,0.81},
                    1
                };
                right[]=
                {
                    {0.55000001,0.81},
                    1
                };
                down[]=
                {
                    {0.50999999,0.84500003},
                    1
                };
            };
        };
    };
};
