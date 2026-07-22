#pragma once

class CGlowProperty  // sizeof 0x58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    Vector m_fGlowColor; // offset 0x8, size 0xC, align 4 | MNotSaved
    char _pad_0014[0x1C]; // offset 0x14
    int32 m_iGlowType; // offset 0x30, size 0x4, align 4
    int32 m_iGlowTeam; // offset 0x34, size 0x4, align 4 | MNotSaved
    int32 m_nGlowRange; // offset 0x38, size 0x4, align 4 | MNotSaved
    int32 m_nGlowRangeMin; // offset 0x3C, size 0x4, align 4 | MNotSaved
    Color m_glowColorOverride; // offset 0x40, size 0x4, align 1 | MNotSaved
    bool m_bFlashing; // offset 0x44, size 0x1, align 1 | MNotSaved
    char _pad_0045[0x3]; // offset 0x45
    float32 m_flGlowTime; // offset 0x48, size 0x4, align 4 | MNotSaved
    float32 m_flGlowStartTime; // offset 0x4C, size 0x4, align 4 | MNotSaved
    bool m_bEligibleForScreenHighlight; // offset 0x50, size 0x1, align 1
    bool m_bGlowing; // offset 0x51, size 0x1, align 1 | MNotSaved
    char _pad_0052[0x6]; // offset 0x52
};
