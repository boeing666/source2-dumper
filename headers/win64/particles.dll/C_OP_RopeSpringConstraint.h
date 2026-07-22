#pragma once

class C_OP_RopeSpringConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_flRestLength; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMinDistance; // offset 0x348, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flMaxDistance; // offset 0x4B8, size 0x170, align 8 | MPropertyFriendlyName
    float32 m_flAdjustmentScale; // offset 0x628, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_062C[0x4]; // offset 0x62C
    CParticleCollectionFloatInput m_flInitialRestingLength; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
};
