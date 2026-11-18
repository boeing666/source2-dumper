#pragma once

class CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 stack_duration; // offset 0x1AF8, size 0x4, align 4
    int32 pct_of_incoming_damage_as_bonus; // offset 0x1AFC, size 0x4, align 4
    char _pad_1B00[0x18]; // offset 0x1B00
    float32 m_fTotalDamage; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
