#pragma once

class CDOTA_Modifier_Tusk_WalrusPunch : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 crit_multiplier; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AAC, size 0x4, align 4
    float32 air_time; // offset 0x1AB0, size 0x4, align 4
    float32 slow_duration; // offset 0x1AB4, size 0x4, align 4
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1AB8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AC0, size 0x4, align 4
    bool m_bWalrusPunch; // offset 0x1AC4, size 0x1, align 1
    bool m_bTalentProc; // offset 0x1AC5, size 0x1, align 1
    char _pad_1AC6[0x2]; // offset 0x1AC6
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AC8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
