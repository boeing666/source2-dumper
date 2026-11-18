#pragma once

class CDOTA_Ability_Meepo_DividedWeStand : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    bool m_bInventoryUpdating; // offset 0x85B, size 0x1, align 1
    int32 m_nWhichDividedWeStand; // offset 0x85C, size 0x4, align 4
    int32 m_nNumDividedWeStand; // offset 0x860, size 0x4, align 4
    CHandle< CDOTA_Ability_Meepo_DividedWeStand > m_entPrimeDividedWeStand; // offset 0x864, size 0x4, align 4
    CHandle< CDOTA_Ability_Meepo_DividedWeStand > m_entNextDividedWeStand; // offset 0x868, size 0x4, align 4
    int32 m_iPendingUpgrades; // offset 0x86C, size 0x4, align 4
    CHandle< CBaseEntity > m_hHeldEntity; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
};
