#pragma once

class C_DOTA_Ability_Earthshaker_EchoSlam : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 echo_slam_damage_range; // offset 0x824, size 0x4, align 4
    float32 echo_slam_echo_search_range; // offset 0x828, size 0x4, align 4
    float32 echo_slam_echo_range; // offset 0x82C, size 0x4, align 4
    float32 echo_slam_echo_damage; // offset 0x830, size 0x4, align 4
    float32 echo_slam_initial_damage; // offset 0x834, size 0x4, align 4
};
