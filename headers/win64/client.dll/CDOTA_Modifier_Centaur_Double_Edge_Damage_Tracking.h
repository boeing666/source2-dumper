#pragma once

class CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 stack_duration; // offset 0x1A58, size 0x4, align 4
    int32 pct_of_incoming_damage_as_bonus; // offset 0x1A5C, size 0x4, align 4
    char _pad_1A60[0x18]; // offset 0x1A60
    float32 m_fTotalDamage; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
