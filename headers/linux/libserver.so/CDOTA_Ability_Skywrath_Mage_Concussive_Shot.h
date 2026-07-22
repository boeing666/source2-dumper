#pragma once

class CDOTA_Ability_Skywrath_Mage_Concussive_Shot : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 speed; // offset 0x85C, size 0x4, align 4
    float32 slow_radius; // offset 0x860, size 0x4, align 4
    float32 damage; // offset 0x864, size 0x4, align 4
    float32 shot_vision; // offset 0x868, size 0x4, align 4
    float32 slow_duration; // offset 0x86C, size 0x4, align 4
    float32 vision_duration; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
};
