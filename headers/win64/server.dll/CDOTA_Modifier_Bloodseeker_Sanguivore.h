#pragma once

class CDOTA_Modifier_Bloodseeker_Sanguivore : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 base_heal; // offset 0x1AF8, size 0x4, align 4
    float32 half_bonus_aoe; // offset 0x1AFC, size 0x4, align 4
    float32 heal_hp_pct; // offset 0x1B00, size 0x4, align 4
    int32 creep_lifesteal_reduction_pct; // offset 0x1B04, size 0x4, align 4
    int32 deny_lifesteal_reduction_pct; // offset 0x1B08, size 0x4, align 4
    int32 pure_damage_lifesteal_pct; // offset 0x1B0C, size 0x4, align 4
};
