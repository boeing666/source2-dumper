#pragma once

class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CPerParticleFloatInput m_flInputMin; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x650, size 0x178, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformStart; // offset 0x7C8, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x830, size 0x68, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x898, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x89C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x89D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCapsule; // offset 0x89E, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_089F[0x1]; // offset 0x89F
};
