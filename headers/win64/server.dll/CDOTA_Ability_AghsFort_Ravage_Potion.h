#pragma once

class CDOTA_Ability_AghsFort_Ravage_Potion : public CDOTA_Item /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hEntsHit; // offset 0x658, size 0x18, align 8
    int32 damage; // offset 0x670, size 0x4, align 4
    float32 duration; // offset 0x674, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x678, size 0x4, align 4
    char _pad_067C[0x4]; // offset 0x67C
};
