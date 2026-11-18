#pragma once

class C_OP_RenderSprites : public CBaseRendererSource2 /*0x0*/  // sizeof 0x4068, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x2DE0]; // offset 0x0
    CParticleCollectionRendererFloatInput m_nSequenceOverride; // offset 0x2DE0, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSequenceNumbersAreRawSequenceIndices; // offset 0x2F50, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField
    char _pad_2F51[0x3]; // offset 0x2F51
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x2F54, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    int32 m_nOrientationControlPoint; // offset 0x2F58, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseYawWithNormalAligned; // offset 0x2F5C, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2F5D[0x3]; // offset 0x2F5D
    CParticleCollectionRendererFloatInput m_flMinSize; // offset 0x2F60, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMaxSize; // offset 0x30D0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x3240, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // offset 0x33B0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // offset 0x3520, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flStartFadeDot; // offset 0x3690, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x3694, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bDistanceAlpha; // offset 0x3698, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSoftEdges; // offset 0x3699, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_369A[0x2]; // offset 0x369A
    float32 m_flEdgeSoftnessStart; // offset 0x369C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flEdgeSoftnessEnd; // offset 0x36A0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOutline; // offset 0x36A4, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_36A5[0x3]; // offset 0x36A5
    Color m_OutlineColor; // offset 0x36A8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    int32 m_nOutlineAlpha; // offset 0x36AC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineStart0; // offset 0x36B0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineStart1; // offset 0x36B4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineEnd0; // offset 0x36B8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineEnd1; // offset 0x36BC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleLightingQuality_t m_nLightingMode; // offset 0x36C0, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_36C4[0x4]; // offset 0x36C4
    CParticleCollectionRendererVecInput m_vecLightingOverride; // offset 0x36C8, size 0x6B0, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flLightingTessellation; // offset 0x3D78, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flLightingDirectionality; // offset 0x3EE8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bParticleShadows; // offset 0x4058, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_4059[0x3]; // offset 0x4059
    float32 m_flShadowDensity; // offset 0x405C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_4060[0x8]; // offset 0x4060
};
