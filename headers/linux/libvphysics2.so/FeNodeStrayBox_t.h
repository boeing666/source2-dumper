#pragma once

struct FeNodeStrayBox_t  // sizeof 0x20, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    Vector vMin; // offset 0x0, size 0xC, align 4
    uint32 nFlags; // offset 0xC, size 0x4, align 4
    Vector vMax; // offset 0x10, size 0xC, align 4
    uint16[2] nNode; // offset 0x1C, size 0x4, align 2
};
