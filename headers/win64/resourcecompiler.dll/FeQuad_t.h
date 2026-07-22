#pragma once

struct FeQuad_t  // sizeof 0x4C, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[4] nNode; // offset 0x0, size 0x8, align 2
    float32 flSlack; // offset 0x8, size 0x4, align 4
    Vector4D[4] vShape; // offset 0xC, size 0x40, align 4
};
