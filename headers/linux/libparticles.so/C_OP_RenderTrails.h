#pragma once

class C_OP_RenderTrails : public CBaseTrailRenderer /*0x0*/  // sizeof 0x4598, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x3241]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x3241, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_3242[0x2]; // offset 0x3242
    float32 m_flStartFadeDot; // offset 0x3244, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x3248, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x324C, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    float32 m_flMaxLength; // offset 0x3250, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flMinLength; // offset 0x3254, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreDT; // offset 0x3258, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_3259[0x3]; // offset 0x3259
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x325C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flLengthScale; // offset 0x3260, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLengthFadeInTime; // offset 0x3264, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusHeadTaper; // offset 0x3268, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecHeadColorScale; // offset 0x33D8, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flHeadAlphaScale; // offset 0x3A88, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusTaper; // offset 0x3BF8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecTailColorScale; // offset 0x3D68, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTailAlphaScale; // offset 0x4418, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nHorizCropField; // offset 0x4588, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nVertCropField; // offset 0x458C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flForwardShift; // offset 0x4590, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bFlipUVBasedOnPitchYaw; // offset 0x4594, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_4595[0x3]; // offset 0x4595
};
