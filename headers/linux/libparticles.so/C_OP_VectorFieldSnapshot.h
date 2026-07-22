#pragma once

class C_OP_VectorFieldSnapshot : public CParticleFunctionOperator /*0x0*/  // sizeof 0x9E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nControlPointNumber; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nAttributeToWrite; // offset 0x1D4, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nLocalSpaceCP; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInterpolation; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecScale; // offset 0x348, size 0x690, align 8 | MPropertyFriendlyName
    float32 m_flBoundaryDampening; // offset 0x9D8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bSetVelocity; // offset 0x9DC, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bLockToSurface; // offset 0x9DD, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_09DE[0x2]; // offset 0x9DE
    float32 m_flGridSpacing; // offset 0x9E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09E4[0x4]; // offset 0x9E4
};
