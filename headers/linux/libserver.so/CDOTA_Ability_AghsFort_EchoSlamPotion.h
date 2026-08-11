#pragma once

class CDOTA_Ability_AghsFort_EchoSlamPotion : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    int32 echo_slam_damage_range; // offset 0x92C, size 0x4, align 4
    int32 echo_slam_echo_search_range; // offset 0x930, size 0x4, align 4
    int32 echo_slam_echo_range; // offset 0x934, size 0x4, align 4
    int32 echo_slam_echo_damage; // offset 0x938, size 0x4, align 4
    int32 echo_slam_initial_damage; // offset 0x93C, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
