#pragma once

struct FeHingeLimit_t  // sizeof 0x20, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[6] nNode; // offset 0x0, size 0xC, align 2
    uint32 nFlags; // offset 0xC, size 0x4, align 4
    float32 flWeight4; // offset 0x10, size 0x4, align 4
    float32 flWeight5; // offset 0x14, size 0x4, align 4
    float32 flAngleCenter; // offset 0x18, size 0x4, align 4
    float32 flAngleExtents; // offset 0x1C, size 0x4, align 4
};
