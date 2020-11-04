// MFD Configs based on work by Kimi and used with permission
// https://steamcommunity.com/sharedfiles/filedetails/?id=312724602

class MFD_Pilot_11_CM: MFD_Pilot_11
{
    turret[]={-1};
    class Draw
    {
        color[]={0,0.12,0};
        condition="on";
        class CMText
        {
            type="text";
            source="static";
            text="CM";
            scale=1;
            sourceScale=1;
            align="center";
            pos[]=
            {
                {0.52999997,0.61000001},
                1
            };
            right[]=
            {
                {0.56999999,0.61000001},
                1
            };
            down[]=
            {
                {0.52999997,0.64499998},
                1
            };
        };
        class CMAmmo
        {
            type="text";
            source="cmammo";
            sourceScale=1;
            sourceLength=3;
            align="center";
            scale=1;
            pos[]=
            {
                {0.52999997,0.66000003},
                1
            };
            right[]=
            {
                {0.56999999,0.66000003},
                1
            };
            down[]=
            {
                {0.52999997,0.69499999},
                1
            };
        };
    };
};
