#pragma once

class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots /*0x0*/  // sizeof 0x1EB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1840]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x1840, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x1844, size 0x4, align 255
    bool m_bCrashingDown; // offset 0x1848, size 0x1, align 1
    bool m_bImpulseApplied; // offset 0x1849, size 0x1, align 1
    bool m_bCanCrash; // offset 0x184A, size 0x1, align 1
    bool m_bPlayLandingSound; // offset 0x184B, size 0x1, align 1
    VectorWS m_vecCrashPosition; // offset 0x184C, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x1858, size 0xC, align 4
    char _pad_1864[0x64C]; // offset 0x1864
};
