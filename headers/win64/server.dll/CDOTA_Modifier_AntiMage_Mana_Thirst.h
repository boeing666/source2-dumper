#pragma once

class CDOTA_Modifier_AntiMage_Mana_Thirst : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 threshold_pct; // offset 0x1AA8, size 0x4, align 4
    float32 bonus_attack_damage; // offset 0x1AAC, size 0x4, align 4
    float32 linger_duration; // offset 0x1AB0, size 0x4, align 4
    int32 min_bonus_pct; // offset 0x1AB4, size 0x4, align 4
    int32 max_bonus_pct; // offset 0x1AB8, size 0x4, align 4
    float32 thirst_range; // offset 0x1ABC, size 0x4, align 4
};
