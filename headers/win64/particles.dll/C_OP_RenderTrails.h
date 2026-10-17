#pragma once

class C_OP_RenderTrails : public CBaseTrailRenderer /*0x0*/  // sizeof 0x4720, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x3358]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x3358, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_3359[0x3]; // offset 0x3359
    float32 m_flStartFadeDot; // offset 0x335C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x3360, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x3364, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    float32 m_flMaxLength; // offset 0x3368, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flMinLength; // offset 0x336C, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreDT; // offset 0x3370, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_3371[0x3]; // offset 0x3371
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x3374, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flLengthScale; // offset 0x3378, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLengthFadeInTime; // offset 0x337C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusHeadTaper; // offset 0x3380, size 0x178, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecHeadColorScale; // offset 0x34F8, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flHeadAlphaScale; // offset 0x3BD0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusTaper; // offset 0x3D48, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecTailColorScale; // offset 0x3EC0, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTailAlphaScale; // offset 0x4598, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nHorizCropField; // offset 0x4710, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nVertCropField; // offset 0x4714, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flForwardShift; // offset 0x4718, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bFlipUVBasedOnPitchYaw; // offset 0x471C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_471D[0x3]; // offset 0x471D
};
