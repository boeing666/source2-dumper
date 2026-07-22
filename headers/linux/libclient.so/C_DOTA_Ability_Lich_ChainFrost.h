#pragma once

class C_DOTA_Ability_Lich_ChainFrost : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 jump_range; // offset 0x824, size 0x4, align 4
    int32 jumps; // offset 0x828, size 0x4, align 4
    float32 slow_duration; // offset 0x82C, size 0x4, align 4
    float32 vision_radius; // offset 0x830, size 0x4, align 4
    int32 projectile_speed; // offset 0x834, size 0x4, align 4
    int32 initial_projectile_speed; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x14]; // offset 0x83C
    int32 bonus_jumps_per_hero_killed; // offset 0x850, size 0x4, align 4
    int32 bonus_jumps_per_creep_killed; // offset 0x854, size 0x4, align 4
};
