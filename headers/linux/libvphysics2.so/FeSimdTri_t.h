#pragma once

struct FeSimdTri_t  // sizeof 0x80, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint32[4][3] nNode; // offset 0x0, size 0x30, align 4
    fltx4 w1; // offset 0x30, size 0x10, align 16
    fltx4 w2; // offset 0x40, size 0x10, align 16
    fltx4 v1x; // offset 0x50, size 0x10, align 16
    FourVectors2D v2; // offset 0x60, size 0x20, align 16
};
