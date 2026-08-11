#pragma once

class CDOTA_Modifier_AntiMage_Mana_Thirst : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 threshold_pct; // offset 0x1A78, size 0x4, align 4
    float32 bonus_attack_damage; // offset 0x1A7C, size 0x4, align 4
    float32 linger_duration; // offset 0x1A80, size 0x4, align 4
    int32 min_bonus_pct; // offset 0x1A84, size 0x4, align 4
    int32 max_bonus_pct; // offset 0x1A88, size 0x4, align 4
    float32 thirst_range; // offset 0x1A8C, size 0x4, align 4
};
