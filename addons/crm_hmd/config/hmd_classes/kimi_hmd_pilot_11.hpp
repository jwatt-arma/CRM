// MFD Configs based on work by Kimi and used with permission
// https://steamcommunity.com/sharedfiles/filedetails/?id=312724602

class MFD_Pilot_11: MFD_Pilot_10
{
    topLeft="MFD_11_TL";
    topRight="MFD_11_TR";
    bottomLeft="MFD_11_BL";
    turret[]={0};
    class Draw
    {
        color[]={0,0.12,0};
        condition="on";
        class BlackBackgroundGroup
        {
            color[]={0,0,0};
            class BlackBackground
            {
                type="polygon";
                points[]=
                {

                    {

                        {
                            {0,0.1},
                            1
                        },

                        {
                            {1,0.1},
                            1
                        },

                        {
                            {1,1},
                            1
                        },

                        {
                            {0,1},
                            1
                        }
                    }
                };
            };
        };
        class ReticleGroup
        {
            color[]={0,0.12,0};
            class Reticle
            {
                type="line";
                width=4;
                points[]=
                {

                    {
                        {0.43000001,0.49059799},
                        1
                    },

                    {
                        {0.164,0.49059799},
                        1
                    },

                    {
                        {0.164,0.49059799},
                        1
                    },

                    {
                        {0.164,0.630171},
                        1
                    },

                    {
                        {0.164,0.630171},
                        1
                    },

                    {
                        {0.43799999,0.630171},
                        1
                    },

                    {
                        {0.43799999,0.630171},
                        1
                    },

                    {
                        {0.43799999,0.73239303},
                        1
                    },

                    {
                        {0.62199998,0.73239303},
                        1
                    },

                    {
                        {0.62199998,0.630171},
                        1
                    },

                    {
                        {0.62199998,0.630171},
                        1
                    },

                    {
                        {0.898,0.630171},
                        1
                    },

                    {
                        {0.898,0.630171},
                        1
                    },

                    {
                        {0.898,0.49059799},
                        1
                    },

                    {
                        {0.63,0.49059799},
                        1
                    },

                    {
                        {0.63,0.49059799},
                        1
                    },

                    {
                        {0.616,0.48273501},
                        1
                    },

                    {
                        {0.616,0.29794899},
                        1
                    },

                    {
                        {0.59200001,0.29794899},
                        1
                    },

                    {
                        {0.55800003,0.286154},
                        1
                    },

                    {
                        {0.55800003,0.27239299},
                        1
                    },

                    {
                        {0.5,0.27239299},
                        1
                    },

                    {
                        {0.5,0.286154},
                        1
                    },

                    {
                        {0.46799999,0.29794899},
                        1
                    },

                    {
                        {0.44600001,0.29794899},
                        1
                    },

                    {
                        {0.44600001,0.48273501},
                        1
                    },

                    {
                        {0.43000001,0.49059799},
                        1
                    },
                    {},

                    {
                        {0.46000001,0.60000002},
                        1
                    },

                    {
                        {0.60000002,0.60000002},
                        1
                    },

                    {
                        {0.60000002,0.72000003},
                        1
                    },

                    {
                        {0.46000001,0.72000003},
                        1
                    },

                    {
                        {0.46000001,0.60000002},
                        1
                    },
                    {},

                    {
                        {0.039999999,0.80000001},
                        1
                    },

                    {
                        {0.23999999,0.80000001},
                        1
                    },

                    {
                        {0.23999999,0.86000001},
                        1
                    },

                    {
                        {0.039999999,0.86000001},
                        1
                    },

                    {
                        {0.039999999,0.80000001},
                        1
                    },
                    {},

                    {
                        {-0.059999999,0.82999998},
                        1
                    },

                    {
                        {0.039999999,0.82999998},
                        1
                    },
                    {},

                    {
                        {0.039999999,0.93000001},
                        1
                    },

                    {
                        {0.23999999,0.93000001},
                        1
                    },

                    {
                        {0.23999999,0.99000001},
                        1
                    },

                    {
                        {0.039999999,0.99000001},
                        1
                    },

                    {
                        {0.039999999,0.93000001},
                        1
                    },
                    {},

                    {
                        {-0.059999999,0.95999998},
                        1
                    },

                    {
                        {0.039999999,0.95999998},
                        1
                    },
                    {},

                    {
                        {0.27000001,0.86000001},
                        1
                    },

                    {
                        {0.82999998,0.86000001},
                        1
                    },

                    {
                        {0.82999998,0.98000002},
                        1
                    },

                    {
                        {0.27000001,0.98000002},
                        1
                    },

                    {
                        {0.27000001,0.86000001},
                        1
                    },
                    {},

                    {
                        {0.23,0.18000001},
                        1
                    },

                    {
                        {0.37,0.18000001},
                        1
                    },

                    {
                        {0.37,0.25999999},
                        1
                    },

                    {
                        {0.23,0.25999999},
                        1
                    },

                    {
                        {0.23,0.18000001},
                        1
                    },
                    {},

                    {
                        {0.69999999,0.18000001},
                        1
                    },

                    {
                        {0.83999997,0.18000001},
                        1
                    },

                    {
                        {0.83999997,0.25999999},
                        1
                    },

                    {
                        {0.69999999,0.25999999},
                        1
                    },

                    {
                        {0.69999999,0.18000001},
                        1
                    },
                    {},

                    {
                        {0.23999999,0.28999999},
                        1
                    },

                    {
                        {0.36000001,0.28999999},
                        1
                    },

                    {
                        {0.36000001,0.37},
                        1
                    },

                    {
                        {0.23999999,0.37},
                        1
                    },

                    {
                        {0.23999999,0.28999999},
                        1
                    },
                    {},

                    {
                        {0.70999998,0.28999999},
                        1
                    },

                    {
                        {0.82999998,0.28999999},
                        1
                    },

                    {
                        {0.82999998,0.37},
                        1
                    },

                    {
                        {0.70999998,0.37},
                        1
                    },

                    {
                        {0.70999998,0.28999999},
                        1
                    }
                };
            };
            class SightSelect1
            {
                type="text";
                source="static";
                text="SIGHT";
                scale=1;
                sourceScale=1;
                align="right";
                pos[]=
                {

                    {
                        "0.53-0.29",
                        0.18700001
                    },
                    1
                };
                right[]=
                {
                    {0.28,0.18700001},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.29",
                        0.222
                    },
                    1
                };
            };
            class SightSelect2
            {
                type="text";
                source="static";
                text="FCR";
                scale=1;
                sourceScale=1;
                align="right";
                pos[]=
                {

                    {
                        "0.53-0.29",
                        0.227
                    },
                    1
                };
                right[]=
                {
                    {0.28,0.227},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.29",
                        0.26199999
                    },
                    1
                };
            };
            class AcqSelect1
            {
                type="text";
                source="static";
                text="ACQ";
                scale=1;
                sourceScale=1;
                align="left";
                pos[]=
                {

                    {
                        "0.53+0.29",
                        0.18700001
                    },
                    1
                };
                right[]=
                {
                    {0.86000001,0.18700001},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.29",
                        0.222
                    },
                    1
                };
            };
            class AcqSelect2
            {
                type="text";
                source="static";
                text="FCR";
                scale=1;
                sourceScale=1;
                align="left";
                pos[]=
                {

                    {
                        "0.53+0.29",
                        0.227
                    },
                    1
                };
                right[]=
                {
                    {0.86000001,0.227},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.29",
                        0.26199999
                    },
                    1
                };
            };
            class LSTSelect1
            {
                type="text";
                source="static";
                text="LST";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53-0.23",
                        0.29699999
                    },
                    1
                };
                right[]=
                {
                    {0.34,0.29699999},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.23",
                        0.33199999
                    },
                    1
                };
            };
            class LSTSelect2
            {
                type="text";
                source="static";
                text="A";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53-0.23",
                        0.33700001
                    },
                    1
                };
                right[]=
                {
                    {0.34,0.33700001},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.23",
                        0.37200001
                    },
                    1
                };
            };
            class LRFDSelect1
            {
                type="text";
                source="static";
                text="LRFD";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53+0.24",
                        0.29699999
                    },
                    1
                };
                right[]=
                {
                    {0.81,0.29699999},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.24",
                        0.33199999
                    },
                    1
                };
            };
            class LRFDSelect2
            {
                type="text";
                source="static";
                text="B";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53+0.24",
                        0.33700001
                    },
                    1
                };
                right[]=
                {
                    {0.81,0.33700001},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.24",
                        0.37200001
                    },
                    1
                };
            };
            class PilotText
            {
                type="text";
                source="static";
                text="PILOT";
                scale=1;
                sourceScale=1;
                align="right";
                pos[]=
                {

                    {
                        "0.53-0.48",
                        0.815
                    },
                    1
                };
                right[]=
                {
                    {0.090000004,0.815},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.48",
                        0.85000002
                    },
                    1
                };
            };
            class CopilotText
            {
                type="text";
                source="static";
                text="COPILOT";
                scale=1;
                sourceScale=1;
                align="right";
                pos[]=
                {

                    {
                        "0.53-0.48",
                        0.94499999
                    },
                    1
                };
                right[]=
                {
                    {0.090000004,0.94499999},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.48",
                        0.98000002
                    },
                    1
                };
            };
            class PylonText6
            {
                type="text";
                source="static";
                text="#6";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53-0.31 + 0.00",
                        0.55000001
                    },
                    1
                };
                right[]=
                {
                    {0.25999999,0.55000001},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.31 + 0.00",
                        0.58499998
                    },
                    1
                };
            };
            class PylonText5
            {
                type="text";
                source="static";
                text="#5";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53-0.31 + 0.09",
                        0.55000001
                    },
                    1
                };
                right[]=
                {
                    {0.34999999,0.55000001},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.31 + 0.09",
                        0.58499998
                    },
                    1
                };
            };
            class PylonText4
            {
                type="text";
                source="static";
                text="#4";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53-0.31 + 0.09*2",
                        0.55000001
                    },
                    1
                };
                right[]=
                {
                    {0.44,0.55000001},
                    1
                };
                down[]=
                {

                    {
                        "0.53-0.31 + 0.09*2",
                        0.58499998
                    },
                    1
                };
            };
            class PylonText3
            {
                type="text";
                source="static";
                text="#3";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53+0.31 - 0.09*2",
                        0.55000001
                    },
                    1
                };
                right[]=
                {
                    {0.69999999,0.55000001},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.31 - 0.09*2",
                        0.58499998
                    },
                    1
                };
            };
            class PylonText2
            {
                type="text";
                source="static";
                text="#2";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53+0.31 - 0.09",
                        0.55000001
                    },
                    1
                };
                right[]=
                {
                    {0.79000002,0.55000001},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.31 - 0.09",
                        0.58499998
                    },
                    1
                };
            };
            class PylonText1
            {
                type="text";
                source="static";
                text="#1";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {

                    {
                        "0.53+0.31 - 0.00",
                        0.55000001
                    },
                    1
                };
                right[]=
                {
                    {0.88,0.55000001},
                    1
                };
                down[]=
                {

                    {
                        "0.53+0.31 - 0.00",
                        0.58499998
                    },
                    1
                };
            };
            class CurrentWeaponText
            {
                type="text";
                source="static";
                text="CURRENT WEAPON";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {
                    {0.55000001,0.81999999},
                    1
                };
                right[]=
                {
                    {0.58999997,0.81999999},
                    1
                };
                down[]=
                {
                    {0.55000001,0.85500002},
                    1
                };
            };
            class Weapons
            {
                type="text";
                source="weapon";
                sourceScale=1;
                align="center";
                scale=1;
                pos[]=
                {
                    {0.55000001,0.87},
                    1
                };
                right[]=
                {
                    {0.58999997,0.87},
                    1
                };
                down[]=
                {
                    {0.55000001,0.90499997},
                    1
                };
            };
            class Ammo
            {
                type="text";
                source="ammo";
                sourceScale=1;
                align="center";
                scale=1;
                pos[]=
                {
                    {0.55000001,0.92000002},
                    1
                };
                right[]=
                {
                    {0.58999997,0.92000002},
                    1
                };
                down[]=
                {
                    {0.55000001,0.95499998},
                    1
                };
            };
        };
        class MGun
        {
            class Default
            {
                condition="ammo0 > 0";
                color[]={0,0.12,0};
                class Shape
                {
                    type="line";
                    width=4;
                    points[]=
                    {

                        {
                            {0.55599999,0.38641},
                            1
                        },

                        {
                            {0.50199997,0.38641},
                            1
                        },

                        {
                            {0.458,0.38641},
                            1
                        },

                        {
                            {0.458,0.44931599},
                            1
                        },

                        {
                            {0.60000002,0.44931599},
                            1
                        },

                        {
                            {0.60000002,0.38641},
                            1
                        },

                        {
                            {0.55599999,0.38641},
                            1
                        },
                        {},

                        {
                            {0.50199997,0.38641},
                            1
                        },

                        {
                            {0.50199997,0.32547},
                            1
                        },

                        {
                            {0.52200001,0.32547},
                            1
                        },

                        {
                            {0.52200001,0.284188},
                            1
                        },

                        {
                            {0.54000002,0.284188},
                            1
                        },

                        {
                            {0.54000002,0.327436},
                            1
                        },

                        {
                            {0.55599999,0.327436},
                            1
                        },

                        {
                            {0.55599999,0.38641},
                            1
                        },

                        {
                            {0.50199997,0.38641},
                            1
                        }
                    };
                };
                class Ammo
                {
                    type="text";
                    source="ammo";
                    sourceIndex=0;
                    sourceScale=1;
                    sourceLength=4;
                    align="center";
                    scale=1;
                    pos[]=
                    {
                        {0.52999997,0.41},
                        1
                    };
                    right[]=
                    {
                        {0.56999999,0.41},
                        1
                    };
                    down[]=
                    {
                        {0.52999997,0.44499999},
                        1
                    };
                };
            };
            class Selected: Default
            {
                condition="(mgun +  (ammo0 min 1))/2";
                color[]={0.99000001,0.94,0.58999997};
                class Shape: Shape
                {
                };
                class Ammo: Ammo
                {
                };
            };
            class Empty: Default
            {
                condition="ammo0 <= 0";
                color[]={1,0,0,1};
                class Shape: Shape
                {
                };
                class Ammo: Ammo
                {
                    source="static";
                    text="EMPTY";
                };
            };
        };
        class Pylon1
        {
            type="pylonicon";
            pos[]=
            {
                {0.81999999,0.5},
                1
            };
            pylon=1;
            name="Heli_Attack_01";
        };
        class Pylon2: Pylon1
        {
            pos[]=
            {
                {0.73000002,0.5},
                1
            };
            pylon=2;
        };
        class Pylon3: Pylon1
        {
            pos[]=
            {
                {0.63999999,0.5},
                1
            };
            pylon=3;
        };
        class Pylon4: Pylon1
        {
            pos[]=
            {
                {0.36000001,0.5},
                1
            };
            pylon=4;
        };
        class Pylon5: Pylon1
        {
            pos[]=
            {
                {0.27000001,0.5},
                1
            };
            pylon=5;
        };
        class Pylon6: Pylon1
        {
            pos[]=
            {
                {0.18000001,0.5},
                1
            };
            pylon=6;
        };
        class ArmBackground
        {
            color[]={0.19,0.039999999,0};
            class BlackBackground
            {
                type="polygon";
                points[]=
                {

                    {

                        {

                            {
                                "0.0+0.48",
                                "0.0+0.14"
                            },
                            1
                        },

                        {

                            {
                                "0.1+0.48",
                                "0.0+0.14"
                            },
                            1
                        },

                        {

                            {
                                "0.1+0.48",
                                "0.1+0.14"
                            },
                            1
                        },

                        {

                            {
                                "0.0+0.48",
                                "0.1+0.14"
                            },
                            1
                        }
                    }
                };
            };
        };
        class BlackText
        {
            color[]={0.15000001,0.0099999998,0};
            class CMText
            {
                type="text";
                source="static";
                text="ARM";
                scale=1;
                sourceScale=1;
                align="center";
                pos[]=
                {
                    {0.52999997,0.17},
                    1
                };
                right[]=
                {
                    {0.56999999,0.17},
                    1
                };
                down[]=
                {
                    {0.52999997,0.205},
                    1
                };
            };
        };
    };
};
