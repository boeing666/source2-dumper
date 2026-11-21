#pragma once

class CParticleTransformInput : public CParticleInput /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MPropertyCustomEditor MCustomFGDMetadata}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    ParticleTransformType_t m_nType; // offset 0xC, size 0x4, align 4
    CParticleNamedValueRef m_NamedValue; // offset 0x10, size 0x40, align 8
    bool m_bFollowNamedValue; // offset 0x50, size 0x1, align 1
    bool m_bSupportsDisabled; // offset 0x51, size 0x1, align 1
    bool m_bUseOrientation; // offset 0x52, size 0x1, align 1
    char _pad_0053[0x1]; // offset 0x53
    int32 m_nControlPoint; // offset 0x54, size 0x4, align 4
    int32 m_nControlPointRangeMax; // offset 0x58, size 0x4, align 4
    float32 m_flEndCPGrowthTime; // offset 0x5C, size 0x4, align 4
};
