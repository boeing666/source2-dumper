#pragma once

class CBaseTrailRenderer : public CBaseRendererSource2 /*0x0*/  // sizeof 0x3150, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2D00]; // offset 0x0
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x2D00, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    int32 m_nOrientationControlPoint; // offset 0x2D04, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flMinSize; // offset 0x2D08, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    float32 m_flMaxSize; // offset 0x2D0C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // offset 0x2D10, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // offset 0x2E78, size 0x168, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x2FE0, size 0x168, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bClampV; // offset 0x3148, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_3149[0x7]; // offset 0x3149
};
