#pragma once

struct RotatorQueueEntry_t  // sizeof 0x20, align 0x10 [trivial_ctor trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    Quaternion qTarget; // offset 0x0, size 0x10, align 16
    RotatorTargetSpace_t eSpace; // offset 0x10, size 0x4, align 4
    char _pad_0014[0xC]; // offset 0x14
};
