#pragma once

struct EventGrantDefinition_CavernItem_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strRewardName; // offset 0x8, size 0x8, align 8
    CUtlString m_strImage; // offset 0x10, size 0x8, align 8
    EEvent m_eEventID; // offset 0x18, size 0x4, align 4
    uint8 m_unItemType; // offset 0x1C, size 0x1, align 1
    uint8 m_unQuantity; // offset 0x1D, size 0x1, align 1
    char _pad_001E[0x2]; // offset 0x1E
};
