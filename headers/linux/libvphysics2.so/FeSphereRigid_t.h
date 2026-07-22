#pragma once

struct FeSphereRigid_t  // sizeof 0x20, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    fltx4 vSphere; // offset 0x0, size 0x10, align 16
    uint16 nNode; // offset 0x10, size 0x2, align 2
    uint16 nCollisionMask; // offset 0x12, size 0x2, align 2
    uint16 nVertexMapIndex; // offset 0x14, size 0x2, align 2
    uint16 nFlags; // offset 0x16, size 0x2, align 2
    char _pad_0018[0x8]; // offset 0x18
};
