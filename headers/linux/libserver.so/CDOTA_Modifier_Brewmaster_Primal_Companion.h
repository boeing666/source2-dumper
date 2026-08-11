#pragma once

class CDOTA_Modifier_Brewmaster_Primal_Companion : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 cooldown_on_death; // offset 0x1A78, size 0x4, align 4
    float32 cooldown_on_take_damage; // offset 0x1A7C, size 0x4, align 4
    int32 disable_distance; // offset 0x1A80, size 0x4, align 4
    int32 movement_slow_when_out_of_range; // offset 0x1A84, size 0x4, align 4
    bool m_bCanAttack; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    ParticleIndex_t m_nFxIndex; // offset 0x1A8C, size 0x4, align 255
    int32 cooldown_penalty_pct; // offset 0x1A90, size 0x4, align 4
    int32 bonus_brewling_hp; // offset 0x1A94, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
