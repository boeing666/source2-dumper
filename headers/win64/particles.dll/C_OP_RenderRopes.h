#pragma once

class C_OP_RenderRopes : public CBaseRendererSource2 /*0x0*/  // sizeof 0x3528, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2ED8]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x2ED8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_2ED9[0x3]; // offset 0x2ED9
    float32 m_flMinSize; // offset 0x2EDC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxSize; // offset 0x2EE0, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartFadeSize; // offset 0x2EE4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flEndFadeSize; // offset 0x2EE8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartFadeDot; // offset 0x2EEC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x2EF0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2EF4[0x4]; // offset 0x2EF4
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x2EF8, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    float32 m_flRadiusTaper; // offset 0x3070, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x3074, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nMaxTesselation; // offset 0x3078, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTessScale; // offset 0x307C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // offset 0x3080, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // offset 0x31F8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVOffset; // offset 0x3370, size 0x178, align 8 | MPropertyFriendlyName
    int32 m_nTextureVParamsCP; // offset 0x34E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bClampV; // offset 0x34EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_34ED[0x3]; // offset 0x34ED
    int32 m_nScaleCP1; // offset 0x34F0, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nScaleCP2; // offset 0x34F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVSizeByControlPointDistance; // offset 0x34F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVScrollByControlPointDistance; // offset 0x34FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVOffsetByControlPointDistance; // offset 0x3500, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_3504[0x1]; // offset 0x3504
    bool m_bUseScalarForTextureCoordinate; // offset 0x3505, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_3506[0x2]; // offset 0x3506
    ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // offset 0x3508, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flScalarAttributeTextureCoordScale; // offset 0x350C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x3510, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bClosedLoop; // offset 0x3511, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_3512[0x2]; // offset 0x3512
    ParticleAttributeIndex_t m_nSplitField; // offset 0x3514, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSortBySegmentID; // offset 0x3518, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_3519[0x3]; // offset 0x3519
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x351C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nVectorFieldForOrientation; // offset 0x3520, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    bool m_bDrawAsOpaque; // offset 0x3524, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bGenerateNormals; // offset 0x3525, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_3526[0x2]; // offset 0x3526
};
