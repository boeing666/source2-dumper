#pragma once

class C_OP_OscillateScalarSimple : public CParticleFunctionOperator /*0x0*/  // sizeof 0x210, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_Rate; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_Frequency; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nField; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flOscMult; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOscAdd; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x2C]; // offset 0x1E4
};
