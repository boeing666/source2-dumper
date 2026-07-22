#pragma once

class CParticleTransformInput : public CParticleInput /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (particleslib) {MGetKV3ClassDefaults MPropertyCustomEditor MCustomFGDMetadata}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    ParticleTransformType_t m_nType; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CParticleNamedValueRef m_NamedValue; // offset 0x18, size 0x40, align 8
    bool m_bFollowNamedValue; // offset 0x58, size 0x1, align 1
    bool m_bSupportsDisabled; // offset 0x59, size 0x1, align 1
    bool m_bUseOrientation; // offset 0x5A, size 0x1, align 1
    char _pad_005B[0x1]; // offset 0x5B
    int32 m_nControlPoint; // offset 0x5C, size 0x4, align 4
    int32 m_nControlPointRangeMax; // offset 0x60, size 0x4, align 4
    float32 m_flEndCPGrowthTime; // offset 0x64, size 0x4, align 4
};
