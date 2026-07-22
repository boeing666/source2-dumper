#pragma once

class C_DOTA_Ability_Ringmaster_TheBox : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bGrantedScepterCharges; // offset 0x824, size 0x1, align 1
    char _pad_0825[0x3]; // offset 0x825
    CUtlVector< CHandle< C_BaseEntity > > m_vecBoxedUnits; // offset 0x828, size 0x18, align 8
};
