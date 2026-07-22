#pragma once

struct FeSimdAnimStrayRadius_t  // sizeof 0x30, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[4][2] nNode; // offset 0x0, size 0x10, align 2
    fltx4 flMaxDist; // offset 0x10, size 0x10, align 16
    fltx4 flRelaxationFactor; // offset 0x20, size 0x10, align 16
};
