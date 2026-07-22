#pragma once

class CDOTA_Ability_Largo_CatchyLick : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 damage; // offset 0x580, size 0x4, align 4
    float32 pull_duration; // offset 0x584, size 0x4, align 4
    float32 pull_distance; // offset 0x588, size 0x4, align 4
    float32 pull_distance_ally; // offset 0x58C, size 0x4, align 4
    float32 delay_time; // offset 0x590, size 0x4, align 4
    int32 strong_dispel; // offset 0x594, size 0x4, align 4
    float32 buff_duration; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
};
