#pragma once

class C_OP_RampScalarSplineSimple : public CParticleFunctionOperator /*0x0*/  // sizeof 0x220, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_Rate; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartTime; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x2C]; // offset 0x1E4
    ParticleAttributeIndex_t m_nField; // offset 0x210, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bEaseOut; // offset 0x214, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0215[0xB]; // offset 0x215
};
