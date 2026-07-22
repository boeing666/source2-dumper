#pragma once

struct WeaponPurchaseCount_t  // sizeof 0x38, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    uint16 m_nItemDefIndex; // offset 0x30, size 0x2, align 2
    uint16 m_nCount; // offset 0x32, size 0x2, align 2
    char _pad_0034[0x4]; // offset 0x34
};
