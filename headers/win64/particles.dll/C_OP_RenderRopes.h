#pragma once

class C_OP_RenderRopes : public CBaseRendererSource2 /*0x0*/  // sizeof 0x3420, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
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
    char _pad_2E0C[0x4]; // offset 0x2E0C
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x2E10, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    float32 m_flRadiusTaper; // offset 0x2F80, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x2F84, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nMaxTesselation; // offset 0x2F88, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTessScale; // offset 0x2F8C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // offset 0x2F90, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // offset 0x3100, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVOffset; // offset 0x3270, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nTextureVParamsCP; // offset 0x33E0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bClampV; // offset 0x33E4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_33E5[0x3]; // offset 0x33E5
    int32 m_nScaleCP1; // offset 0x33E8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nScaleCP2; // offset 0x33EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVSizeByControlPointDistance; // offset 0x33F0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVScrollByControlPointDistance; // offset 0x33F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVOffsetByControlPointDistance; // offset 0x33F8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_33FC[0x1]; // offset 0x33FC
    bool m_bUseScalarForTextureCoordinate; // offset 0x33FD, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_33FE[0x2]; // offset 0x33FE
    ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // offset 0x3400, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flScalarAttributeTextureCoordScale; // offset 0x3404, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x3408, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bClosedLoop; // offset 0x3409, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_340A[0x2]; // offset 0x340A
    ParticleAttributeIndex_t m_nSplitField; // offset 0x340C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSortBySegmentID; // offset 0x3410, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_3411[0x3]; // offset 0x3411
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x3414, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nVectorFieldForOrientation; // offset 0x3418, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    bool m_bDrawAsOpaque; // offset 0x341C, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bGenerateNormals; // offset 0x341D, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_341E[0x2]; // offset 0x341E
};
