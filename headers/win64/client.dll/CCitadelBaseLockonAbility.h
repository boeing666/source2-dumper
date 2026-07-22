#pragma once

class CCitadelBaseLockonAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1550, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x14D8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // offset 0x14D8, size 0x68, align 8 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_LockOnStartTime; // offset 0x1540, size 0x4, align 255 | MNetworkEnable
    char _pad_1544[0x4]; // offset 0x1544
    ParticleIndex_t m_nTargetingLightEffect; // offset 0x1548, size 0x4, align 255
    char _pad_154C[0x4]; // offset 0x154C
};
