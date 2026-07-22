#pragma once

class CNmTargetWarpEvent : public CNmEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    NmTargetWarpRule_t m_rule; // offset 0x20, size 0x1, align 1
    NmTargetWarpAlgorithm_t m_algorithm; // offset 0x21, size 0x1, align 1
    char _pad_0022[0x6]; // offset 0x22
};
