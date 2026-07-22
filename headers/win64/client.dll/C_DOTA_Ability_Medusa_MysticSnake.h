#pragma once

class C_DOTA_Ability_Medusa_MysticSnake : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 radius; // offset 0x6A8, size 0x4, align 4
    int32 snake_jumps; // offset 0x6AC, size 0x4, align 4
    int32 snake_damage; // offset 0x6B0, size 0x4, align 4
    int32 snake_damage_pct; // offset 0x6B4, size 0x4, align 4
    int32 snake_mana_steal; // offset 0x6B8, size 0x4, align 4
    int32 snake_scale; // offset 0x6BC, size 0x4, align 4
    int32 snake_speed_scale; // offset 0x6C0, size 0x4, align 4
    int32 initial_speed; // offset 0x6C4, size 0x4, align 4
    int32 return_speed; // offset 0x6C8, size 0x4, align 4
    float32 jump_delay; // offset 0x6CC, size 0x4, align 4
    float32 slow_duration; // offset 0x6D0, size 0x4, align 4
    char _pad_06D4[0x4]; // offset 0x6D4
};
