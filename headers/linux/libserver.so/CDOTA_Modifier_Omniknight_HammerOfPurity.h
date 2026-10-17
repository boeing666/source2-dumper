#pragma once

class CDOTA_Modifier_Omniknight_HammerOfPurity : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bHammerAttack; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    int32 attack_range_bonus; // offset 0x1AAC, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1AB0, size 0x2, align 255
    char _pad_1AB2[0x2]; // offset 0x1AB2
    int32 total_ticks; // offset 0x1AB4, size 0x4, align 4
    CUtlVector< int32 > m_nHealQueue; // offset 0x1AB8, size 0x18, align 8
    float32 tick_rate; // offset 0x1AD0, size 0x4, align 4
    float32 heal_duration; // offset 0x1AD4, size 0x4, align 4
};
