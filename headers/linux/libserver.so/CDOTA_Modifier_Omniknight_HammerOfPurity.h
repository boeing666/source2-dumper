#pragma once

class CDOTA_Modifier_Omniknight_HammerOfPurity : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bHammerAttack; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    int32 attack_range_bonus; // offset 0x1A7C, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1A80, size 0x2, align 255
    char _pad_1A82[0x2]; // offset 0x1A82
    int32 total_ticks; // offset 0x1A84, size 0x4, align 4
    CUtlVector< int32 > m_nHealQueue; // offset 0x1A88, size 0x18, align 8
    float32 tick_rate; // offset 0x1AA0, size 0x4, align 4
    float32 heal_duration; // offset 0x1AA4, size 0x4, align 4
};
