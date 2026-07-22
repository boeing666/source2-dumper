#pragma once

class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (particles) {MParticleMinVersion MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flScale; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x338, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_033C[0x4]; // offset 0x33C
    CPerParticleFloatInput m_nIncrement; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bSubSample; // offset 0x4A8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x4A9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x4AA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04AB[0x1]; // offset 0x4AB
    MissingParentInheritBehavior_t m_nMissingParentBehavior; // offset 0x4AC, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x4B0, size 0x168, align 8 | MPropertyFriendlyName
};
