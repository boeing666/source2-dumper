#pragma once

class C_DOTA_Ability_Meepo_DividedWeStand : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_nWhichDividedWeStand; // offset 0x6A8, size 0x4, align 4
    int32 m_nNumDividedWeStand; // offset 0x6AC, size 0x4, align 4
    CHandle< C_DOTA_Ability_Meepo_DividedWeStand > m_entPrimeDividedWeStand; // offset 0x6B0, size 0x4, align 4
    CHandle< C_DOTA_Ability_Meepo_DividedWeStand > m_entNextDividedWeStand; // offset 0x6B4, size 0x4, align 4
};
