#pragma once

struct ItemTradeOption_t  // sizeof 0x80, align 0xFF [vtable] (server)
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_TradeInItem; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    ItemDraftItem_t m_ReceiveItem; // offset 0x38, size 0x40, align 255
    bool m_bHasBeenDrafted; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x3]; // offset 0x79
    ItemTradeOptionID_t m_nID; // offset 0x7C, size 0x4, align 255
};
