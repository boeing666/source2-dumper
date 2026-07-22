#pragma once

class C_DOTA_Ability_Invoker_IceWall : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    int32 num_wall_elements; // offset 0x6B8, size 0x4, align 4
    float32 wall_element_spacing; // offset 0x6BC, size 0x4, align 4
    float32 wall_element_radius; // offset 0x6C0, size 0x4, align 4
    int32 vector_cast_range; // offset 0x6C4, size 0x4, align 4
    int32 slow; // offset 0x6C8, size 0x4, align 4
    float32 damage_per_second; // offset 0x6CC, size 0x4, align 4
    float32 duration; // offset 0x6D0, size 0x4, align 4
    float32 slow_duration; // offset 0x6D4, size 0x4, align 4
    float32 root_damage; // offset 0x6D8, size 0x4, align 4
    float32 root_duration; // offset 0x6DC, size 0x4, align 4
    float32 tick_interval; // offset 0x6E0, size 0x4, align 4
    float32 wall_total_length; // offset 0x6E4, size 0x4, align 4
    float32 wall_width; // offset 0x6E8, size 0x4, align 4
    char _pad_06EC[0x4]; // offset 0x6EC
};
