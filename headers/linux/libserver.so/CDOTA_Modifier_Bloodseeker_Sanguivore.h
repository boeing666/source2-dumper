#pragma once

class CDOTA_Modifier_Bloodseeker_Sanguivore : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 base_heal; // offset 0x1AA8, size 0x4, align 4
    float32 half_bonus_aoe; // offset 0x1AAC, size 0x4, align 4
    float32 heal_hp_pct; // offset 0x1AB0, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1AB4, size 0x4, align 4
    int32 deny_lifesteal_reduction_pct; // offset 0x1AB8, size 0x4, align 4
    int32 pure_damage_lifesteal_pct; // offset 0x1ABC, size 0x4, align 4
};
