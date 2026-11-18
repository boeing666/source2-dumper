#pragma once

struct PlayerNeutralChoices_t  // sizeof 0x158, align 0xFF [vtable trivial_dtor] (client)
{
    char _pad_0000[0x8]; // offset 0x0
    AbilityID_t[36] m_vecTrinketChoices; // offset 0x8, size 0x90, align 4
    AbilityID_t[36] m_vecEnhancementChoices; // offset 0x98, size 0x90, align 4
    int32[4] m_vecSelectedTrinkets; // offset 0x128, size 0x10, align 4
    int32[4] m_vecSelectedEnhancements; // offset 0x138, size 0x10, align 4
    int32[4] m_vecTimesCrafted; // offset 0x148, size 0x10, align 4
};
