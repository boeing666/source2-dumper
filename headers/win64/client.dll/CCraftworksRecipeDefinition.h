#pragma once

class CCraftworksRecipeDefinition  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CraftworksRecipeID_t m_unRecipeID; // offset 0x0, size 0x1, align 255
    CraftworksRecipeTierID_t m_unRecipeTierID; // offset 0x1, size 0x1, align 255
    char _pad_0002[0x6]; // offset 0x2
    CUtlString m_strLocName; // offset 0x8, size 0x8, align 8
    CUtlString m_strRewardAction; // offset 0x10, size 0x8, align 8
    bool m_bSeasonalReward; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
    CUtlVector< CCraftworksRecipeComponentQuantity > m_vecComponents; // offset 0x20, size 0x18, align 8
};
