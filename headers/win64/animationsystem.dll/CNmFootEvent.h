#pragma once

class CNmFootEvent : public CNmEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    NmFootPhase_t m_phase; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
