#pragma once

class CDOTA_Ability_Visage_SummonFamiliars : public CDOTABaseAbility /*0x0*/  // sizeof 0x18A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    char[4096] szUnitName; // offset 0x85B, size 0x1000, align 1
    char _pad_185B[0x5]; // offset 0x185B
    CUtlVector< CHandle< CBaseEntity > > m_hExistingUnits; // offset 0x1860, size 0x18, align 8
    char _pad_1878[0x28]; // offset 0x1878
    bool m_bGainedTalentDamage; // offset 0x18A0, size 0x1, align 1
    char _pad_18A1[0x7]; // offset 0x18A1
};
