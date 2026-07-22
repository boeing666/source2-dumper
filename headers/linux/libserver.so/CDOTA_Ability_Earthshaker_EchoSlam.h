#pragma once

class CDOTA_Ability_Earthshaker_EchoSlam : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 echo_slam_damage_range; // offset 0x85C, size 0x4, align 4
    float32 echo_slam_echo_search_range; // offset 0x860, size 0x4, align 4
    float32 echo_slam_echo_range; // offset 0x864, size 0x4, align 4
    float32 echo_slam_echo_damage; // offset 0x868, size 0x4, align 4
    float32 echo_slam_initial_damage; // offset 0x86C, size 0x4, align 4
};
