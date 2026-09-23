#pragma once

class C_OP_RenderLightBeam : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x1F80, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x222]; // offset 0x0
    uint16 m_nMaxAllowed; // offset 0x222, size 0x2, align 2 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0224[0x4]; // offset 0x224
    CParticleCollectionVecInput m_vColorBlend; // offset 0x228, size 0x6B0, align 8 | MPropertyFriendlyName
    ParticleColorBlendType_t m_nColorBlendType; // offset 0x8D8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_08DC[0x4]; // offset 0x8DC
    CUtlString m_strLightStyle; // offset 0x8E0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CPerParticleFloatInput m_flLightStyleTime; // offset 0x8E8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // offset 0xA58, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flNumberOfLightsToCreate; // offset 0xBC8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bCastShadows; // offset 0xD38, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bDynamicBounce; // offset 0xD39, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0D3A[0x6]; // offset 0xD3A
    CParticleCollectionFloatInput m_flBounceScale; // offset 0xD40, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CParticleCollectionFloatInput m_flSkirt; // offset 0xEB0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flRange; // offset 0x1020, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flThickness; // offset 0x1190, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInnerConeAngle; // offset 0x1300, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOuterConeAngle; // offset 0x1470, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecConeRotationOffset; // offset 0x15E0, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    ParticleLightFogLightingMode_t m_nFogLightingMode; // offset 0x1C90, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_1C94[0x4]; // offset 0x1C94
    CParticleCollectionRendererFloatInput m_flFogContribution; // offset 0x1C98, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CPerParticleFloatInput m_flRenderFilter; // offset 0x1E08, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bDebugOrientation; // offset 0x1F78, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1F79[0x7]; // offset 0x1F79
};
