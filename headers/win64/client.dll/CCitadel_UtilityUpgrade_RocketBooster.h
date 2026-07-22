#pragma once

class CCitadel_UtilityUpgrade_RocketBooster : public CCitadel_UtilityUpgrade_RocketBoots /*0x0*/  // sizeof 0x1780, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12D8]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x12D8, size 0x4, align 255
    GameTime_t m_flCastTime; // offset 0x12DC, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback MNetworkUserGroup
    bool m_bCrashingDown; // offset 0x12E0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bImpulseApplied; // offset 0x12E1, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bCanCrash; // offset 0x12E2, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_12E3[0x1]; // offset 0x12E3
    Vector m_vecCrashPosition; // offset 0x12E4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vecCrashDirection; // offset 0x12F0, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_12FC[0x484]; // offset 0x12FC
};
