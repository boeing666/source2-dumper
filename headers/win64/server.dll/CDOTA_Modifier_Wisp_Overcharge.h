#pragma once

class CDOTA_Modifier_Wisp_Overcharge : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_spell_amp; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_armor; // offset 0x1B00, size 0x4, align 4
    int32 bonus_mres; // offset 0x1B04, size 0x4, align 4
    float32 hp_regen; // offset 0x1B08, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1B0C, size 0x4, align 4
    bool unslowable; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
