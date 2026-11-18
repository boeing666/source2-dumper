#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2EF0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x224, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0226[0x2]; // offset 0x226
    CParticleCollectionVecInput m_vColorBlend; // offset 0x228, size 0x6B0, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8D8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08DC[0x4]; // offset 0x8DC
    CUtlString m_strLightStyle; // offset 0x8E0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8E8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0xA58, size 0x4, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0xA60, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xBD0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xD40, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD41, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D42[0x6]; // offset 0xD42
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD48, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xEB8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EB9[0x7]; // offset 0xEB9
    CPerParticleFloatInput m_flFogScale; // offset 0xEC0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flMinRoughness; // offset 0x1030, size 0x170, align 8 | MPropertyFriendlyName MPropertyDescription
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0x11A0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleOmni2LighOrientationChoiceList_t m_nOrientationType; // offset 0x1310, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_1314[0x4]; // offset 0x1314
    CPerParticleVecInput m_vNormal; // offset 0x1318, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vTarget; // offset 0x19C8, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFOVAngle; // offset 0x2078, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnShape; // offset 0x21E8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeX; // offset 0x2358, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeY; // offset 0x24C8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftX; // offset 0x2638, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftY; // offset 0x27A8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSkirt; // offset 0x2918, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x2A88, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x2BF8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x2D68, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x2ED8, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x2EE0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_2EE1[0xF]; // offset 0x2EE1
};
