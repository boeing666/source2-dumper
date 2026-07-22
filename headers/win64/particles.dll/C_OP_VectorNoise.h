#pragma once

class C_OP_VectorNoise : public CParticleFunctionOperator /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vecOutputMin; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vecOutputMax; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    float32 m_fl4NoiseScale; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bAdditive; // offset 0x1F8, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x1F9, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FA[0x2]; // offset 0x1FA
    float32 m_flNoiseAnimationTimeScale; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
};
