#pragma once

class C_DOTA_Ability_Visage_SummonFamiliars : public C_DOTABaseAbility /*0x0*/  // sizeof 0x1870, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    char[4096] szUnitName; // offset 0x824, size 0x1000, align 1
    char _pad_1824[0x4]; // offset 0x1824
    CUtlVector< CHandle< C_BaseEntity > > m_hExistingUnits; // offset 0x1828, size 0x18, align 8
    char _pad_1840[0x28]; // offset 0x1840
    bool m_bGainedTalentDamage; // offset 0x1868, size 0x1, align 1
    char _pad_1869[0x7]; // offset 0x1869
};
