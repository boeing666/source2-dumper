#pragma once

struct sky3dparams_t  // sizeof 0x90, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    int16 scale; // offset 0x8, size 0x2, align 2
    char _pad_000A[0x2]; // offset 0xA
    VectorWS origin; // offset 0xC, size 0xC, align 4
    bool bClip3DSkyBoxNearToWorldFar; // offset 0x18, size 0x1, align 1 | MNotSaved
    char _pad_0019[0x3]; // offset 0x19
    float32 flClip3DSkyBoxNearToWorldFarOffset; // offset 0x1C, size 0x4, align 4 | MNotSaved
    fogparams_t fog; // offset 0x20, size 0x68, align 8 | MNotSaved
    WorldGroupId_t m_nWorldGroupID; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
};
