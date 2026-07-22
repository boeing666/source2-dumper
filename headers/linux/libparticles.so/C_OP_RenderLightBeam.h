#pragma once

class C_OP_RenderLightBeam : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1EE0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21A]; // offset 0x0
    uint16 m_nMaxAllowed; // offset 0x21A, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_021C[0x4]; // offset 0x21C
    CParticleCollectionVecInput m_vColorBlend; // offset 0x220, size 0x690, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8B0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08B4[0x4]; // offset 0x8B4
    CUtlString m_strLightStyle; // offset 0x8B8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8C0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // offset 0xA28, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumberOfLightsToCreate; // offset 0xB90, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xCF8, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xCF9, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0CFA[0x6]; // offset 0xCFA
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD00, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flSkirt; // offset 0xE68, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRange; // offset 0xFD0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flThickness; // offset 0x1138, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInnerConeAngle; // offset 0x12A0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOuterConeAngle; // offset 0x1408, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecConeRotationOffset; // offset 0x1570, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1C00, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1C04[0x4]; // offset 0x1C04
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1C08, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1D70, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bDebugOrientation; // offset 0x1ED8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1ED9[0x7]; // offset 0x1ED9
};
