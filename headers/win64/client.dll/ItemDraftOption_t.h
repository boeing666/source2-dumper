#pragma once

struct ItemDraftOption_t  // sizeof 0xF8, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    ItemDraftItem_t m_Item; // offset 0x30, size 0x40, align 255
    ItemDraftItem_t m_BonusItem1; // offset 0x70, size 0x40, align 255
    ItemDraftItem_t m_BonusItem2; // offset 0xB0, size 0x40, align 255
    bool m_bHasBeenDrafted; // offset 0xF0, size 0x1, align 1
    bool m_bRare; // offset 0xF1, size 0x1, align 1
    char _pad_00F2[0x6]; // offset 0xF2
};
