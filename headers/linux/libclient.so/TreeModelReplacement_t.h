#pragma once

struct TreeModelReplacement_t  // sizeof 0x238, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nBinaryObjectID; // offset 0x30, size 0x4, align 4
    char[512] m_szModel; // offset 0x34, size 0x200, align 1
    char _pad_0234[0x4]; // offset 0x234
};
