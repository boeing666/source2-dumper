#pragma once

struct ItemDraftItem_t  // sizeof 0x40, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_unItemID; // offset 0x30, size 0x4, align 4
    AbilityUpgradeBits_t m_nUpgradeBits; // offset 0x34, size 0x2, align 2
    char _pad_0036[0x2]; // offset 0x36
    int32 m_nAbilityLevel; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
