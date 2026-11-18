#pragma once

class CDOTA_Modifier_Item_Trident : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_agility; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AFC, size 0x4, align 4
    int32 movement_speed_percent_bonus; // offset 0x1B00, size 0x4, align 4
    int32 bonus_strength; // offset 0x1B04, size 0x4, align 4
    int32 hp_regen_amp; // offset 0x1B08, size 0x4, align 4
    int32 status_resistance; // offset 0x1B0C, size 0x4, align 4
    int32 bonus_intellect; // offset 0x1B10, size 0x4, align 4
    int32 spell_amp; // offset 0x1B14, size 0x4, align 4
    int32 mana_regen_multiplier; // offset 0x1B18, size 0x4, align 4
    int32 magic_damage_attack; // offset 0x1B1C, size 0x4, align 4
};
