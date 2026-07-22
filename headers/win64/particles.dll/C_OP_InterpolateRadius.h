#pragma once

class C_OP_InterpolateRadius : public CParticleFunctionOperator /*0x0*/  // sizeof 0x220, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    float32 m_flStartTime; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndTime; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStartScale; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEndScale; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bEaseInAndOut; // offset 0x1E8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E9[0x3]; // offset 0x1E9
    float32 m_flBias; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F0[0x30]; // offset 0x1F0
};
