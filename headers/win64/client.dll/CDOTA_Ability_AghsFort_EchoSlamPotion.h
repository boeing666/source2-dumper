#pragma once

class CDOTA_Ability_AghsFort_EchoSlamPotion : public C_DOTA_Item /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    int32 echo_slam_damage_range; // offset 0x758, size 0x4, align 4
    int32 echo_slam_echo_search_range; // offset 0x75C, size 0x4, align 4
    int32 echo_slam_echo_range; // offset 0x760, size 0x4, align 4
    int32 echo_slam_echo_damage; // offset 0x764, size 0x4, align 4
    int32 echo_slam_initial_damage; // offset 0x768, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x76C, size 0x4, align 4
};
