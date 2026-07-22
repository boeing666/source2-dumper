#pragma once

class CDOTA_Modifier_Wisp_Overcharge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1A58, size 0x4, align 4
    int32 bonus_spell_amp; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A60, size 0x4, align 4
    int32 bonus_mres; // offset 0x1A64, size 0x4, align 4
    float32 hp_regen; // offset 0x1A68, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A6C, size 0x4, align 4
    bool unslowable; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
