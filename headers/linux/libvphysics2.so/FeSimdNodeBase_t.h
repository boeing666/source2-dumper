#pragma once

struct FeSimdNodeBase_t  // sizeof 0x70, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[4] nNode; // offset 0x0, size 0x8, align 2
    uint16[4] nNodeX0; // offset 0x8, size 0x8, align 2
    uint16[4] nNodeX1; // offset 0x10, size 0x8, align 2
    uint16[4] nNodeY0; // offset 0x18, size 0x8, align 2
    uint16[4] nNodeY1; // offset 0x20, size 0x8, align 2
    uint16[4] nDummy; // offset 0x28, size 0x8, align 2
    FourQuaternions qAdjust; // offset 0x30, size 0x40, align 255
};
