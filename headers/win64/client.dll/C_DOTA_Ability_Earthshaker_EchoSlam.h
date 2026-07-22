#pragma once

class C_DOTA_Ability_Earthshaker_EchoSlam : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 echo_slam_damage_range; // offset 0x6A8, size 0x4, align 4
    float32 echo_slam_echo_search_range; // offset 0x6AC, size 0x4, align 4
    float32 echo_slam_echo_range; // offset 0x6B0, size 0x4, align 4
    float32 echo_slam_echo_damage; // offset 0x6B4, size 0x4, align 4
    float32 echo_slam_initial_damage; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
};
