#pragma once

struct FantasyCraftingGemData_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    Fantasy_Gem_Type m_eType; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_sLocName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlVector< Fantasy_Scoring > m_eStats; // offset 0x10, size 0x18, align 8 | MPropertyDescription
};
