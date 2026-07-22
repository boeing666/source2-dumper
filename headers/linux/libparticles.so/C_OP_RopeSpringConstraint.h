#pragma once

class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleCollectionFloatInput m_flRestLength; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMinDistance; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxDistance; // offset 0x4A0, size 0x168, align 8 | MPropertyFriendlyName
    float32 m_flAdjustmentScale; // offset 0x608, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_060C[0x4]; // offset 0x60C
    CParticleCollectionFloatInput m_flInitialRestingLength; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
};
