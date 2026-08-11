#pragma once

class CDOTA_Ability_AghsFort_EchoSlamPotion : public CDOTA_Item /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    int32 echo_slam_damage_range; // offset 0x658, size 0x4, align 4
    int32 echo_slam_echo_search_range; // offset 0x65C, size 0x4, align 4
    int32 echo_slam_echo_range; // offset 0x660, size 0x4, align 4
    int32 echo_slam_echo_damage; // offset 0x664, size 0x4, align 4
    int32 echo_slam_initial_damage; // offset 0x668, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x66C, size 0x4, align 4
};
