#pragma once

class CDOTA_Modifier_Spirit_Bear_Necessities : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_int; // offset 0x1AF8, size 0x4, align 4
    float32 bonus_str; // offset 0x1AFC, size 0x4, align 4
    float32 bonus_agi; // offset 0x1B00, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1B04, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1B08, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1B0C, size 0x4, align 4
    float32 bonus_health_regen_percent; // offset 0x1B10, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1B14, size 0x4, align 4
    int32 bonus_health; // offset 0x1B18, size 0x4, align 4
    int32 bonus_mana; // offset 0x1B1C, size 0x4, align 4
    float32 bonus_evasion; // offset 0x1B20, size 0x4, align 4
    int32 item_slots; // offset 0x1B24, size 0x4, align 4
};
