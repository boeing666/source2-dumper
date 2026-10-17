#pragma once

struct EventGrantDefinition_ConsumableItemCharges_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    item_definition_index_t m_unItemDef; // offset 0x8, size 0x4, align 255
    uint32 m_unQuantity; // offset 0xC, size 0x4, align 4
};
