#pragma once

class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots /*0x0*/  // sizeof 0x2168, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1838]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x1838, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x183C, size 0x4, align 255
    bool m_bCrashingDown; // offset 0x1840, size 0x1, align 1
    bool m_bImpulseApplied; // offset 0x1841, size 0x1, align 1
    bool m_bCanCrash; // offset 0x1842, size 0x1, align 1
    char _pad_1843[0x1]; // offset 0x1843
    VectorWS m_vecCrashPosition; // offset 0x1844, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x1850, size 0xC, align 4
    char _pad_185C[0x8F4]; // offset 0x185C
    SndOpEventGuid_t m_InAirLoopSound; // offset 0x2150, size 0x14, align 4
    char _pad_2164[0x4]; // offset 0x2164
};
