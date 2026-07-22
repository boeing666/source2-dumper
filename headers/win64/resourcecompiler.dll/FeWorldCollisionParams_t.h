#pragma once

struct FeWorldCollisionParams_t  // sizeof 0xC, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    float32 flWorldFriction; // offset 0x0, size 0x4, align 4
    float32 flGroundFriction; // offset 0x4, size 0x4, align 4
    uint16 nListBegin; // offset 0x8, size 0x2, align 2
    uint16 nListEnd; // offset 0xA, size 0x2, align 2
};
