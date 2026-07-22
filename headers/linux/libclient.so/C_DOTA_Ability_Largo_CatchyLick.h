#pragma once

class C_DOTA_Ability_Largo_CatchyLick : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 damage; // offset 0x824, size 0x4, align 4
    float32 pull_duration; // offset 0x828, size 0x4, align 4
    float32 pull_distance; // offset 0x82C, size 0x4, align 4
    float32 pull_distance_ally; // offset 0x830, size 0x4, align 4
    float32 delay_time; // offset 0x834, size 0x4, align 4
    int32 strong_dispel; // offset 0x838, size 0x4, align 4
    float32 buff_duration; // offset 0x83C, size 0x4, align 4
};
