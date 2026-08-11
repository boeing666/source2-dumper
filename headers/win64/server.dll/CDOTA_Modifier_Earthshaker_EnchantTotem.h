#pragma once

class CDOTA_Modifier_Earthshaker_EnchantTotem : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_attack_range; // offset 0x1A78, size 0x4, align 4
    int32 totem_damage_percentage; // offset 0x1A7C, size 0x4, align 4
    int32 scepter_cleave_pct; // offset 0x1A80, size 0x4, align 4
    float32 scepter_cleave_starting_width; // offset 0x1A84, size 0x4, align 4
    float32 scepter_cleave_ending_width; // offset 0x1A88, size 0x4, align 4
    float32 scepter_cleave_distance; // offset 0x1A8C, size 0x4, align 4
    char _pad_1A90[0x14]; // offset 0x1A90
    bool bActive; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
};
