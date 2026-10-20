#pragma once

class CCitadelBaseLockonAbility : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B00]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< LockonTarget_t > m_vecLockonTargets; // offset 0x1B00, size 0x68, align 8
    GameTime_t m_LockOnStartTime; // offset 0x1B68, size 0x4, align 255
    char _pad_1B6C[0x4]; // offset 0x1B6C
    ParticleIndex_t m_nTargetingLightEffect; // offset 0x1B70, size 0x4, align 255
    char _pad_1B74[0x4]; // offset 0x1B74
};
