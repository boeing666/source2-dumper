#pragma once

struct TreeModelReplacement_t  // sizeof 0x238, align 0xFF [vtable] (server)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nBinaryObjectID; // offset 0x30, size 0x4, align 4
    char[512] m_szModel; // offset 0x34, size 0x200, align 1
    int32 m_nChangeToken; // offset 0x234, size 0x4, align 4
};
