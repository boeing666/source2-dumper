#pragma once

class C_DOTA_Ability_Shredder_WhirlingDeath : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 whirling_radius; // offset 0x824, size 0x4, align 4
    int32 whirling_damage; // offset 0x828, size 0x4, align 4
    float32 whirling_tick; // offset 0x82C, size 0x4, align 4
    float32 duration; // offset 0x830, size 0x4, align 4
    int32 tree_damage_scale; // offset 0x834, size 0x4, align 4
};
