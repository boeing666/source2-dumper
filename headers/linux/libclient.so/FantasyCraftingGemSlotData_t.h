#pragma once

struct FantasyCraftingGemSlotData_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyGemSlot_t m_unGemSlot; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    Fantasy_Gem_Type m_eGemType; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    int32 m_nRequiredTabletLevel; // offset 0x8, size 0x4, align 4 | MPropertyDescription
};
