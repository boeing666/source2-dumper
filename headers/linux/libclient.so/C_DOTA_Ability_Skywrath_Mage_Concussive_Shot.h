#pragma once

class C_DOTA_Ability_Skywrath_Mage_Concussive_Shot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 speed; // offset 0x824, size 0x4, align 4
    float32 slow_radius; // offset 0x828, size 0x4, align 4
    float32 damage; // offset 0x82C, size 0x4, align 4
    float32 shot_vision; // offset 0x830, size 0x4, align 4
    float32 slow_duration; // offset 0x834, size 0x4, align 4
    float32 vision_duration; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
