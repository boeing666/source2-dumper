#pragma once

class CDOTA_Ability_Beastmaster_PrimalRoar : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 duration; // offset 0x85C, size 0x4, align 4
    float32 slow_duration; // offset 0x860, size 0x4, align 4
    int32 side_damage; // offset 0x864, size 0x4, align 4
    float32 damage_radius; // offset 0x868, size 0x4, align 4
    int32 path_width; // offset 0x86C, size 0x4, align 4
    float32 push_duration; // offset 0x870, size 0x4, align 4
    float32 push_distance; // offset 0x874, size 0x4, align 4
    int32 damage; // offset 0x878, size 0x4, align 4
    float32 movement_speed_duration; // offset 0x87C, size 0x4, align 4
};
