#pragma once

struct screenfade_t  // sizeof 0x28, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 Speed; // offset 0x0, size 0x4, align 4
    float32 End; // offset 0x4, size 0x4, align 4
    float32 Reset; // offset 0x8, size 0x4, align 4
    Color m_Color; // offset 0xC, size 0x4, align 1
    int32 Flags; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x14]; // offset 0x14
};
