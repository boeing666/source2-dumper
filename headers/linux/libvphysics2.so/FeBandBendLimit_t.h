#pragma once

struct FeBandBendLimit_t  // sizeof 0x14, align 0x4 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32 flDistMin; // offset 0x0, size 0x4, align 4
    float32 flDistMax; // offset 0x4, size 0x4, align 4
    uint16[6] nNode; // offset 0x8, size 0xC, align 2
};
