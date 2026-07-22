#pragma once

struct FeRodConstraint_t  // sizeof 0x14, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[2] nNode; // offset 0x0, size 0x4, align 2
    float32 flMaxDist; // offset 0x4, size 0x4, align 4
    float32 flMinDist; // offset 0x8, size 0x4, align 4
    float32 flWeight0; // offset 0xC, size 0x4, align 4
    float32 flRelaxationFactor; // offset 0x10, size 0x4, align 4
};
