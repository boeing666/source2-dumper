#pragma once

class CPointPush : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bEnabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    float32 m_flMagnitude; // offset 0x77C, size 0x4, align 4
    float32 m_flRadius; // offset 0x780, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x784, size 0x4, align 4
    float32 m_flConeOfInfluence; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_iszFilterName; // offset 0x790, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
};
