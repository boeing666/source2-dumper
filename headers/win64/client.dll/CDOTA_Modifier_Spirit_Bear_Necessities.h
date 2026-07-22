#pragma once

class CDOTA_Modifier_Spirit_Bear_Necessities : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bonus_int; // offset 0x1A58, size 0x4, align 4
    float32 bonus_str; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_agi; // offset 0x1A60, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1A64, size 0x4, align 4
    int32 bonus_attack_damage; // offset 0x1A68, size 0x4, align 4
    float32 bonus_health_regen; // offset 0x1A6C, size 0x4, align 4
    float32 bonus_health_regen_percent; // offset 0x1A70, size 0x4, align 4
    float32 bonus_mana_regen; // offset 0x1A74, size 0x4, align 4
    int32 bonus_health; // offset 0x1A78, size 0x4, align 4
    int32 bonus_mana; // offset 0x1A7C, size 0x4, align 4
    float32 bonus_evasion; // offset 0x1A80, size 0x4, align 4
    int32 item_slots; // offset 0x1A84, size 0x4, align 4
};
