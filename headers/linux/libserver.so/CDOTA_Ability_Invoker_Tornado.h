#pragma once

class CDOTA_Ability_Invoker_Tornado : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x868]; // offset 0x0
    float32 vision_distance; // offset 0x868, size 0x4, align 4
    float32 end_vision_duration; // offset 0x86C, size 0x4, align 4
    float32 lift_duration; // offset 0x870, size 0x4, align 4
    float32 base_damage; // offset 0x874, size 0x4, align 4
    float32 quas_damage; // offset 0x878, size 0x4, align 4
    float32 wex_damage; // offset 0x87C, size 0x4, align 4
    float32 twister_duration; // offset 0x880, size 0x4, align 4
    float32 twister_distance_interval; // offset 0x884, size 0x4, align 4
    float32 twister_damage; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x14]; // offset 0x88C
};
