#pragma once

class CDOTA_Modifier_Kez_Shodo_Sai_Mark : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 vuln_slow; // offset 0x1AF8, size 0x4, align 4
    int32 base_crit_pct; // offset 0x1AFC, size 0x4, align 4
    int32 parry_bonus_crit; // offset 0x1B00, size 0x4, align 4
    int32 invis_bonus_crit; // offset 0x1B04, size 0x4, align 4
    float32 stun_duration; // offset 0x1B08, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1B0C, size 0x4, align 4
    float32 parry_bonus_stun_duration; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    CUtlVector< AttackRecord_t > m_vecAttackRecords; // offset 0x1B18, size 0x18, align 8
    bool m_bFromParry; // offset 0x1B30, size 0x1, align 1
    bool m_bParryBonus; // offset 0x1B31, size 0x1, align 1
    bool m_bConsumed; // offset 0x1B32, size 0x1, align 1
    bool m_bForceInvisBonus; // offset 0x1B33, size 0x1, align 1
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1B34, size 0x4, align 255
};
