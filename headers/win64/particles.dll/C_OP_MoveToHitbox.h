#pragma once

class C_OP_MoveToHitbox : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x240, size 0x68, align 8 | MPropertyFriendlyName
    char _pad_02A8[0x4]; // offset 0x2A8
    float32 m_flLifeTimeLerpStart; // offset 0x2AC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeLerpEnd; // offset 0x2B0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x2B4, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x2B8, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x338, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0339[0x3]; // offset 0x339
    HitboxLerpType_t m_nLerpType; // offset 0x33C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x340, size 0x178, align 8 | MPropertyFriendlyName
};
