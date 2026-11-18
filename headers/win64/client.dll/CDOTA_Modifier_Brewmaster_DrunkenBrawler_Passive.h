#pragma once

class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_armor; // offset 0x1AF8, size 0x4, align 4
    float32 magic_resist; // offset 0x1AFC, size 0x4, align 4
    float32 dodge_chance; // offset 0x1B00, size 0x4, align 4
    float32 bonus_move_speed; // offset 0x1B04, size 0x4, align 4
    float32 crit_chance; // offset 0x1B08, size 0x4, align 4
    float32 crit_multiplier; // offset 0x1B0C, size 0x4, align 4
    float32 attack_speed; // offset 0x1B10, size 0x4, align 4
    float32 brewed_up_duration; // offset 0x1B14, size 0x4, align 4
    float32 brewed_up_duration_extend; // offset 0x1B18, size 0x4, align 4
    float32 brewed_up_bonus; // offset 0x1B1C, size 0x4, align 4
    bool m_bBrewedUp; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B28, size 0x18, align 8
};
