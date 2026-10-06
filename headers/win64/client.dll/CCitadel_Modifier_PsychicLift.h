#pragma once

class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x370, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    VectorWS m_vDropStartLocation; // offset 0x140, size 0xC, align 4
    float32 m_flLiftDuration; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x210]; // offset 0x150
    VectorWS m_vecSlamDest; // offset 0x360, size 0xC, align 4
    bool m_bImpacted; // offset 0x36C, size 0x1, align 1
    char _pad_036D[0x3]; // offset 0x36D
};
