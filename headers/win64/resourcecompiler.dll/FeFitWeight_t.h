#pragma once

struct FeFitWeight_t  // sizeof 0x8, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32 flWeight; // offset 0x0, size 0x4, align 4
    uint16 nNode; // offset 0x4, size 0x2, align 2
    uint16 nDummy; // offset 0x6, size 0x2, align 2
};
