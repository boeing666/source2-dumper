#pragma once

class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots /*0x0*/  // sizeof 0x1520, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1078]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x1078, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x107C, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback MNetworkUserGroup
    bool m_bCrashingDown; // offset 0x1080, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bImpulseApplied; // offset 0x1081, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bCanCrash; // offset 0x1082, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1083[0x1]; // offset 0x1083
    Vector m_vecCrashPosition; // offset 0x1084, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecCrashDirection; // offset 0x1090, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_109C[0x484]; // offset 0x109C
};
