#pragma once

struct FantasyCraftingTabletData_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyTabletID_t m_unID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    Fantasy_Roles m_eRole; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    CUtlVector< FantasyCraftingGemSlotData_t > m_vecGemSlots; // offset 0x8, size 0x18, align 8
};
