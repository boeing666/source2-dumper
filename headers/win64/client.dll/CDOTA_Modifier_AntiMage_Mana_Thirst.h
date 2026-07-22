#pragma once

class CDOTA_Modifier_AntiMage_Mana_Thirst : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 threshold_pct; // offset 0x1A58, size 0x4, align 4
    float32 bonus_attack_damage; // offset 0x1A5C, size 0x4, align 4
    float32 linger_duration; // offset 0x1A60, size 0x4, align 4
    int32 min_bonus_pct; // offset 0x1A64, size 0x4, align 4
    int32 max_bonus_pct; // offset 0x1A68, size 0x4, align 4
    float32 thirst_range; // offset 0x1A6C, size 0x4, align 4
};
