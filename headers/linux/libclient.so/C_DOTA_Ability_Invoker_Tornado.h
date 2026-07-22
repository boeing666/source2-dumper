#pragma once

class C_DOTA_Ability_Invoker_Tornado : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x830]; // offset 0x0
    float32 vision_distance; // offset 0x830, size 0x4, align 4
    float32 end_vision_duration; // offset 0x834, size 0x4, align 4
    float32 lift_duration; // offset 0x838, size 0x4, align 4
    float32 base_damage; // offset 0x83C, size 0x4, align 4
    float32 quas_damage; // offset 0x840, size 0x4, align 4
    float32 wex_damage; // offset 0x844, size 0x4, align 4
    float32 twister_duration; // offset 0x848, size 0x4, align 4
    float32 twister_distance_interval; // offset 0x84C, size 0x4, align 4
    float32 twister_damage; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x14]; // offset 0x854
};
