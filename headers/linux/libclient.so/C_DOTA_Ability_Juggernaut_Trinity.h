#pragma once

class C_DOTA_Ability_Juggernaut_Trinity : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 max_jumps; // offset 0x824, size 0x4, align 4
    float32 jump_speed; // offset 0x828, size 0x4, align 4
    int32 jump_attack_radius; // offset 0x82C, size 0x4, align 4
    int32 attack_count; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
