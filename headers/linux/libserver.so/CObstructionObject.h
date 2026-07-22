#pragma once

class CObstructionObject  // sizeof 0x18, align 0xFF [vtable abstract trivial_dtor] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int32 m_nObstructionProperties; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
