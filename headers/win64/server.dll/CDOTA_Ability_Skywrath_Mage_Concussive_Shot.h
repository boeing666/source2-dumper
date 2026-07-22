#pragma once

class CDOTA_Ability_Skywrath_Mage_Concussive_Shot : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 speed; // offset 0x580, size 0x4, align 4
    float32 slow_radius; // offset 0x584, size 0x4, align 4
    float32 damage; // offset 0x588, size 0x4, align 4
    float32 shot_vision; // offset 0x58C, size 0x4, align 4
    float32 slow_duration; // offset 0x590, size 0x4, align 4
    float32 vision_duration; // offset 0x594, size 0x4, align 4
};
