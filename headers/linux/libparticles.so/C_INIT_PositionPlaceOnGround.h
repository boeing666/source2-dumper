#pragma once

class C_INIT_PositionPlaceOnGround : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_flOffset; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMaxTraceLength; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecTraceDir; // offset 0x4A8, size 0x690, align 8 | MPropertyFriendlyName
    char[128] m_CollisionGroupName; // offset 0xB38, size 0x80, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleTraceSet_t m_nTraceSet; // offset 0xBB8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0BBC[0xC]; // offset 0xBBC
    ParticleTraceMissBehavior_t m_nTraceMissBehavior; // offset 0xBC8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bIncludeWater; // offset 0xBCC, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0BCD[0x3]; // offset 0xBCD
    ParticleAttributeIndex_t m_nAttribute; // offset 0xBD0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSetPXYZOnly; // offset 0xBD4, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bSetNormal; // offset 0xBD5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0BD6[0x2]; // offset 0xBD6
    ParticleAttributeIndex_t m_nGroundNormalAttribute; // offset 0xBD8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    bool m_bOffsetonColOnly; // offset 0xBDC, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0BDD[0x3]; // offset 0xBDD
    float32 m_flOffsetByRadiusFactor; // offset 0xBE0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nPreserveOffsetCP; // offset 0xBE4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nIgnoreCP; // offset 0xBE8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0BEC[0x4]; // offset 0xBEC
};
