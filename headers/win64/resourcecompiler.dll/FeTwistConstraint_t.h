#pragma once

struct FeTwistConstraint_t  // sizeof 0xC, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 nNodeOrient; // offset 0x0, size 0x2, align 2
    uint16 nNodeEnd; // offset 0x2, size 0x2, align 2
    float32 flTwistRelax; // offset 0x4, size 0x4, align 4
    float32 flSwingRelax; // offset 0x8, size 0x4, align 4
};
