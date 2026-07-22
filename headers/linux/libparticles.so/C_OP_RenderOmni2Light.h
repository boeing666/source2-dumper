#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1708, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21C]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x21C, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x220, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0222[0x6]; // offset 0x222
    CParticleCollectionVecInput m_vColorBlend; // offset 0x228, size 0x690, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8B8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08BC[0x4]; // offset 0x8BC
    CUtlString m_strLightStyle; // offset 0x8C0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8C8, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0xA30, size 0x4, align 4
    char _pad_0A34[0x4]; // offset 0xA34
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0xA38, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xBA0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xD08, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD09, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D0A[0x6]; // offset 0xD0A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD10, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xE78, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0E79[0x7]; // offset 0xE79
    CPerParticleFloatInput m_flFogScale; // offset 0xE80, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0xFE8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSkirt; // offset 0x1150, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x12B8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x1420, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x1588, size 0x168, align 8 | MPropertyFriendlyName
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x16F0, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x16F8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_16F9[0xF]; // offset 0x16F9
};
