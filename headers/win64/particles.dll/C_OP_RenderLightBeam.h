#pragma once

class C_OP_RenderLightBeam : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1F98, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    uint16 m_nMaxAllowed; // offset 0x228, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_022A[0x6]; // offset 0x22A
    CParticleCollectionVecInput m_vColorBlend; // offset 0x230, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8E8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08EC[0x4]; // offset 0x8EC
    CUtlString m_strLightStyle; // offset 0x8F0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8F8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // offset 0xA68, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumberOfLightsToCreate; // offset 0xBD8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xD48, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD49, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D4A[0x6]; // offset 0xD4A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD50, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flSkirt; // offset 0xEC0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRange; // offset 0x1030, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flThickness; // offset 0x11A0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInnerConeAngle; // offset 0x1310, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOuterConeAngle; // offset 0x1480, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecConeRotationOffset; // offset 0x15F0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1CA8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1CAC[0x4]; // offset 0x1CAC
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1CB0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1E20, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDebugOrientation; // offset 0x1F90, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1F91[0x7]; // offset 0x1F91
};
