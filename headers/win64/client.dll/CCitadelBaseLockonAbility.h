#pragma once

class CCitadelBaseLockonAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // offset 0x1AF8, size 0x68, align 8
    GameTime_t m_LockOnStartTime; // offset 0x1B60, size 0x4, align 255
    char _pad_1B64[0x4]; // offset 0x1B64
    ParticleIndex_t m_nTargetingLightEffect; // offset 0x1B68, size 0x4, align 255
    char _pad_1B6C[0x4]; // offset 0x1B6C
};
