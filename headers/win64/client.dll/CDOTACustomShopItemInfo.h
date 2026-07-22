#pragma once

class CDOTACustomShopItemInfo  // sizeof 0x138, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    AbilityID_t m_nAbilityID; // offset 0x30, size 0x4, align 255
    int32 m_nStockCount; // offset 0x34, size 0x4, align 4
    char[256] m_Category; // offset 0x38, size 0x100, align 1
};
