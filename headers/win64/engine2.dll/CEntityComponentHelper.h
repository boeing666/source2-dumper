#pragma once

class CEntityComponentHelper  // sizeof 0x28, align 0xFF [vtable abstract trivial_dtor] (entity2)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_flags; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    EntComponentInfo_t* m_pInfo; // offset 0x10, size 0x8, align 8
    int32 m_nPriority; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CEntityComponentHelper* m_pNext; // offset 0x20, size 0x8, align 8
};
