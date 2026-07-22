#pragma once

class C_DOTA_Ability_Visage_SummonFamiliars : public C_DOTABaseAbility /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    char[260] szUnitName; // offset 0x6A8, size 0x104, align 1
    char _pad_07AC[0x4]; // offset 0x7AC
    CUtlVector< CHandle< C_BaseEntity > > m_hExistingUnits; // offset 0x7B0, size 0x18, align 8
    char _pad_07C8[0x28]; // offset 0x7C8
    bool m_bGainedTalentDamage; // offset 0x7F0, size 0x1, align 1
    char _pad_07F1[0x7]; // offset 0x7F1
};
