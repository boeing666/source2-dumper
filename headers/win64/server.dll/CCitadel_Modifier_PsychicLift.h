#pragma once

class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x388, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x158]; // offset 0x0
    VectorWS m_vDropStartLocation; // offset 0x158, size 0xC, align 4
    float32 m_flLiftDuration; // offset 0x164, size 0x4, align 4
    char _pad_0168[0x210]; // offset 0x168
    VectorWS m_vecSlamDest; // offset 0x378, size 0xC, align 4
    bool m_bImpacted; // offset 0x384, size 0x1, align 1
    char _pad_0385[0x3]; // offset 0x385
};
