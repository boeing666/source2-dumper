#pragma once

class C_DOTA_Ability_Juggernaut_Trinity : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 max_jumps; // offset 0x6A8, size 0x4, align 4
    float32 jump_speed; // offset 0x6AC, size 0x4, align 4
    int32 jump_attack_radius; // offset 0x6B0, size 0x4, align 4
    int32 attack_count; // offset 0x6B4, size 0x4, align 4
};
