#pragma once

class C_OP_MoveToHitbox : public CParticleFunctionOperator /*0x0*/  // sizeof 0x488, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1D0, size 0x58, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x228, size 0x60, align 8 | MPropertyFriendlyName
    char _pad_0288[0x4]; // offset 0x288
    float32 m_flLifeTimeLerpStart; // offset 0x28C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeLerpEnd; // offset 0x290, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x294, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x298, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x318, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0319[0x3]; // offset 0x319
    HitboxLerpType_t m_nLerpType; // offset 0x31C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x320, size 0x168, align 8 | MPropertyFriendlyName
};
