#pragma once

class CDOTA_Ability_Beastmaster_PrimalRoar : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 duration; // offset 0x824, size 0x4, align 4
    float32 slow_duration; // offset 0x828, size 0x4, align 4
    int32 side_damage; // offset 0x82C, size 0x4, align 4
    float32 damage_radius; // offset 0x830, size 0x4, align 4
    int32 path_width; // offset 0x834, size 0x4, align 4
    float32 push_duration; // offset 0x838, size 0x4, align 4
    float32 push_distance; // offset 0x83C, size 0x4, align 4
    int32 damage; // offset 0x840, size 0x4, align 4
    float32 movement_speed_duration; // offset 0x844, size 0x4, align 4
};
