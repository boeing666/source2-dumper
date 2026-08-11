#pragma once

class CDOTA_Ability_AghsFort_Ravage_Potion : public CDOTA_Item /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x930]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hEntsHit; // offset 0x930, size 0x18, align 8
    int32 damage; // offset 0x948, size 0x4, align 4
    float32 duration; // offset 0x94C, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x950, size 0x4, align 4
    char _pad_0954[0x4]; // offset 0x954
};
