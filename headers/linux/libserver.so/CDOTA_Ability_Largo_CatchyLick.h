#pragma once

class CDOTA_Ability_Largo_CatchyLick : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 damage; // offset 0x85C, size 0x4, align 4
    float32 pull_duration; // offset 0x860, size 0x4, align 4
    float32 pull_distance; // offset 0x864, size 0x4, align 4
    float32 pull_distance_ally; // offset 0x868, size 0x4, align 4
    float32 delay_time; // offset 0x86C, size 0x4, align 4
    int32 strong_dispel; // offset 0x870, size 0x4, align 4
    float32 buff_duration; // offset 0x874, size 0x4, align 4
};
