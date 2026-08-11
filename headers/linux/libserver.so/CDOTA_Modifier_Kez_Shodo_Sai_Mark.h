#pragma once

class CDOTA_Modifier_Kez_Shodo_Sai_Mark : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 vuln_slow; // offset 0x1A78, size 0x4, align 4
    int32 base_crit_pct; // offset 0x1A7C, size 0x4, align 4
    int32 parry_bonus_crit; // offset 0x1A80, size 0x4, align 4
    int32 invis_bonus_crit; // offset 0x1A84, size 0x4, align 4
    float32 stun_duration; // offset 0x1A88, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1A8C, size 0x4, align 4
    float32 parry_bonus_stun_duration; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
    CUtlVector< AttackRecord_t > m_vecAttackRecords; // offset 0x1A98, size 0x18, align 8
    bool m_bFromParry; // offset 0x1AB0, size 0x1, align 1
    bool m_bParryBonus; // offset 0x1AB1, size 0x1, align 1
    bool m_bConsumed; // offset 0x1AB2, size 0x1, align 1
    bool m_bForceInvisBonus; // offset 0x1AB3, size 0x1, align 1
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1AB4, size 0x4, align 255
};
