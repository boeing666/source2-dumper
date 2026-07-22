#pragma once

struct SellbackPurchaseEntry_t  // sizeof 0x48, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    uint16 m_unDefIdx; // offset 0x30, size 0x2, align 2
    char _pad_0032[0x2]; // offset 0x32
    int32 m_nCost; // offset 0x34, size 0x4, align 4
    int32 m_nPrevArmor; // offset 0x38, size 0x4, align 4
    bool m_bPrevHelmet; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    CEntityHandle m_hItem; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
