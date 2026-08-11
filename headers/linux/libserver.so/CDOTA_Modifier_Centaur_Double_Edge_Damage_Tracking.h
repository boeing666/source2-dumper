#pragma once

class CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 stack_duration; // offset 0x1A78, size 0x4, align 4
    int32 pct_of_incoming_damage_as_bonus; // offset 0x1A7C, size 0x4, align 4
    char _pad_1A80[0x18]; // offset 0x1A80
    float32 m_fTotalDamage; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
