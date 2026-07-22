#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1788, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x22C, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_022E[0x2]; // offset 0x22E
    CParticleCollectionVecInput m_vColorBlend; // offset 0x230, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8E8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08EC[0x4]; // offset 0x8EC
    CUtlString m_strLightStyle; // offset 0x8F0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8F8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0xA68, size 0x4, align 4
    char _pad_0A6C[0x4]; // offset 0xA6C
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0xA70, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xBE0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xD50, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD51, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D52[0x6]; // offset 0xD52
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD58, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xEC8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EC9[0x7]; // offset 0xEC9
    CPerParticleFloatInput m_flFogScale; // offset 0xED0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0x1040, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSkirt; // offset 0x11B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x1320, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x1490, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x1600, size 0x170, align 8 | MPropertyFriendlyName
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x1770, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x1778, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1779[0xF]; // offset 0x1779
};
