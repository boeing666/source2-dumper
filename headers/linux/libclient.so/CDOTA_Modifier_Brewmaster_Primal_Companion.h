#pragma once

class CDOTA_Modifier_Brewmaster_Primal_Companion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 cooldown_on_death; // offset 0x1A58, size 0x4, align 4
    float32 cooldown_on_take_damage; // offset 0x1A5C, size 0x4, align 4
    int32 disable_distance; // offset 0x1A60, size 0x4, align 4
    int32 movement_slow_when_out_of_range; // offset 0x1A64, size 0x4, align 4
    bool m_bCanAttack; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x3]; // offset 0x1A69
    ParticleIndex_t m_nFxIndex; // offset 0x1A6C, size 0x4, align 255
    int32 cooldown_penalty_pct; // offset 0x1A70, size 0x4, align 4
    int32 bonus_brewling_hp; // offset 0x1A74, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
