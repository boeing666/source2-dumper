#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2D88, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x224]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x224, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x228, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_022A[0x6]; // offset 0x22A
    CParticleCollectionVecInput m_vColorBlend; // offset 0x230, size 0x6B0, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8E0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08E4[0x4]; // offset 0x8E4
    CUtlString m_strLightStyle; // offset 0x8E8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8F0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0xA60, size 0x4, align 4
    char _pad_0A64[0x4]; // offset 0xA64
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0xA68, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xBD8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xD48, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD49, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D4A[0x6]; // offset 0xD4A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD50, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xEC0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EC1[0x7]; // offset 0xEC1
    CPerParticleFloatInput m_flFogScale; // offset 0xEC8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0x1038, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleOmni2LighOrientationChoiceList_t m_nOrientationType; // offset 0x11A8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_11AC[0x4]; // offset 0x11AC
    CPerParticleVecInput m_vNormal; // offset 0x11B0, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vTarget; // offset 0x1860, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFOVAngle; // offset 0x1F10, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnShape; // offset 0x2080, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeX; // offset 0x21F0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeY; // offset 0x2360, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftX; // offset 0x24D0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftY; // offset 0x2640, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSkirt; // offset 0x27B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x2920, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x2A90, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x2C00, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x2D70, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x2D78, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_2D79[0xF]; // offset 0x2D79
};
