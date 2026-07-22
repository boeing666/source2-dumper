#pragma once

class CDOTA_Ability_Lich_ChainFrost : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 jump_range; // offset 0x580, size 0x4, align 4
    int32 jumps; // offset 0x584, size 0x4, align 4
    float32 slow_duration; // offset 0x588, size 0x4, align 4
    float32 vision_radius; // offset 0x58C, size 0x4, align 4
    int32 projectile_speed; // offset 0x590, size 0x4, align 4
    int32 initial_projectile_speed; // offset 0x594, size 0x4, align 4
    char _pad_0598[0x14]; // offset 0x598
    int32 bonus_jumps_per_hero_killed; // offset 0x5AC, size 0x4, align 4
    int32 bonus_jumps_per_creep_killed; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
};
