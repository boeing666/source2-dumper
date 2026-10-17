#pragma once

class CDOTA_Modifier_Marci_Unleash : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 time_between_flurries; // offset 0x1AA8, size 0x4, align 4
    int32 charges_per_flurry; // offset 0x1AAC, size 0x4, align 4
    int32 flurry_charge_increment; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_movespeed; // offset 0x1AB4, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB8, size 0x18, align 8
};
