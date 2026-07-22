#pragma once

class C_OP_RenderSprites : public CBaseRendererSource2 /*0x0*/  // sizeof 0x5248, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2DF0]; // offset 0x0
    CParticleCollectionRendererFloatInput m_nSequenceOverride; // offset 0x2DF0, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSequenceNumbersAreRawSequenceIndices; // offset 0x2F60, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField
    char _pad_2F61[0x3]; // offset 0x2F61
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x2F64, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    int32 m_nOrientationControlPoint; // offset 0x2F68, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseYawWithNormalAligned; // offset 0x2F6C, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_2F6D[0x3]; // offset 0x2F6D
    CParticleCollectionRendererFloatInput m_flMinSize; // offset 0x2F70, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMaxSize; // offset 0x30E0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // offset 0x3250, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // offset 0x33C0, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // offset 0x3530, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flStartFadeDot; // offset 0x36A0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x36A4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bDistanceAlpha; // offset 0x36A8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSoftEdges; // offset 0x36A9, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_36AA[0x2]; // offset 0x36AA
    float32 m_flEdgeSoftnessStart; // offset 0x36AC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flEdgeSoftnessEnd; // offset 0x36B0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOutline; // offset 0x36B4, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    Color m_OutlineColor; // offset 0x36B5, size 0x4, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_36B9[0x3]; // offset 0x36B9
    int32 m_nOutlineAlpha; // offset 0x36BC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineStart0; // offset 0x36C0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineStart1; // offset 0x36C4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineEnd0; // offset 0x36C8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineEnd1; // offset 0x36CC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleLightingQuality_t m_nLightingMode; // offset 0x36D0, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_36D4[0x4]; // offset 0x36D4
    CParticleCollectionRendererVecInput m_vecLightingOverride; // offset 0x36D8, size 0x6B8, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flLightingTessellation; // offset 0x3D90, size 0x170, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flLightingDirectionality; // offset 0x3F00, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bParticleShadows; // offset 0x4070, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_4071[0x3]; // offset 0x4071
    float32 m_flShadowDensity; // offset 0x4074, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CReplicationParameters m_replicationParameters; // offset 0x4078, size 0x11C8, align 8 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_5240[0x8]; // offset 0x5240
};
