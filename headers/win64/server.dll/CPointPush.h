#pragma once

class CPointPush : public CPointEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bEnabled; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    float32 m_flMagnitude; // offset 0x4AC, size 0x4, align 4
    float32 m_flRadius; // offset 0x4B0, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x4B4, size 0x4, align 4
    float32 m_flConeOfInfluence; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlSymbolLarge m_iszFilterName; // offset 0x4C0, size 0x8, align 8
    CHandle< CBaseFilter > m_hFilter; // offset 0x4C8, size 0x4, align 4
    char _pad_04CC[0x4]; // offset 0x4CC
};
