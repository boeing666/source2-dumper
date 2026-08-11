#pragma once

class CDOTA_Modifier_Marci_Unleash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 time_between_flurries; // offset 0x1A78, size 0x4, align 4
    int32 charges_per_flurry; // offset 0x1A7C, size 0x4, align 4
    int32 flurry_charge_increment; // offset 0x1A80, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1A84, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
};
