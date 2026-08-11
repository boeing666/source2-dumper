#pragma once

class CDOTA_Ability_Snapfire_Scatterblast : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 damage; // offset 0x85C, size 0x4, align 4
    float32 debuff_duration; // offset 0x860, size 0x4, align 4
    int32 point_blank_range; // offset 0x864, size 0x4, align 4
    float32 point_blank_dmg_bonus_pct; // offset 0x868, size 0x4, align 4
    float32 point_blank_debuff_duration_pct; // offset 0x86C, size 0x4, align 4
    float32 blast_width_end; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
};
