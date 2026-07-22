#pragma once

struct audioparams_t  // sizeof 0x78, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    Vector[8] localSound; // offset 0x8, size 0x60, align 4 | MNetworkEnable MNetworkEncoder
    int32 soundscapeIndex; // offset 0x68, size 0x4, align 4 | MNetworkEnable
    uint8 localBits; // offset 0x6C, size 0x1, align 1 | MNetworkEnable
    char _pad_006D[0x3]; // offset 0x6D
    int32 soundscapeEntityListIndex; // offset 0x70, size 0x4, align 4 | MNetworkEnable
    uint32 soundEventHash; // offset 0x74, size 0x4, align 4 | MNetworkEnable
};
