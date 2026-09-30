#pragma once

struct EventGrantDefinition_Item_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    item_definition_index_t m_unItemDef; // offset 0x8, size 0x4, align 255
    eEconItemOrigin m_eOrigin; // offset 0xC, size 0x4, align 4
    EEconItemQuality m_eQuality; // offset 0x10, size 0x4, align 4
    unacknowledged_item_inventory_positions_t m_eAckPos; // offset 0x14, size 0x4, align 4
    uint32 m_unQuantity; // offset 0x18, size 0x4, align 4
    bool m_bDisableTrade; // offset 0x1C, size 0x1, align 1
    bool m_bOnlyGrantIfNotOwned; // offset 0x1D, size 0x1, align 1
    char _pad_001E[0x2]; // offset 0x1E
    CUtlString m_strRewardDescription; // offset 0x20, size 0x8, align 8
};
