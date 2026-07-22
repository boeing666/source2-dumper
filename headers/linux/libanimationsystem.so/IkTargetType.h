#pragma once

enum IkTargetType : uint32_t  // sizeof 0x4
{
    IkTarget_Attachment = 0,
    IkTarget_Bone = 1,
    IkTarget_Parameter_ModelSpace = 2,
    IkTarget_Parameter_WorldSpace = 3,
};
