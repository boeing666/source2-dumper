#pragma once

class CDOTA_Modifier_Bloodseeker_Sanguivore : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 base_heal; // offset 0x1A78, size 0x4, align 4
    float32 half_bonus_aoe; // offset 0x1A7C, size 0x4, align 4
    float32 heal_hp_pct; // offset 0x1A80, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1A84, size 0x4, align 4
    int32 deny_lifesteal_reduction_pct; // offset 0x1A88, size 0x4, align 4
    int32 pure_damage_lifesteal_pct; // offset 0x1A8C, size 0x4, align 4
};
