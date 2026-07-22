#pragma once

struct FeTaperedCapsuleStretch_t  // sizeof 0x10, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[2] nNode; // offset 0x0, size 0x4, align 2
    uint16 nCollisionMask; // offset 0x4, size 0x2, align 2
    uint16 nDummy; // offset 0x6, size 0x2, align 2 | MPropertySuppressField
    float32[2] flRadius; // offset 0x8, size 0x8, align 4
};
