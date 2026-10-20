#pragma once

class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1610]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x1610, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x1614, size 0x4, align 255
    bool m_bCrashingDown; // offset 0x1618, size 0x1, align 1
    bool m_bImpulseApplied; // offset 0x1619, size 0x1, align 1
    bool m_bCanCrash; // offset 0x161A, size 0x1, align 1
    bool m_bPlayLandingSound; // offset 0x161B, size 0x1, align 1
    VectorWS m_vecCrashPosition; // offset 0x161C, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x1628, size 0xC, align 4
    char _pad_1634[0x64C]; // offset 0x1634
};
