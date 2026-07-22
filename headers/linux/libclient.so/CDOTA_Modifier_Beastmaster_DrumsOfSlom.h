#pragma once

class CDOTA_Modifier_Beastmaster_DrumsOfSlom : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 aura_radius; // offset 0x1A58, size 0x4, align 4
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    int32 max_stacks; // offset 0x1A60, size 0x4, align 4
    float32 base_damage; // offset 0x1A64, size 0x4, align 4
    int32 heal_pct; // offset 0x1A68, size 0x4, align 4
    int32 creep_heal_pct; // offset 0x1A6C, size 0x4, align 4
    int32 creep_damage_pct; // offset 0x1A70, size 0x4, align 4
    int32 iCurrentAttacksAtMinInterval; // offset 0x1A74, size 0x4, align 4
    float32 stack_decay_time; // offset 0x1A78, size 0x4, align 4
    float32 max_drum_hit_interval; // offset 0x1A7C, size 0x4, align 4
    float32 min_drum_hit_interval; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_flLastStackChangeTime; // offset 0x1A84, size 0x4, align 255
    GameTime_t m_flLastDrumHitTime; // offset 0x1A88, size 0x4, align 255
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
