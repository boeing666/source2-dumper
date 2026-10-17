#pragma once

class CBaseTrailRenderer : public CBaseRendererSource2 /*0x0*/  // sizeof 0x3250, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2DE8]; // offset 0x0
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x2DE8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    int32 m_nOrientationControlPoint; // offset 0x2DEC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flMinSize; // offset 0x2DF0, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    float32 m_flMaxSize; // offset 0x2DF4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // offset 0x2DF8, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // offset 0x2F68, size 0x170, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x30D8, size 0x170, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bClampV; // offset 0x3248, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_3249[0x7]; // offset 0x3249
};
