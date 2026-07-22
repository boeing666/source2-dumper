#pragma once

class C_OP_OscillateVectorSimple : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    Vector m_Rate; // offset 0x1D0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_Frequency; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nField; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flOscMult; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOscAdd; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F5[0x3]; // offset 0x1F5
};
