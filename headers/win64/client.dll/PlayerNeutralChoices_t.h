#pragma once

struct PlayerNeutralChoices_t  // sizeof 0x1B0, align 0xFF [vtable trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    AbilityID_t[45] m_vecTrinketChoices; // offset 0x8, size 0xB4, align 4
    AbilityID_t[45] m_vecEnhancementChoices; // offset 0xBC, size 0xB4, align 4
    int32[5] m_vecSelectedTrinkets; // offset 0x170, size 0x14, align 4
    int32[5] m_vecSelectedEnhancements; // offset 0x184, size 0x14, align 4
    int32[5] m_vecTimesCrafted; // offset 0x198, size 0x14, align 4
    char _pad_01AC[0x4]; // offset 0x1AC
};
