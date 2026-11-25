#pragma once

class CCitadel_Pickup_Ability : public CCitadel_Pickup /*0x0*/  // sizeof 0xBA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB80]; // offset 0x0
    AbilityUpgradeBits_t m_nUpgradeBits; // offset 0xB80, size 0x2, align 2
    char _pad_0B82[0x2]; // offset 0xB82
    int32 m_nUpgradeLevel; // offset 0xB84, size 0x4, align 4
    CUtlStringToken m_unAbilityID; // offset 0xB88, size 0x4, align 4
    int32 m_nGoldCost; // offset 0xB8C, size 0x4, align 4
    bool m_bShowGoldCostInUI; // offset 0xB90, size 0x1, align 1
    char _pad_0B91[0xF]; // offset 0xB91
};
