#pragma once

struct ItemDraftItem_t  // sizeof 0x38, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_unItemID; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    int32 m_nUpgradeBits; // offset 0x34, size 0x4, align 4 | MNetworkEnable
};
