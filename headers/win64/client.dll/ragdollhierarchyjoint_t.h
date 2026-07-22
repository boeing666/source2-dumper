#pragma once

struct ragdollhierarchyjoint_t  // sizeof 0x10, align 0x8 [trivial_ctor trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 parentIndex; // offset 0x0, size 0x4, align 4
    int32 childIndex; // offset 0x4, size 0x4, align 4
    char _pad_0008[0x8]; // offset 0x8
};
