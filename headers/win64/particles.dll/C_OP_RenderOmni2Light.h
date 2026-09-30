#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2E88, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x230, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x234, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0236[0x2]; // offset 0x236
    CParticleCollectionVecInput m_vColorBlend; // offset 0x238, size 0x6D8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x910, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0914[0x4]; // offset 0x914
    CUtlString m_strLightStyle; // offset 0x918, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x920, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0xA98, size 0x4, align 4
    char _pad_0A9C[0x4]; // offset 0xA9C
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0xAA0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xC18, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xD90, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD91, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D92[0x6]; // offset 0xD92
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD98, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xF10, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F11[0x7]; // offset 0xF11
    CPerParticleFloatInput m_flFogScale; // offset 0xF18, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0x1090, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleOmni2LighOrientationChoiceList_t m_nOrientationType; // offset 0x1208, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_120C[0x4]; // offset 0x120C
    CPerParticleVecInput m_vNormal; // offset 0x1210, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vTarget; // offset 0x18E8, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFOVAngle; // offset 0x1FC0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnShape; // offset 0x2138, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeX; // offset 0x22B0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeY; // offset 0x2428, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftX; // offset 0x25A0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftY; // offset 0x2718, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSkirt; // offset 0x2890, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x2A08, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x2B80, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x2CF8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x2E70, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x2E78, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_2E79[0xF]; // offset 0x2E79
};
