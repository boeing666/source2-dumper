#pragma once

struct InventoryQuickBuyState_t  // sizeof 0xD0, align 0xFF [vtable] (server)
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< QuickBuySlot_t > m_vecItemSlots; // offset 0x8, size 0x68, align 8
    int32 m_nTotalSlotCountIncludingOverflow; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
    QuickBuySlot_t m_stickyItemSlot; // offset 0x78, size 0x58, align 255
};
