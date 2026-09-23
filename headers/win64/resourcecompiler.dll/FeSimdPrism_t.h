#pragma once

struct FeSimdPrism_t  // sizeof 0x40, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[4][6] nNode; // offset 0x0, size 0x30, align 2
    fltx4 flVolume; // offset 0x30, size 0x10, align 16
};
