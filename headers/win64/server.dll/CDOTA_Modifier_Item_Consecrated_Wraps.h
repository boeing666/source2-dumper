#pragma once

class CDOTA_Modifier_Item_Consecrated_Wraps : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_spell_resist; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_regen; // offset 0x1AFC, size 0x4, align 4
    int32 bonus_health; // offset 0x1B00, size 0x4, align 4
    int32 bonus_all_stats; // offset 0x1B04, size 0x4, align 4
    float32 stack_threshold_damage; // offset 0x1B08, size 0x4, align 4
    float32 duration; // offset 0x1B0C, size 0x4, align 4
    bool damage_must_be_player_owned_or_roshan; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
