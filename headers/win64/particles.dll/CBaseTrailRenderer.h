#pragma once

class CBaseTrailRenderer : public CBaseRendererSource2 /*0x0*/  // sizeof 0x3350, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2ED0]; // offset 0x0
    ParticleOrientationChoiceList_t m_nOrientationType; // offset 0x2ED0, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    int32 m_nOrientationControlPoint; // offset 0x2ED4, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority MPropertySuppressExpr
    float32 m_flMinSize; // offset 0x2ED8, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    float32 m_flMaxSize; // offset 0x2EDC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flStartFadeSize; // offset 0x2EE0, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flEndFadeSize; // offset 0x3058, size 0x178, align 8 | MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionRendererFloatInput m_flSubPixelAAScale; // offset 0x31D0, size 0x178, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertySortPriority
    bool m_bClampV; // offset 0x3348, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_3349[0x7]; // offset 0x3349
};
