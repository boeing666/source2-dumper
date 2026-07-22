#pragma once

class CColorCorrection : public CBaseEntity /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    float32 m_flFadeInDuration; // offset 0x498, size 0x4, align 4
    float32 m_flFadeOutDuration; // offset 0x49C, size 0x4, align 4
    float32 m_flStartFadeInWeight; // offset 0x4A0, size 0x4, align 4
    float32 m_flStartFadeOutWeight; // offset 0x4A4, size 0x4, align 4
    GameTime_t m_flTimeStartFadeIn; // offset 0x4A8, size 0x4, align 255
    GameTime_t m_flTimeStartFadeOut; // offset 0x4AC, size 0x4, align 255
    float32 m_flMaxWeight; // offset 0x4B0, size 0x4, align 4
    bool m_bStartDisabled; // offset 0x4B4, size 0x1, align 1
    bool m_bEnabled; // offset 0x4B5, size 0x1, align 1
    bool m_bMaster; // offset 0x4B6, size 0x1, align 1 | MNotSaved
    bool m_bClientSide; // offset 0x4B7, size 0x1, align 1 | MNotSaved
    bool m_bExclusive; // offset 0x4B8, size 0x1, align 1
    char _pad_04B9[0x3]; // offset 0x4B9
    float32 m_MinFalloff; // offset 0x4BC, size 0x4, align 4
    float32 m_MaxFalloff; // offset 0x4C0, size 0x4, align 4
    float32 m_flCurWeight; // offset 0x4C4, size 0x4, align 4
    char[512] m_netlookupFilename; // offset 0x4C8, size 0x200, align 1 | MNotSaved
    CUtlSymbolLarge m_lookupFilename; // offset 0x6C8, size 0x8, align 8
};
