#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2FF8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    uint16 m_nMaxAllowed; // offset 0x22C, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_022E[0x2]; // offset 0x22E
    CParticleCollectionVecInput m_vColorBlend; // offset 0x230, size 0x6D8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x908, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_090C[0x4]; // offset 0x90C
    CUtlString m_strLightStyle; // offset 0x910, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x918, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0xA90, size 0x4, align 4
    char _pad_0A94[0x4]; // offset 0xA94
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0xA98, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xC10, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xD88, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD89, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D8A[0x6]; // offset 0xD8A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD90, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xF08, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F09[0x7]; // offset 0xF09
    CPerParticleFloatInput m_flFogScale; // offset 0xF10, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flMinRoughness; // offset 0x1088, size 0x178, align 8 | MPropertyFriendlyName MPropertyDescription
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0x1200, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    ParticleOmni2LighOrientationChoiceList_t m_nOrientationType; // offset 0x1378, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_137C[0x4]; // offset 0x137C
    CPerParticleVecInput m_vNormal; // offset 0x1380, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleVecInput m_vTarget; // offset 0x1A58, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flFOVAngle; // offset 0x2130, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnShape; // offset 0x22A8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeX; // offset 0x2420, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnNearSizeY; // offset 0x2598, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftX; // offset 0x2710, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBarnSoftY; // offset 0x2888, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flSkirt; // offset 0x2A00, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x2B78, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x2CF0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x2E68, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x2FE0, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x2FE8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_2FE9[0xF]; // offset 0x2FE9
};
