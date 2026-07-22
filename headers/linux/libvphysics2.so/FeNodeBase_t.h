#pragma once

struct FeNodeBase_t  // sizeof 0x20, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 nNode; // offset 0x0, size 0x2, align 2
    uint16[3] nDummy; // offset 0x2, size 0x6, align 2
    uint16 nNodeX0; // offset 0x8, size 0x2, align 2
    uint16 nNodeX1; // offset 0xA, size 0x2, align 2
    uint16 nNodeY0; // offset 0xC, size 0x2, align 2
    uint16 nNodeY1; // offset 0xE, size 0x2, align 2
    QuaternionStorage qAdjust; // offset 0x10, size 0x10, align 4
};
