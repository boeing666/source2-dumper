#pragma once

struct PhysBlockHeader_t  // sizeof 0x10, align 0x8 [trivial_ctor trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 nSaved; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    uint64 pWorldObject; // offset 0x8, size 0x8, align 8
};
