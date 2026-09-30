#pragma once

class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_flOffset; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMaxTraceLength; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecTraceDir; // offset 0x4D8, size 0x6D8, align 8 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0xBB0, size 0x80, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleTraceSet_t m_nTraceSet; // offset 0xC30, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0C34[0xC]; // offset 0xC34
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // offset 0xC40, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0xC44, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0C45[0x3]; // offset 0xC45
    ParticleAttributeIndex_t m_nAttribute; // offset 0xC48, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSetPXYZOnly; // offset 0xC4C, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSetNormal; // offset 0xC4D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0C4E[0x2]; // offset 0xC4E
    ParticleAttributeIndex_t m_nGroundNormalAttribute; // offset 0xC50, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    bool m_bOffsetonColOnly; // offset 0xC54, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0C55[0x3]; // offset 0xC55
    float32 m_flOffsetByRadiusFactor; // offset 0xC58, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nPreserveOffsetCP; // offset 0xC5C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nIgnoreCP; // offset 0xC60, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0C64[0x4]; // offset 0xC64
};
