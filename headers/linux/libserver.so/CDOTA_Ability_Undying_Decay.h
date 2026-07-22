#pragma once

class CDOTA_Ability_Undying_Decay : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 decay_damage; // offset 0x85C, size 0x4, align 4
    float32 radius; // offset 0x860, size 0x4, align 4
    float32 decay_duration; // offset 0x864, size 0x4, align 4
    int32 str_steal; // offset 0x868, size 0x4, align 4
    float32 creep_damage_multiplier; // offset 0x86C, size 0x4, align 4
};
