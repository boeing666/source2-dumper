#pragma once

class C_ColorCorrection : public C_BaseEntity /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    VectorWS m_vecOrigin; // offset 0x600, size 0xC, align 4 | MNotSaved
    float32 m_MinFalloff; // offset 0x60C, size 0x4, align 4 | MNotSaved
    float32 m_MaxFalloff; // offset 0x610, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInDuration; // offset 0x614, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutDuration; // offset 0x618, size 0x4, align 4 | MNotSaved
    float32 m_flMaxWeight; // offset 0x61C, size 0x4, align 4 | MNotSaved
    float32 m_flCurWeight; // offset 0x620, size 0x4, align 4 | MNotSaved
    char[512] m_netlookupFilename; // offset 0x624, size 0x200, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x824, size 0x1, align 1 | MNotSaved
    bool m_bMaster; // offset 0x825, size 0x1, align 1 | MNotSaved
    bool m_bClientSide; // offset 0x826, size 0x1, align 1 | MNotSaved
    bool m_bExclusive; // offset 0x827, size 0x1, align 1 | MNotSaved
    bool[1] m_bEnabledOnClient; // offset 0x828, size 0x1, align 1 | MNotSaved
    char _pad_0829[0x3]; // offset 0x829
    float32[1] m_flCurWeightOnClient; // offset 0x82C, size 0x4, align 4 | MNotSaved
    bool[1] m_bFadingIn; // offset 0x830, size 0x1, align 1 | MNotSaved
    char _pad_0831[0x3]; // offset 0x831
    float32[1] m_flFadeStartWeight; // offset 0x834, size 0x4, align 4 | MNotSaved
    float32[1] m_flFadeStartTime; // offset 0x838, size 0x4, align 4 | MNotSaved
    float32[1] m_flFadeDuration; // offset 0x83C, size 0x4, align 4 | MNotSaved
    char _pad_0840[0x8]; // offset 0x840
};
