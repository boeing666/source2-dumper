#pragma once

class CDOTA_Ability_Lich_ChainFrost : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 jump_range; // offset 0x85C, size 0x4, align 4
    int32 jumps; // offset 0x860, size 0x4, align 4
    float32 slow_duration; // offset 0x864, size 0x4, align 4
    float32 vision_radius; // offset 0x868, size 0x4, align 4
    int32 projectile_speed; // offset 0x86C, size 0x4, align 4
    int32 initial_projectile_speed; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x14]; // offset 0x874
    int32 bonus_jumps_per_hero_killed; // offset 0x888, size 0x4, align 4
    int32 bonus_jumps_per_creep_killed; // offset 0x88C, size 0x4, align 4
};
