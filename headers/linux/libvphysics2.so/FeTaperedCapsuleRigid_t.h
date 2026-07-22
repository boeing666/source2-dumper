#pragma once

struct FeTaperedCapsuleRigid_t  // sizeof 0x30, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    fltx4[2] vSphere; // offset 0x0, size 0x20, align 16
    uint16 nNode; // offset 0x20, size 0x2, align 2
    uint16 nCollisionMask; // offset 0x22, size 0x2, align 2
    uint16 nVertexMapIndex; // offset 0x24, size 0x2, align 2
    uint16 nFlags; // offset 0x26, size 0x2, align 2
    char _pad_0028[0x8]; // offset 0x28
};
