#pragma once

struct HitReactFixedSettings_t  // sizeof 0x44, align 0x4 [trivial_ctor trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    int32 m_nWeightListIndex; // offset 0x0, size 0x4, align 4
    int32 m_nEffectedBoneCount; // offset 0x4, size 0x4, align 4
    float32 m_flMaxImpactForce; // offset 0x8, size 0x4, align 4
    float32 m_flMinImpactForce; // offset 0xC, size 0x4, align 4
    float32 m_flWhipImpactScale; // offset 0x10, size 0x4, align 4
    float32 m_flCounterRotationScale; // offset 0x14, size 0x4, align 4
    float32 m_flDistanceFadeScale; // offset 0x18, size 0x4, align 4
    float32 m_flPropagationScale; // offset 0x1C, size 0x4, align 4
    float32 m_flWhipDelay; // offset 0x20, size 0x4, align 4
    float32 m_flSpringStrength; // offset 0x24, size 0x4, align 4
    float32 m_flWhipSpringStrength; // offset 0x28, size 0x4, align 4
    float32 m_flMaxAngleRadians; // offset 0x2C, size 0x4, align 4
    int32 m_nHipBoneIndex; // offset 0x30, size 0x4, align 4
    float32 m_flHipBoneTranslationScale; // offset 0x34, size 0x4, align 4
    float32 m_flHipDipSpringStrength; // offset 0x38, size 0x4, align 4
    float32 m_flHipDipImpactScale; // offset 0x3C, size 0x4, align 4
    float32 m_flHipDipDelay; // offset 0x40, size 0x4, align 4
};
