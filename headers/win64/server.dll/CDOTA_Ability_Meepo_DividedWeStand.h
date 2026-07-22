#pragma once

class CDOTA_Ability_Meepo_DividedWeStand : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    bool m_bInventoryUpdating; // offset 0x580, size 0x1, align 1
    char _pad_0581[0x3]; // offset 0x581
    int32 m_nWhichDividedWeStand; // offset 0x584, size 0x4, align 4
    int32 m_nNumDividedWeStand; // offset 0x588, size 0x4, align 4
    CHandle< CDOTA_Ability_Meepo_DividedWeStand > m_entPrimeDividedWeStand; // offset 0x58C, size 0x4, align 4
    CHandle< CDOTA_Ability_Meepo_DividedWeStand > m_entNextDividedWeStand; // offset 0x590, size 0x4, align 4
    int32 m_iPendingUpgrades; // offset 0x594, size 0x4, align 4
};
