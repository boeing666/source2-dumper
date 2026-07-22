#pragma once

class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flOffset; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMaxTraceLength; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecTraceDir; // offset 0x4C0, size 0x6B8, align 8 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0xB78, size 0x80, align 1 | MPropertyFriendlyName
    ParticleTraceSet_t m_nTraceSet; // offset 0xBF8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0BFC[0xC]; // offset 0xBFC
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // offset 0xC08, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0xC0C, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0C0D[0x3]; // offset 0xC0D
    ParticleAttributeIndex_t m_nAttribute; // offset 0xC10, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSetPXYZOnly; // offset 0xC14, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSetNormal; // offset 0xC15, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0C16[0x2]; // offset 0xC16
    ParticleAttributeIndex_t m_nGroundNormalAttribute; // offset 0xC18, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    bool m_bOffsetonColOnly; // offset 0xC1C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0C1D[0x3]; // offset 0xC1D
    float32 m_flOffsetByRadiusFactor; // offset 0xC20, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nPreserveOffsetCP; // offset 0xC24, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nIgnoreCP; // offset 0xC28, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0C2C[0x4]; // offset 0xC2C
};
