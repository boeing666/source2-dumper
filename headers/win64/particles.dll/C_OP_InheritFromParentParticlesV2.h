#pragma once

class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (particles) {MParticleMinVersion MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flScale; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x348, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_034C[0x4]; // offset 0x34C
    CPerParticleFloatInput m_nIncrement; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bSubSample; // offset 0x4C0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x4C1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x4C2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04C3[0x1]; // offset 0x4C3
    MissingParentInheritBehavior_t m_nMissingParentBehavior; // offset 0x4C4, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
};
