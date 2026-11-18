#pragma once

class CDOTA_Modifier_Brewmaster_Primal_Companion : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 cooldown_on_death; // offset 0x1AF8, size 0x4, align 4
    float32 cooldown_on_take_damage; // offset 0x1AFC, size 0x4, align 4
    int32 disable_distance; // offset 0x1B00, size 0x4, align 4
    int32 movement_slow_when_out_of_range; // offset 0x1B04, size 0x4, align 4
    bool m_bCanAttack; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    ParticleIndex_t m_nFxIndex; // offset 0x1B0C, size 0x4, align 255
    int32 cooldown_penalty_pct; // offset 0x1B10, size 0x4, align 4
    int32 bonus_brewling_hp; // offset 0x1B14, size 0x4, align 4
    int32 bonus_damage; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
