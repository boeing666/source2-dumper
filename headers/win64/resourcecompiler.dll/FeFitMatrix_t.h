#pragma once

struct FeFitMatrix_t  // sizeof 0x40, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    CTransform bone; // offset 0x0, size 0x20, align 16
    Vector vCenter; // offset 0x20, size 0xC, align 4
    uint16 nEnd; // offset 0x2C, size 0x2, align 2
    uint16 nNode; // offset 0x2E, size 0x2, align 2
    uint16 nBeginDynamic; // offset 0x30, size 0x2, align 2
    char _pad_0032[0xE]; // offset 0x32
};
