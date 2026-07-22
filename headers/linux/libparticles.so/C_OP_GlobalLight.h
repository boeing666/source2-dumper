#pragma once

class C_OP_GlobalLight : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_flScale; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bClampLowerRange; // offset 0x1D4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bClampUpperRange; // offset 0x1D5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D6[0x2]; // offset 0x1D6
};
