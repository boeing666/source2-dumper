#pragma once

class CNmTargetWarpEvent : public CNmEvent /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    NmTargetWarpRule_t m_rule; // offset 0x18, size 0x1, align 1
    NmTargetWarpAlgorithm_t m_algorithm; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x6]; // offset 0x1A
};
