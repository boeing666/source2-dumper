#pragma once

struct FeFollowNode_t  // sizeof 0x8, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 nParentNode; // offset 0x0, size 0x2, align 2
    uint16 nChildNode; // offset 0x2, size 0x2, align 2
    float32 flWeight; // offset 0x4, size 0x4, align 4
};
