#pragma once

class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0xA50, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAttributeToWrite; // offset 0x1E4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nLocalSpaceCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleFloatInput m_flInterpolation; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecScale; // offset 0x368, size 0x6D8, align 8 | MPropertyFriendlyName
    float32 m_flBoundaryDampening; // offset 0xA40, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetVelocity; // offset 0xA44, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockToSurface; // offset 0xA45, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0A46[0x2]; // offset 0xA46
    float32 m_flGridSpacing; // offset 0xA48, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A4C[0x4]; // offset 0xA4C
};
