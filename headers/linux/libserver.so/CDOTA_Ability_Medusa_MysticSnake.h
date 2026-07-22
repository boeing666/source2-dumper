#pragma once

class CDOTA_Ability_Medusa_MysticSnake : public CDOTABaseAbility /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    int32 snake_jumps; // offset 0x860, size 0x4, align 4
    int32 snake_damage; // offset 0x864, size 0x4, align 4
    int32 snake_damage_pct; // offset 0x868, size 0x4, align 4
    int32 snake_mana_steal; // offset 0x86C, size 0x4, align 4
    int32 snake_scale; // offset 0x870, size 0x4, align 4
    int32 snake_speed_scale; // offset 0x874, size 0x4, align 4
    int32 initial_speed; // offset 0x878, size 0x4, align 4
    int32 return_speed; // offset 0x87C, size 0x4, align 4
    float32 jump_delay; // offset 0x880, size 0x4, align 4
    float32 slow_duration; // offset 0x884, size 0x4, align 4
    char _pad_0888[0xF8]; // offset 0x888
};
