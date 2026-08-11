#pragma once

class CDOTA_Modifier_Snapfire_LilShredder_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A90]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A90, size 0x18, align 8
    int32 m_nIsActive; // offset 0x1AA8, size 0x4, align 4
    bool m_bBonusAttack; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    int32 attack_range_bonus; // offset 0x1AB0, size 0x4, align 4
    int32 buffed_attacks; // offset 0x1AB4, size 0x4, align 4
    float32 base_attack_time; // offset 0x1AB8, size 0x4, align 4
    int32 attack_speed_bonus; // offset 0x1ABC, size 0x4, align 4
    float32 armor_duration; // offset 0x1AC0, size 0x4, align 4
    int32 extra_targets; // offset 0x1AC4, size 0x4, align 4
};
