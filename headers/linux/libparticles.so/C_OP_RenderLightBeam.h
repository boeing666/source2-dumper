#pragma once

class C_OP_RenderLightBeam : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1F78, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x21E]; // offset 0x0
    uint16 m_nMaxAllowed; // offset 0x21E, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    CParticleCollectionVecInput m_vColorBlend; // offset 0x220, size 0x6B0, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8D0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08D4[0x4]; // offset 0x8D4
    CUtlString m_strLightStyle; // offset 0x8D8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8E0, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // offset 0xA50, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumberOfLightsToCreate; // offset 0xBC0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xD30, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD31, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D32[0x6]; // offset 0xD32
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD38, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flSkirt; // offset 0xEA8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRange; // offset 0x1018, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flThickness; // offset 0x1188, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInnerConeAngle; // offset 0x12F8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOuterConeAngle; // offset 0x1468, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecConeRotationOffset; // offset 0x15D8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1C88, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1C8C[0x4]; // offset 0x1C8C
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1C90, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1E00, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDebugOrientation; // offset 0x1F70, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1F71[0x7]; // offset 0x1F71
};
