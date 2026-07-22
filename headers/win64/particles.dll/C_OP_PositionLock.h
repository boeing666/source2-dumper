#pragma once

class C_OP_PositionLock : public CParticleFunctionOperator /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x68, align 8 | MPropertyFriendlyName
    float32 m_flStartTime_min; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_max; // offset 0x244, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime_exp; // offset 0x248, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flEndTime_min; // offset 0x24C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_max; // offset 0x250, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime_exp; // offset 0x254, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flRange; // offset 0x258, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_025C[0x4]; // offset 0x25C
    CParticleCollectionFloatInput m_flRangeBias; // offset 0x260, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flJumpThreshold; // offset 0x3D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPrevPosScale; // offset 0x3D4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bLockRot; // offset 0x3D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_03D9[0x7]; // offset 0x3D9
    CParticleCollectionVecInput m_vecScale; // offset 0x3E0, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0xA98, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutputPrev; // offset 0xA9C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
