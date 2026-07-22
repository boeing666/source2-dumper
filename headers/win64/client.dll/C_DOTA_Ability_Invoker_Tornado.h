#pragma once

class C_DOTA_Ability_Invoker_Tornado : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    float32 vision_distance; // offset 0x6B8, size 0x4, align 4
    float32 end_vision_duration; // offset 0x6BC, size 0x4, align 4
    float32 lift_duration; // offset 0x6C0, size 0x4, align 4
    float32 base_damage; // offset 0x6C4, size 0x4, align 4
    float32 quas_damage; // offset 0x6C8, size 0x4, align 4
    float32 wex_damage; // offset 0x6CC, size 0x4, align 4
    float32 twister_duration; // offset 0x6D0, size 0x4, align 4
    float32 twister_distance_interval; // offset 0x6D4, size 0x4, align 4
    float32 twister_damage; // offset 0x6D8, size 0x4, align 4
    char _pad_06DC[0x14]; // offset 0x6DC
};
