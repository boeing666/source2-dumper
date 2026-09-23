#pragma once

class C_OP_RenderLightBeam : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x2038, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x230]; // offset 0x0
    uint16 m_nMaxAllowed; // offset 0x230, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0232[0x6]; // offset 0x232
    CParticleCollectionVecInput m_vColorBlend; // offset 0x238, size 0x6D8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x910, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_0914[0x4]; // offset 0x914
    CUtlString m_strLightStyle; // offset 0x918, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x920, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // offset 0xA98, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumberOfLightsToCreate; // offset 0xC10, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xD88, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD89, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D8A[0x6]; // offset 0xD8A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD90, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flSkirt; // offset 0xF08, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRange; // offset 0x1080, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flThickness; // offset 0x11F8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInnerConeAngle; // offset 0x1370, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOuterConeAngle; // offset 0x14E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecConeRotationOffset; // offset 0x1660, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1D38, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1D3C[0x4]; // offset 0x1D3C
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1D40, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1EB8, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bDebugOrientation; // offset 0x2030, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_2031[0x7]; // offset 0x2031
};
