// MFD Configs based on work by Kimi and used with permission
// https://steamcommunity.com/sharedfiles/filedetails/?id=312724602

class Kimi_HMD_Radar
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
    class Draw
    {
        color[]=
        {
            "user3",
            "user4",
            "user5"
        };
        alpha="user6";
        condition="on*user47-user48";
        class Radar_Contacts
        {
            condition="activeSensorsOn";
            class Radar_Contact_Boxes
            {
                width=2;
                type="radartoview";
                pos0[]={0.5,0.5};
                pos10[]=
                {
                    "0.5+0.2165",
                    "0.5+0.2165"
                };
                points[]=
                {

                    {
                        {-0.0049999999,-0.0049999999},
                        1
                    },

                    {
                        {0.0049999999,-0.0049999999},
                        1
                    },

                    {
                        {0.0049999999,0.0049999999},
                        1
                    },

                    {
                        {-0.0049999999,0.0049999999},
                        1
                    },

                    {
                        {-0.0049999999,-0.0049999999},
                        1
                    }
                };
            };
        };
    };
};
