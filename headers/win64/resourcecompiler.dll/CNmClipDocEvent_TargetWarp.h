#pragma once

class CNmClipDocEvent_TargetWarp : public CNmClipDocEvent /*0x0*/  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    NmTargetWarpRule_t m_rule; // offset 0x10, size 0x1, align 1
    NmTargetWarpAlgorithm_t m_algorithm; // offset 0x11, size 0x1, align 1
    char _pad_0012[0x6]; // offset 0x12
};
