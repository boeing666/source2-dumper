#pragma once

struct EventGrantDefinition_LootList_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strLootList; // offset 0x8, size 0x8, align 8
    eEconItemOrigin m_eOrigin; // offset 0x10, size 0x4, align 4
    unacknowledged_item_inventory_positions_t m_eAckPos; // offset 0x14, size 0x4, align 4
    uint32 m_unQuantity; // offset 0x18, size 0x4, align 4
    bool m_bDisableTrade; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    CUtlString m_strRewardName; // offset 0x20, size 0x8, align 8
    CUtlString m_strRewardDescription; // offset 0x28, size 0x8, align 8
    CUtlString m_strRewardFlavor; // offset 0x30, size 0x8, align 8
    CUtlString m_strImage; // offset 0x38, size 0x8, align 8
    CUtlString m_strScene; // offset 0x40, size 0x8, align 8
};
