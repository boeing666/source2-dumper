#pragma once

class CDOTA_Ability_Earthshaker_EchoSlam : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 echo_slam_damage_range; // offset 0x580, size 0x4, align 4
    float32 echo_slam_echo_search_range; // offset 0x584, size 0x4, align 4
    float32 echo_slam_echo_range; // offset 0x588, size 0x4, align 4
    float32 echo_slam_echo_damage; // offset 0x58C, size 0x4, align 4
    float32 echo_slam_initial_damage; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
};
