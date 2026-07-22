#pragma once

class CDOTA_Ability_Medusa_MysticSnake : public CDOTABaseAbility /*0x0*/  // sizeof 0x6A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 radius; // offset 0x580, size 0x4, align 4
    int32 snake_jumps; // offset 0x584, size 0x4, align 4
    int32 snake_damage; // offset 0x588, size 0x4, align 4
    int32 snake_damage_pct; // offset 0x58C, size 0x4, align 4
    int32 snake_mana_steal; // offset 0x590, size 0x4, align 4
    int32 snake_scale; // offset 0x594, size 0x4, align 4
    int32 snake_speed_scale; // offset 0x598, size 0x4, align 4
    int32 initial_speed; // offset 0x59C, size 0x4, align 4
    int32 return_speed; // offset 0x5A0, size 0x4, align 4
    float32 jump_delay; // offset 0x5A4, size 0x4, align 4
    float32 slow_duration; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0xFC]; // offset 0x5AC
};
