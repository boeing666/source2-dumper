#pragma once

class CCitadel_Modifier_PsychicLift : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0x268, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    Vector m_vDropStartLocation; // offset 0xC8, size 0xC, align 4
    float32 m_flLiftDuration; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x180]; // offset 0xD8
    Vector m_vecSlamDest; // offset 0x258, size 0xC, align 4
    bool m_bImpacted; // offset 0x264, size 0x1, align 1
    char _pad_0265[0x3]; // offset 0x265
};
