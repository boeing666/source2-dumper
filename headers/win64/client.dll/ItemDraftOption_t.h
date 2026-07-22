#pragma once

struct ItemDraftOption_t  // sizeof 0xE0, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    ItemDraftItem_t m_Item; // offset 0x30, size 0x38, align 255 | MNetworkEnable
    ItemDraftItem_t m_BonusItem1; // offset 0x68, size 0x38, align 255 | MNetworkEnable
    ItemDraftItem_t m_BonusItem2; // offset 0xA0, size 0x38, align 255 | MNetworkEnable
    bool m_bHasBeenDrafted; // offset 0xD8, size 0x1, align 1 | MNetworkEnable
    bool m_bRare; // offset 0xD9, size 0x1, align 1 | MNetworkEnable
    char _pad_00DA[0x6]; // offset 0xDA
};
