#pragma once

struct FeHingeLimitBuild_t  // sizeof 0x18, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[6] nNode; // offset 0x0, size 0xC, align 2
    uint32 nFlags; // offset 0xC, size 0x4, align 4
    float32 flLimitCW; // offset 0x10, size 0x4, align 4
    float32 flLimitCCW; // offset 0x14, size 0x4, align 4
};
