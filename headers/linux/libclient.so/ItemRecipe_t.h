#pragma once

struct ItemRecipe_t  // sizeof 0x20, align 0xFF (client)
{
    CUtlVector< AbilityID_t > m_vecRecipeComponents; // offset 0x0, size 0x18, align 8
    int32 m_nPrimaryComponentIndex; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
