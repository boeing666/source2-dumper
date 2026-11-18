#pragma once

class C_DOTA_Ability_Ringmaster_TheBox : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    bool m_bGrantedScepterCharges; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x7]; // offset 0x829
    CUtlVector< CHandle< C_BaseEntity > > m_vecBoxedUnits; // offset 0x830, size 0x18, align 8
};
