#pragma once

class C_INIT_InitialRepulsionVelocity : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x2A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    char[128] m_CollisionGroupName; // offset 0x1E8, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0x268, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x26C, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecOutputMax; // offset 0x278, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nControlPointNumber; // offset 0x284, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPerParticle; // offset 0x288, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bTranslate; // offset 0x289, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bProportional; // offset 0x28A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_028B[0x1]; // offset 0x28B
    float32 m_flTraceLength; // offset 0x28C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bPerParticleTR; // offset 0x290, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bInherit; // offset 0x291, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0292[0x2]; // offset 0x292
    int32 m_nChildCP; // offset 0x294, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nChildGroupID; // offset 0x298, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_029C[0x4]; // offset 0x29C
};
