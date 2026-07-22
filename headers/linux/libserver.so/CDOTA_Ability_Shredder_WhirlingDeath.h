#pragma once

class CDOTA_Ability_Shredder_WhirlingDeath : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 whirling_radius; // offset 0x85C, size 0x4, align 4
    int32 whirling_damage; // offset 0x860, size 0x4, align 4
    float32 whirling_tick; // offset 0x864, size 0x4, align 4
    float32 duration; // offset 0x868, size 0x4, align 4
    int32 tree_damage_scale; // offset 0x86C, size 0x4, align 4
};
