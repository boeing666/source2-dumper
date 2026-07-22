#pragma once

class C_OP_CylindricalDistanceToTransform : public CParticleFunctionOperator /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01D4[0x4]; // offset 0x1D4
    CPerParticleFloatInput m_flInputMin; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInputMax; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMin; // offset 0x4A8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOutputMax; // offset 0x610, size 0x168, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformStart; // offset 0x778, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformEnd; // offset 0x7D8, size 0x60, align 8 | MPropertyFriendlyName
    ParticleSetMethod_t m_nSetMethod; // offset 0x838, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x83C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x83D, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bCapsule; // offset 0x83E, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_083F[0x1]; // offset 0x83F
};
