#pragma once

class C_OP_OscillateVectorSimple : public CParticleFunctionOperator /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    Vector m_Rate; // offset 0x1D8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_Frequency; // offset 0x1E4, size 0xC, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nField; // offset 0x1F0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flOscMult; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOscAdd; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bOffset; // offset 0x1FC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01FD[0x3]; // offset 0x1FD
};
