#pragma once

class INavObstacle  // sizeof 0x20, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_nDontBlockMovableMeshId; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    uint64 m_nId; // offset 0x10, size 0x8, align 8
    bool m_bInitDontBlockMovableMeshCalled; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
