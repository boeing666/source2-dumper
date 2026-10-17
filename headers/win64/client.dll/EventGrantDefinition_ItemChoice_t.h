#pragma once

struct EventGrantDefinition_ItemChoice_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    uint8 m_unChoiceCount; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
    eEconItemOrigin m_eOrigin; // offset 0xC, size 0x4, align 4
    EEconItemQuality m_eQuality; // offset 0x10, size 0x4, align 4
    unacknowledged_item_inventory_positions_t m_eAckPos; // offset 0x14, size 0x4, align 4
    bool m_bTradeable; // offset 0x18, size 0x1, align 1
    bool m_bGiftable; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x6]; // offset 0x1A
    CUtlString m_strLootList; // offset 0x20, size 0x8, align 8
};
