#pragma once

class C_OP_RenderRopes : public CBaseRendererSource2 /*0x0*/  // sizeof 0x3310, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2D00]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x2D00, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_2D01[0x3]; // offset 0x2D01
    float32 m_flMinSize; // offset 0x2D04, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flMaxSize; // offset 0x2D08, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartFadeSize; // offset 0x2D0C, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flEndFadeSize; // offset 0x2D10, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flStartFadeDot; // offset 0x2D14, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x2D18, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_2D1C[0x4]; // offset 0x2D1C
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x2D20, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    float32 m_flRadiusTaper; // offset 0x2E88, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nMinTesselation; // offset 0x2E8C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    int32 m_nMaxTesselation; // offset 0x2E90, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTessScale; // offset 0x2E94, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // offset 0x2E98, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // offset 0x3000, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionRendererFloatInput m_flTextureVOffset; // offset 0x3168, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nTextureVParamsCP; // offset 0x32D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bClampV; // offset 0x32D4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_32D5[0x3]; // offset 0x32D5
    int32 m_nScaleCP1; // offset 0x32D8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName
    int32 m_nScaleCP2; // offset 0x32DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVSizeByControlPointDistance; // offset 0x32E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVScrollByControlPointDistance; // offset 0x32E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flScaleVOffsetByControlPointDistance; // offset 0x32E8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_32EC[0x1]; // offset 0x32EC
    bool m_bUseScalarForTextureCoordinate; // offset 0x32ED, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_32EE[0x2]; // offset 0x32EE
    ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // offset 0x32F0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flScalarAttributeTextureCoordScale; // offset 0x32F4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bReverseOrder; // offset 0x32F8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    bool m_bClosedLoop; // offset 0x32F9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_32FA[0x2]; // offset 0x32FA
    ParticleAttributeIndex_t m_nSplitField; // offset 0x32FC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bSortBySegmentID; // offset 0x3300, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_3301[0x3]; // offset 0x3301
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x3304, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nVectorFieldForOrientation; // offset 0x3308, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority MPropertySuppressExpr
    bool m_bDrawAsOpaque; // offset 0x330C, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bGenerateNormals; // offset 0x330D, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    char _pad_330E[0x2]; // offset 0x330E
};
