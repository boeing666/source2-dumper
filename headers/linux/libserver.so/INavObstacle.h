#pragma once

class INavObstacle  // sizeof 0x10, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint64 m_nId; // offset 0x8, size 0x8, align 8
};
