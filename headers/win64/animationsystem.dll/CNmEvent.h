#pragma once

class CNmEvent  // sizeof 0x20, align 0xFF [vtable abstract] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    NmPercent_t m_flStartTime; // offset 0x8, size 0x4, align 4
    NmPercent_t m_flDuration; // offset 0xC, size 0x4, align 4
    CGlobalSymbol m_syncID; // offset 0x10, size 0x8, align 8
    bool m_bClientOnly; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
