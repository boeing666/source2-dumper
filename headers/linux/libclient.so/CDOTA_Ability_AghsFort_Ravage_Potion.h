#pragma once

class CDOTA_Ability_AghsFort_Ravage_Potion : public C_DOTA_Item /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hEntsHit; // offset 0x8D8, size 0x18, align 8
    int32 damage; // offset 0x8F0, size 0x4, align 4
    float32 duration; // offset 0x8F4, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x4]; // offset 0x8FC
};
