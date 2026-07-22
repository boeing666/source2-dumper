#pragma once

struct FeStiffHingeBuild_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32 flMaxAngle; // offset 0x0, size 0x4, align 4
    float32 flStrength; // offset 0x4, size 0x4, align 4
    float32[3] flMotionBias; // offset 0x8, size 0xC, align 4
    uint16[3] nNode; // offset 0x14, size 0x6, align 2
    char _pad_001A[0x2]; // offset 0x1A
};
