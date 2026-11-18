#pragma once

class CDOTA_Modifier_Snapfire_LilShredder_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B10]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B10, size 0x18, align 8
    int32 m_nIsActive; // offset 0x1B28, size 0x4, align 4
    bool m_bBonusAttack; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    int32 attack_range_bonus; // offset 0x1B30, size 0x4, align 4
    int32 buffed_attacks; // offset 0x1B34, size 0x4, align 4
    float32 base_attack_time; // offset 0x1B38, size 0x4, align 4
    int32 attack_speed_bonus; // offset 0x1B3C, size 0x4, align 4
    float32 armor_duration; // offset 0x1B40, size 0x4, align 4
    int32 extra_targets; // offset 0x1B44, size 0x4, align 4
};
