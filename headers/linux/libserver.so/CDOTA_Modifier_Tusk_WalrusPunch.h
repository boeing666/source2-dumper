#pragma once

class CDOTA_Modifier_Tusk_WalrusPunch : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 crit_multiplier; // offset 0x1A78, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A7C, size 0x4, align 4
    float32 air_time; // offset 0x1A80, size 0x4, align 4
    float32 slow_duration; // offset 0x1A84, size 0x4, align 4
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1A88, size 0x8, align 8
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A90, size 0x4, align 4
    bool m_bWalrusPunch; // offset 0x1A94, size 0x1, align 1
    bool m_bTalentProc; // offset 0x1A95, size 0x1, align 1
    char _pad_1A96[0x2]; // offset 0x1A96
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A98, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    AttackRecord_t m_nAttackRecord; // offset 0x1AB4, size 0x2, align 255
    char _pad_1AB6[0x2]; // offset 0x1AB6
};
