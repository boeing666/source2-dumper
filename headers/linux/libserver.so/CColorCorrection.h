#pragma once

class CColorCorrection : public CBaseEntity /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flFadeInDuration; // offset 0x778, size 0x4, align 4
    float32 m_flFadeOutDuration; // offset 0x77C, size 0x4, align 4
    float32 m_flStartFadeInWeight; // offset 0x780, size 0x4, align 4
    float32 m_flStartFadeOutWeight; // offset 0x784, size 0x4, align 4
    GameTime_t m_flTimeStartFadeIn; // offset 0x788, size 0x4, align 255
    GameTime_t m_flTimeStartFadeOut; // offset 0x78C, size 0x4, align 255
    float32 m_flMaxWeight; // offset 0x790, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x794, size 0x1, align 1
    bool m_bEnabled; // offset 0x795, size 0x1, align 1
    bool m_bMaster; // offset 0x796, size 0x1, align 1 | MNotSaved
    bool m_bClientSide; // offset 0x797, size 0x1, align 1 | MNotSaved
    bool m_bExclusive; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x3]; // offset 0x799
    float32 m_MinFalloff; // offset 0x79C, size 0x4, align 4
    float32 m_MaxFalloff; // offset 0x7A0, size 0x4, align 4
    float32 m_flCurWeight; // offset 0x7A4, size 0x4, align 4
    char[512] m_netlookupFilename; // offset 0x7A8, size 0x200, align 1 | MNotSaved
    CUtlSymbolLarge m_lookupFilename; // offset 0x9A8, size 0x8, align 8
};
