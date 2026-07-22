#pragma once

class CDOTA_Ability_Snapfire_Scatterblast : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 damage; // offset 0x6A8, size 0x4, align 4
    float32 debuff_duration; // offset 0x6AC, size 0x4, align 4
    int32 point_blank_range; // offset 0x6B0, size 0x4, align 4
    float32 point_blank_dmg_bonus_pct; // offset 0x6B4, size 0x4, align 4
    float32 point_blank_debuff_duration_pct; // offset 0x6B8, size 0x4, align 4
    float32 blast_width_end; // offset 0x6BC, size 0x4, align 4
};
