#pragma once

class CCitadel_Pickup_Ability : public CCitadel_Pickup /*0x0*/  // sizeof 0xB40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB20]; // offset 0x0
    AbilityUpgradeBits_t m_nUpgradeBits; // offset 0xB20, size 0x2, align 2
    char _pad_0B22[0x2]; // offset 0xB22
    int32 m_nUpgradeLevel; // offset 0xB24, size 0x4, align 4
    CUtlStringToken m_unAbilityID; // offset 0xB28, size 0x4, align 4
    int32 m_nGoldCost; // offset 0xB2C, size 0x4, align 4
    bool m_bShowGoldCostInUI; // offset 0xB30, size 0x1, align 1
    char _pad_0B31[0xF]; // offset 0xB31
};
