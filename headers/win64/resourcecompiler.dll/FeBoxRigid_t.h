#pragma once

struct FeBoxRigid_t  // sizeof 0x40, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    CTransform tmFrame2; // offset 0x0, size 0x20, align 16
    uint16 nNode; // offset 0x20, size 0x2, align 2
    uint16 nCollisionMask; // offset 0x22, size 0x2, align 2
    Vector vSize; // offset 0x24, size 0xC, align 4
    uint16 nVertexMapIndex; // offset 0x30, size 0x2, align 2
    uint16 nFlags; // offset 0x32, size 0x2, align 2
    char _pad_0034[0xC]; // offset 0x34
};
