#pragma once

class C_OP_InheritFromParentParticlesV2 : public CParticleFunctionOperator /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (particles) {MParticleMinVersion MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flScale; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x358, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_035C[0x4]; // offset 0x35C
    CPerParticleFloatInput m_nIncrement; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bSubSample; // offset 0x4D8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRandomDistribution; // offset 0x4D9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bReverse; // offset 0x4DA, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_04DB[0x1]; // offset 0x4DB
    MissingParentInheritBehavior_t m_nMissingParentBehavior; // offset 0x4DC, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x4E0, size 0x178, align 8 | MPropertyFriendlyName
};
