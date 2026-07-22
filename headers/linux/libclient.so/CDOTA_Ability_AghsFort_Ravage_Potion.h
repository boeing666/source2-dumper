#pragma once

class CDOTA_Ability_AghsFort_Ravage_Potion : public C_DOTA_Item /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hEntsHit; // offset 0x8D0, size 0x18, align 8
    int32 damage; // offset 0x8E8, size 0x4, align 4
    float32 duration; // offset 0x8EC, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x8F0, size 0x4, align 4
    char _pad_08F4[0x4]; // offset 0x8F4
};
