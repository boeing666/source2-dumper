#pragma once

class CDOTA_Modifier_Snapfire_LilShredder_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AC0, size 0x18, align 8
    int32 m_nIsActive; // offset 0x1AD8, size 0x4, align 4
    bool m_bBonusAttack; // offset 0x1ADC, size 0x1, align 1
    char _pad_1ADD[0x3]; // offset 0x1ADD
    int32 attack_range_bonus; // offset 0x1AE0, size 0x4, align 4
    int32 buffed_attacks; // offset 0x1AE4, size 0x4, align 4
    float32 base_attack_time; // offset 0x1AE8, size 0x4, align 4
    int32 attack_speed_bonus; // offset 0x1AEC, size 0x4, align 4
    float32 armor_duration; // offset 0x1AF0, size 0x4, align 4
    int32 extra_targets; // offset 0x1AF4, size 0x4, align 4
};
