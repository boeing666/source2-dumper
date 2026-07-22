#pragma once

class CDOTA_Ability_Invoker_Tornado : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 vision_distance; // offset 0x590, size 0x4, align 4
    float32 end_vision_duration; // offset 0x594, size 0x4, align 4
    float32 lift_duration; // offset 0x598, size 0x4, align 4
    float32 base_damage; // offset 0x59C, size 0x4, align 4
    float32 quas_damage; // offset 0x5A0, size 0x4, align 4
    float32 wex_damage; // offset 0x5A4, size 0x4, align 4
    float32 twister_duration; // offset 0x5A8, size 0x4, align 4
    float32 twister_distance_interval; // offset 0x5AC, size 0x4, align 4
    float32 twister_damage; // offset 0x5B0, size 0x4, align 4
    char _pad_05B4[0x14]; // offset 0x5B4
};
