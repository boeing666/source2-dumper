#pragma once

class CDOTA_Ability_Visage_SummonFamiliars : public CDOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    char[260] szUnitName; // offset 0x580, size 0x104, align 1
    char _pad_0684[0x4]; // offset 0x684
    CUtlVector< CHandle< CBaseEntity > > m_hExistingUnits; // offset 0x688, size 0x18, align 8
    char _pad_06A0[0x28]; // offset 0x6A0
    bool m_bGainedTalentDamage; // offset 0x6C8, size 0x1, align 1
    char _pad_06C9[0x7]; // offset 0x6C9
};
