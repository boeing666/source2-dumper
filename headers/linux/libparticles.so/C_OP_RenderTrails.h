#pragma once

class C_OP_RenderTrails : public CBaseTrailRenderer /*0x0*/  // sizeof 0x4440, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x3149]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x3149, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_314A[0x2]; // offset 0x314A
    float32 m_flStartFadeDot; // offset 0x314C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x3150, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x3154, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    float32 m_flMaxLength; // offset 0x3158, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flMinLength; // offset 0x315C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreDT; // offset 0x3160, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_3161[0x3]; // offset 0x3161
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x3164, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flLengthScale; // offset 0x3168, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLengthFadeInTime; // offset 0x316C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusHeadTaper; // offset 0x3170, size 0x168, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecHeadColorScale; // offset 0x32D8, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flHeadAlphaScale; // offset 0x3968, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusTaper; // offset 0x3AD0, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecTailColorScale; // offset 0x3C38, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTailAlphaScale; // offset 0x42C8, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nHorizCropField; // offset 0x4430, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nVertCropField; // offset 0x4434, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flForwardShift; // offset 0x4438, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bFlipUVBasedOnPitchYaw; // offset 0x443C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_443D[0x3]; // offset 0x443D
};
