#pragma once

class C_DOTA_Ability_Lich_ChainFrost : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 jump_range; // offset 0x6A8, size 0x4, align 4
    int32 jumps; // offset 0x6AC, size 0x4, align 4
    float32 slow_duration; // offset 0x6B0, size 0x4, align 4
    float32 vision_radius; // offset 0x6B4, size 0x4, align 4
    int32 projectile_speed; // offset 0x6B8, size 0x4, align 4
    int32 initial_projectile_speed; // offset 0x6BC, size 0x4, align 4
    char _pad_06C0[0x14]; // offset 0x6C0
    int32 bonus_jumps_per_hero_killed; // offset 0x6D4, size 0x4, align 4
    int32 bonus_jumps_per_creep_killed; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x4]; // offset 0x6DC
};
