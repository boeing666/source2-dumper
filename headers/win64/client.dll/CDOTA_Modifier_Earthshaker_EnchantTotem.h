#pragma once

class CDOTA_Modifier_Earthshaker_EnchantTotem : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_attack_range; // offset 0x1AF8, size 0x4, align 4
    int32 totem_damage_percentage; // offset 0x1AFC, size 0x4, align 4
    int32 scepter_cleave_pct; // offset 0x1B00, size 0x4, align 4
    float32 scepter_cleave_starting_width; // offset 0x1B04, size 0x4, align 4
    float32 scepter_cleave_ending_width; // offset 0x1B08, size 0x4, align 4
    float32 scepter_cleave_distance; // offset 0x1B0C, size 0x4, align 4
};
