#pragma once

class CDOTA_Modifier_Marci_Unleash : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 time_between_flurries; // offset 0x1A58, size 0x4, align 4
    int32 charges_per_flurry; // offset 0x1A5C, size 0x4, align 4
    int32 flurry_charge_increment; // offset 0x1A60, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1A64, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A68, size 0x18, align 8
};
