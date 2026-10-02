#pragma once

class C_Citadel_Pickup_Ability : public C_Citadel_Pickup /*0x0*/  // sizeof 0xF50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF30]; // offset 0x0
    AbilityUpgradeBits_t m_nUpgradeBits; // offset 0xF30, size 0x2, align 2
    char _pad_0F32[0x2]; // offset 0xF32
    int32 m_nUpgradeLevel; // offset 0xF34, size 0x4, align 4
    CUtlStringToken m_unAbilityID; // offset 0xF38, size 0x4, align 4
    int32 m_nGoldCost; // offset 0xF3C, size 0x4, align 4
    bool m_bShowGoldCostInUI; // offset 0xF40, size 0x1, align 1
    char _pad_0F41[0xF]; // offset 0xF41
};
