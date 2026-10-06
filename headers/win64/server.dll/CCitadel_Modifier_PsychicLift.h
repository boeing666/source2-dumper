#pragma once

class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x380, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    VectorWS m_vDropStartLocation; // offset 0x150, size 0xC, align 4
    float32 m_flLiftDuration; // offset 0x15C, size 0x4, align 4
    char _pad_0160[0x210]; // offset 0x160
    VectorWS m_vecSlamDest; // offset 0x370, size 0xC, align 4
    bool m_bImpacted; // offset 0x37C, size 0x1, align 1
    char _pad_037D[0x3]; // offset 0x37D
};
