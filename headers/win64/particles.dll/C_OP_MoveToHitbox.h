#pragma once

class C_OP_MoveToHitbox : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x238, size 0x68, align 8 | MPropertyFriendlyName
    char _pad_02A0[0x4]; // offset 0x2A0
    float32 m_flLifeTimeLerpStart; // offset 0x2A4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeLerpEnd; // offset 0x2A8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x2AC, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x2B0, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x330, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0331[0x3]; // offset 0x331
    HitboxLerpType_t m_nLerpType; // offset 0x334, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x338, size 0x170, align 8 | MPropertyFriendlyName
};
