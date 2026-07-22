#pragma once

class CDOTA_Modifier_Roshan_Bash : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bash_chance; // offset 0x1A58, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A5C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A60, size 0x4, align 4
    GameTime_t last_attack_time; // offset 0x1A64, size 0x4, align 255
    CUtlVector< AttackRecord_t > m_ProcAttackRecords; // offset 0x1A68, size 0x18, align 8
    GameTime_t apply_activity_modifier_until; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
