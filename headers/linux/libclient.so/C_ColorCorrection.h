#pragma once

class C_ColorCorrection : public C_BaseEntity /*0x0*/  // sizeof 0x9C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    VectorWS m_vecOrigin; // offset 0x77C, size 0xC, align 4 | MNotSaved
    float32 m_MinFalloff; // offset 0x788, size 0x4, align 4 | MNotSaved
    float32 m_MaxFalloff; // offset 0x78C, size 0x4, align 4 | MNotSaved
    float32 m_flFadeInDuration; // offset 0x790, size 0x4, align 4 | MNotSaved
    float32 m_flFadeOutDuration; // offset 0x794, size 0x4, align 4 | MNotSaved
    float32 m_flMaxWeight; // offset 0x798, size 0x4, align 4 | MNotSaved
    float32 m_flCurWeight; // offset 0x79C, size 0x4, align 4 | MNotSaved
    char[512] m_netlookupFilename; // offset 0x7A0, size 0x200, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x9A0, size 0x1, align 1 | MNotSaved
    bool m_bMaster; // offset 0x9A1, size 0x1, align 1 | MNotSaved
    bool m_bClientSide; // offset 0x9A2, size 0x1, align 1 | MNotSaved
    bool m_bExclusive; // offset 0x9A3, size 0x1, align 1 | MNotSaved
    bool[1] m_bEnabledOnClient; // offset 0x9A4, size 0x1, align 1 | MNotSaved
    char _pad_09A5[0x3]; // offset 0x9A5
    float32[1] m_flCurWeightOnClient; // offset 0x9A8, size 0x4, align 4 | MNotSaved
    bool[1] m_bFadingIn; // offset 0x9AC, size 0x1, align 1 | MNotSaved
    char _pad_09AD[0x3]; // offset 0x9AD
    float32[1] m_flFadeStartWeight; // offset 0x9B0, size 0x4, align 4 | MNotSaved
    float32[1] m_flFadeStartTime; // offset 0x9B4, size 0x4, align 4 | MNotSaved
    float32[1] m_flFadeDuration; // offset 0x9B8, size 0x4, align 4 | MNotSaved
    char _pad_09BC[0xC]; // offset 0x9BC
};
