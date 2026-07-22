#pragma once

struct hudtextparms_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Color color1; // offset 0x0, size 0x4, align 1
    Color color2; // offset 0x4, size 0x4, align 1
    uint8 effect; // offset 0x8, size 0x1, align 1
    uint8 channel; // offset 0x9, size 0x1, align 1
    char _pad_000A[0x2]; // offset 0xA
    float32 x; // offset 0xC, size 0x4, align 4
    float32 y; // offset 0x10, size 0x4, align 4
};
