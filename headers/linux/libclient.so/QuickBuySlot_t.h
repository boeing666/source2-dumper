#pragma once

struct QuickBuySlot_t  // sizeof 0x58, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    AbilityID_t m_nAbilityID; // offset 0x30, size 0x4, align 255
    int32 m_nTopLevelItem; // offset 0x34, size 0x4, align 4
    AbilityID_t m_nTopLevelItemAbilityID; // offset 0x38, size 0x4, align 255
    QuickBuyPurchasable_t m_ePurchasableState; // offset 0x3C, size 0x4, align 4
    QuickBuyPurchasable_t m_ePurchasableAccumState; // offset 0x40, size 0x4, align 4
    bool m_bMarkedForBuy; // offset 0x44, size 0x1, align 1
    char _pad_0045[0x3]; // offset 0x45
    int32 m_nParity; // offset 0x48, size 0x4, align 4
    bool m_bSticky; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    QuickBuyPurchasable_t m_ePrevPurchasableState; // offset 0x50, size 0x4, align 4
    bool m_bNewlyActionable; // offset 0x54, size 0x1, align 1
    bool m_bPurchaseInFlight; // offset 0x55, size 0x1, align 1
    char _pad_0056[0x2]; // offset 0x56
};
