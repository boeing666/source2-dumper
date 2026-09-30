#pragma once

struct ragdollelement_t  // sizeof 0x30, align 0x8 [trivial_ctor trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    Vector originParentSpace; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x14]; // offset 0xC
    int32 parentIndex; // offset 0x20, size 0x4, align 4
    float32 m_flRadius; // offset 0x24, size 0x4, align 4
    int32 m_nHeight; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
