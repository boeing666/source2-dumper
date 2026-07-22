#pragma once

class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInputMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformStart; // offset 0x7A0, size 0x68, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x808, size 0x68, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x870, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x874, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x875, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCapsule; // offset 0x876, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0877[0x1]; // offset 0x877
};
