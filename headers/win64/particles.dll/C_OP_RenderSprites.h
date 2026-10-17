#pragma once

class C_OP_RenderSprites : public CBaseRendererSource2 /*0x0*/  // sizeof 0x41C8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x2ED8]; // offset 0x0
    CParticleCollectionRendererFloatInput m_nSequenceOverride; // offset 0x2ED8, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSequenceNumbersAreRawSequenceIndices; // offset 0x3050, size 0x1, align 1 | MPropertyFriendlyName MParticleAdvancedField
    char _pad_3051[0x3]; // offset 0x3051
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x3054, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    int32 m_nOrientationControlPoint; // offset 0x3058, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bUseYawWithNormalAligned; // offset 0x305C, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_305D[0x3]; // offset 0x305D
    CParticleCollectionRendererFloatInput m_flMinSize; // offset 0x3060, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flMaxSize; // offset 0x31D8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x3350, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // offset 0x34C8, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // offset 0x3640, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flStartFadeDot; // offset 0x37B8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x37BC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bDistanceAlpha; // offset 0x37C0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bSoftEdges; // offset 0x37C1, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_37C2[0x2]; // offset 0x37C2
    float32 m_flEdgeSoftnessStart; // offset 0x37C4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flEdgeSoftnessEnd; // offset 0x37C8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bOutline; // offset 0x37CC, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_37CD[0x3]; // offset 0x37CD
    Color m_OutlineColor; // offset 0x37D0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    int32 m_nOutlineAlpha; // offset 0x37D4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineStart0; // offset 0x37D8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineStart1; // offset 0x37DC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineEnd0; // offset 0x37E0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flOutlineEnd1; // offset 0x37E4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    ParticleLightingQuality_t m_nLightingMode; // offset 0x37E8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_37EC[0x4]; // offset 0x37EC
    CParticleCollectionRendererVecInput m_vecLightingOverride; // offset 0x37F0, size 0x6D8, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flLightingTessellation; // offset 0x3EC8, size 0x178, align 8 | MPropertyFriendlyName MPropertyAttributeRange MPropertySortPriority MPropertySuppressExpr
    CParticleCollectionRendererFloatInput m_flLightingDirectionality; // offset 0x4040, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    bool m_bParticleShadows; // offset 0x41B8, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_41B9[0x3]; // offset 0x41B9
    float32 m_flShadowDensity; // offset 0x41BC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    char _pad_41C0[0x8]; // offset 0x41C0
};
