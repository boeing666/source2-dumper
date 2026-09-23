#pragma once

class C_OP_LockToBone : public CParticleFunctionOperator /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleModelInput m_modelInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_transformInput; // offset 0x240, size 0x68, align 8 | MPropertyFriendlyName
    float32 m_flLifeTimeFadeStart; // offset 0x2A8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLifeTimeFadeEnd; // offset 0x2AC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flJumpThreshold; // offset 0x2B0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x2B4, size 0x4, align 4 | MPropertyFriendlyName
    char[128] m_HitboxSetName; // offset 0x2B8, size 0x80, align 1 | MPropertyFriendlyName
    bool m_bRigid; // offset 0x338, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseBones; // offset 0x339, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_033A[0x2]; // offset 0x33A
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x33C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutputPrev; // offset 0x340, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleRotationLockType_t m_nRotationSetType; // offset 0x344, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bRigidRotationLock; // offset 0x348, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0349[0x7]; // offset 0x349
    CPerParticleVecInput m_vecRotation; // offset 0x350, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRotLerp; // offset 0xA28, size 0x178, align 8 | MPropertyFriendlyName
};
