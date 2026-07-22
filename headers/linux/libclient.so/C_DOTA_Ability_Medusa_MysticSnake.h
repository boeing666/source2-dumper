#pragma once

class C_DOTA_Ability_Medusa_MysticSnake : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 radius; // offset 0x824, size 0x4, align 4
    int32 snake_jumps; // offset 0x828, size 0x4, align 4
    int32 snake_damage; // offset 0x82C, size 0x4, align 4
    int32 snake_damage_pct; // offset 0x830, size 0x4, align 4
    int32 snake_mana_steal; // offset 0x834, size 0x4, align 4
    int32 snake_scale; // offset 0x838, size 0x4, align 4
    int32 snake_speed_scale; // offset 0x83C, size 0x4, align 4
    int32 initial_speed; // offset 0x840, size 0x4, align 4
    int32 return_speed; // offset 0x844, size 0x4, align 4
    float32 jump_delay; // offset 0x848, size 0x4, align 4
    float32 slow_duration; // offset 0x84C, size 0x4, align 4
};
