#pragma once

class CDOTA_Ability_AghsFort_EchoSlamPotion : public C_DOTA_Item /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    int32 echo_slam_damage_range; // offset 0x8CC, size 0x4, align 4
    int32 echo_slam_echo_search_range; // offset 0x8D0, size 0x4, align 4
    int32 echo_slam_echo_range; // offset 0x8D4, size 0x4, align 4
    int32 echo_slam_echo_damage; // offset 0x8D8, size 0x4, align 4
    int32 echo_slam_initial_damage; // offset 0x8DC, size 0x4, align 4
    float32 spend_charge_delay; // offset 0x8E0, size 0x4, align 4
    char _pad_08E4[0x4]; // offset 0x8E4
};
