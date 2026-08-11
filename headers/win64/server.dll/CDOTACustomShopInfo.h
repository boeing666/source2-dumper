#pragma once

class CDOTACustomShopInfo  // sizeof 0x198, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    char[256] m_CustomShopName; // offset 0x30, size 0x100, align 1
    CUtlVectorEmbeddedNetworkVar< CDOTACustomShopItemInfo > m_CustomShopItems; // offset 0x130, size 0x68, align 8
};
