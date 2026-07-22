#pragma once

class C_OP_RenderRopes : public CBaseRendererSource2 /*0x0*/  // sizeof 0x32B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2DF0]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x2DF0, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_2DF1[0x3]; // offset 0x2DF1
    float32 m_flMinSize; // offset 0x2DF4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxSize; // offset 0x2DF8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartFadeSize; // offset 0x2DFC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flEndFadeSize; // offset 0x2E00, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartFadeDot; // offset 0x2E04, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x2E08, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flRadiusTaper; // offset 0x2E0C, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x2E10, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nMaxTesselation; // offset 0x2E14, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTessScale; // offset 0x2E18, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_2E1C[0x4]; // offset 0x2E1C
    CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // offset 0x2E20, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // offset 0x2F90, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVOffset; // offset 0x3100, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nTextureVParamsCP; // offset 0x3270, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bClampV; // offset 0x3274, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_3275[0x3]; // offset 0x3275
    int32 m_nScaleCP1; // offset 0x3278, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nScaleCP2; // offset 0x327C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVSizeByControlPointDistance; // offset 0x3280, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVScrollByControlPointDistance; // offset 0x3284, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVOffsetByControlPointDistance; // offset 0x3288, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_328C[0x1]; // offset 0x328C
    bool m_bUseScalarForTextureCoordinate; // offset 0x328D, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_328E[0x2]; // offset 0x328E
    ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // offset 0x3290, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flScalarAttributeTextureCoordScale; // offset 0x3294, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x3298, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bClosedLoop; // offset 0x3299, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_329A[0x2]; // offset 0x329A
    ParticleAttributeIndex_t m_nSplitField; // offset 0x329C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSortBySegmentID; // offset 0x32A0, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_32A1[0x3]; // offset 0x32A1
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x32A4, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nVectorFieldForOrientation; // offset 0x32A8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    bool m_bDrawAsOpaque; // offset 0x32AC, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bGenerateNormals; // offset 0x32AD, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_32AE[0x2]; // offset 0x32AE
};
