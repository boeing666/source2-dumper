#pragma once

class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_flRestLength; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMinDistance; // offset 0x358, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxDistance; // offset 0x4D0, size 0x178, align 8 | MPropertyFriendlyName
    float32 m_flAdjustmentScale; // offset 0x648, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_064C[0x4]; // offset 0x64C
    CParticleCollectionFloatInput m_flInitialRestingLength; // offset 0x650, size 0x178, align 8 | MPropertyFriendlyName
};
