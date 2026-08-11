#pragma once

class CDOTA_Ability_Snapfire_Scatterblast : public CDOTABaseAbility /*0x0*/  // sizeof 0x598, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 damage; // offset 0x580, size 0x4, align 4
    float32 debuff_duration; // offset 0x584, size 0x4, align 4
    int32 point_blank_range; // offset 0x588, size 0x4, align 4
    float32 point_blank_dmg_bonus_pct; // offset 0x58C, size 0x4, align 4
    float32 point_blank_debuff_duration_pct; // offset 0x590, size 0x4, align 4
    float32 blast_width_end; // offset 0x594, size 0x4, align 4
};
