#pragma once

class C_DOTA_Ability_Undying_Decay : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 decay_damage; // offset 0x824, size 0x4, align 4
    float32 radius; // offset 0x828, size 0x4, align 4
    float32 decay_duration; // offset 0x82C, size 0x4, align 4
    int32 str_steal; // offset 0x830, size 0x4, align 4
    float32 creep_damage_multiplier; // offset 0x834, size 0x4, align 4
};
