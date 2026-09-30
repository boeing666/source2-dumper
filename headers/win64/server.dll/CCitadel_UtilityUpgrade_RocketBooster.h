#pragma once

class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots /*0x0*/  // sizeof 0x1F38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1608]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x1608, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x160C, size 0x4, align 255
    bool m_bCrashingDown; // offset 0x1610, size 0x1, align 1
    bool m_bImpulseApplied; // offset 0x1611, size 0x1, align 1
    bool m_bCanCrash; // offset 0x1612, size 0x1, align 1
    char _pad_1613[0x1]; // offset 0x1613
    VectorWS m_vecCrashPosition; // offset 0x1614, size 0xC, align 4
    Vector m_vecCrashDirection; // offset 0x1620, size 0xC, align 4
    char _pad_162C[0x8F4]; // offset 0x162C
    SndOpEventGuid_t m_InAirLoopSound; // offset 0x1F20, size 0x14, align 4
    char _pad_1F34[0x4]; // offset 0x1F34
};
