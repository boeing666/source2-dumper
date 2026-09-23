#pragma once

struct FePrism_t  // sizeof 0x10, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[6] nNode; // offset 0x0, size 0xC, align 2
    float32 flVolume; // offset 0xC, size 0x4, align 4
};
