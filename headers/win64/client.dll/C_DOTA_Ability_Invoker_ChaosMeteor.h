#pragma once

class C_DOTA_Ability_Invoker_ChaosMeteor : public CDOTA_Ability_Invoker_InvokedBase /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B8]; // offset 0x0
    float32 area_of_effect; // offset 0x6B8, size 0x4, align 4
    float32 damage_interval; // offset 0x6BC, size 0x4, align 4
    float32 vision_distance; // offset 0x6C0, size 0x4, align 4
    float32 end_vision_duration; // offset 0x6C4, size 0x4, align 4
    float32 main_damage; // offset 0x6C8, size 0x4, align 4
    float32 burn_duration; // offset 0x6CC, size 0x4, align 4
    float32 burn_dps; // offset 0x6D0, size 0x4, align 4
    char _pad_06D4[0x14]; // offset 0x6D4
};
