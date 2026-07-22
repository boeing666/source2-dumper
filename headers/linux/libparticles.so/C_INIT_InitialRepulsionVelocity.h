#pragma once

class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x288, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    char[128] m_CollisionGroupName; // offset 0x1D4, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x254, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x258, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecOutputMax; // offset 0x264, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0x270, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPerParticle; // offset 0x274, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTranslate; // offset 0x275, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0x276, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0277[0x1]; // offset 0x277
    float32 m_flTraceLength; // offset 0x278, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPerParticleTR; // offset 0x27C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bInherit; // offset 0x27D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_027E[0x2]; // offset 0x27E
    int32 m_nChildCP; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nChildGroupID; // offset 0x284, size 0x4, align 4 | MPropertyFriendlyName
};
