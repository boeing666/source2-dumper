#pragma once

class C_DOTA_Ability_Invoker_IceWall : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x830]; // offset 0x0
    int32 num_wall_elements; // offset 0x830, size 0x4, align 4
    float32 wall_element_spacing; // offset 0x834, size 0x4, align 4
    float32 wall_element_radius; // offset 0x838, size 0x4, align 4
    int32 vector_cast_range; // offset 0x83C, size 0x4, align 4
    int32 slow; // offset 0x840, size 0x4, align 4
    float32 damage_per_second; // offset 0x844, size 0x4, align 4
    float32 duration; // offset 0x848, size 0x4, align 4
    float32 slow_duration; // offset 0x84C, size 0x4, align 4
    float32 root_damage; // offset 0x850, size 0x4, align 4
    float32 root_duration; // offset 0x854, size 0x4, align 4
    float32 tick_interval; // offset 0x858, size 0x4, align 4
    float32 wall_total_length; // offset 0x85C, size 0x4, align 4
    float32 wall_width; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x4]; // offset 0x864
};
