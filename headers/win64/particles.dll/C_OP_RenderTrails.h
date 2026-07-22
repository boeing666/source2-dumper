#pragma once

class C_OP_RenderTrails : public CBaseTrailRenderer /*0x0*/  // sizeof 0x4450, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30E8]; // offset 0x0
    bool m_bEnableFadingAndClamping; // offset 0x30E8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    char _pad_30E9[0x3]; // offset 0x30E9
    float32 m_flStartFadeDot; // offset 0x30EC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flEndFadeDot; // offset 0x30F0, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    ParticleAttributeIndex_t m_nPrevPntSource; // offset 0x30F4, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    float32 m_flMaxLength; // offset 0x30F8, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flMinLength; // offset 0x30FC, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    bool m_bIgnoreDT; // offset 0x3100, size 0x1, align 1 | MPropertyFriendlyName MPropertySortPriority
    char _pad_3101[0x3]; // offset 0x3101
    float32 m_flConstrainRadiusToLengthRatio; // offset 0x3104, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    float32 m_flLengthScale; // offset 0x3108, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flLengthFadeInTime; // offset 0x310C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusHeadTaper; // offset 0x3110, size 0x170, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertySortPriority
    CParticleCollectionVecInput m_vecHeadColorScale; // offset 0x3280, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flHeadAlphaScale; // offset 0x3938, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusTaper; // offset 0x3AA8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionVecInput m_vecTailColorScale; // offset 0x3C18, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flTailAlphaScale; // offset 0x42D0, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nHorizCropField; // offset 0x4440, size 0x4, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySortPriority
    ParticleAttributeIndex_t m_nVertCropField; // offset 0x4444, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flForwardShift; // offset 0x4448, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bFlipUVBasedOnPitchYaw; // offset 0x444C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_444D[0x3]; // offset 0x444D
};
