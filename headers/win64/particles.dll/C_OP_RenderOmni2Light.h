#pragma once

class C_OP_RenderOmni2Light : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1490, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ParticleOmni2LightTypeChoiceList_t m_nLightType; // offset 0x228, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
    CParticleCollectionVecInput m_vColorBlend; // offset 0x230, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8E8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleLightUnitChoiceList_t m_nBrightnessUnit; // offset 0x8EC, size 0x4, align 4
    CPerParticleFloatInput m_flBrightnessLumens; // offset 0x8F0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flBrightnessCandelas; // offset 0xA60, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCastShadows; // offset 0xBD0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bFog; // offset 0xBD1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0BD2[0x6]; // offset 0xBD2
    CPerParticleFloatInput m_flFogScale; // offset 0xBD8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flLuminaireRadius; // offset 0xD48, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flSkirt; // offset 0xEB8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRange; // offset 0x1028, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInnerConeAngle; // offset 0x1198, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOuterConeAngle; // offset 0x1308, size 0x170, align 8 | MPropertyFriendlyName
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hLightCookie; // offset 0x1478, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSphericalCookie; // offset 0x1480, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1481[0xF]; // offset 0x1481
};
