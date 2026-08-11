#pragma once

class CDOTA_Modifier_Brewmaster_DrunkenBrawler_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 bonus_armor; // offset 0x1A78, size 0x4, align 4
    float32 magic_resist; // offset 0x1A7C, size 0x4, align 4
    float32 dodge_chance; // offset 0x1A80, size 0x4, align 4
    float32 bonus_move_speed; // offset 0x1A84, size 0x4, align 4
    float32 crit_chance; // offset 0x1A88, size 0x4, align 4
    float32 crit_multiplier; // offset 0x1A8C, size 0x4, align 4
    float32 attack_speed; // offset 0x1A90, size 0x4, align 4
    float32 brewed_up_duration; // offset 0x1A94, size 0x4, align 4
    float32 brewed_up_duration_extend; // offset 0x1A98, size 0x4, align 4
    float32 brewed_up_bonus; // offset 0x1A9C, size 0x4, align 4
    bool m_bBrewedUp; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AA8, size 0x18, align 8
};
