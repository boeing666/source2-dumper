#pragma once

class CDOTA_Modifier_Spirit_Bear_Necessities : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 bonus_int; // offset 0x1AA8, size 0x4, align 4
    float32 bonus_str; // offset 0x1AAC, size 0x4, align 4
    float32 bonus_agi; // offset 0x1AB0, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AB4, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1AB8, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1ABC, size 0x4, align 4
    float32 bonus_health_regen_percent; // offset 0x1AC0, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1AC4, size 0x4, align 4
    int32 bonus_health; // offset 0x1AC8, size 0x4, align 4
    int32 bonus_mana; // offset 0x1ACC, size 0x4, align 4
    float32 bonus_evasion; // offset 0x1AD0, size 0x4, align 4
    int32 item_slots; // offset 0x1AD4, size 0x4, align 4
};
