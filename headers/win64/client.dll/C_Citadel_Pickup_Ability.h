#pragma once

class C_Citadel_Pickup_Ability : public C_Citadel_Pickup /*0x0*/  // sizeof 0xEF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xED8]; // offset 0x0
    AbilityUpgradeBits_t m_nUpgradeBits; // offset 0xED8, size 0x2, align 2
    char _pad_0EDA[0x2]; // offset 0xEDA
    int32 m_nUpgradeLevel; // offset 0xEDC, size 0x4, align 4
    CUtlStringToken m_unAbilityID; // offset 0xEE0, size 0x4, align 4
    int32 m_nGoldCost; // offset 0xEE4, size 0x4, align 4
    bool m_bShowGoldCostInUI; // offset 0xEE8, size 0x1, align 1
    char _pad_0EE9[0xF]; // offset 0xEE9
};
