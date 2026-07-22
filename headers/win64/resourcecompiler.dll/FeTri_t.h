#pragma once

struct FeTri_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[3] nNode; // offset 0x0, size 0x6, align 2
    char _pad_0006[0x2]; // offset 0x6
    float32 w1; // offset 0x8, size 0x4, align 4
    float32 w2; // offset 0xC, size 0x4, align 4
    float32 v1x; // offset 0x10, size 0x4, align 4
    Vector2D v2; // offset 0x14, size 0x8, align 4
};
