#pragma once

class C_OP_LockToBone : public CParticleFunctionOperator /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1D8, size 0x58, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x230, size 0x60, align 8 | MPropertyFriendlyName
    float32 m_flLifeTimeFadeStart; // offset 0x290, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeFadeEnd; // offset 0x294, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flJumpThreshold; // offset 0x298, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x29C, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x2A0, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bRigid; // offset 0x320, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x321, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0322[0x2]; // offset 0x322
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x324, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutputPrev; // offset 0x328, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleRotationLockType_t m_nRotationSetType; // offset 0x32C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bRigidRotationLock; // offset 0x330, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0331[0x7]; // offset 0x331
    CPerParticleVecInput m_vecRotation; // offset 0x338, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRotLerp; // offset 0x9E8, size 0x170, align 8 | MPropertyFriendlyName
};
