#pragma once

class CDOTA_Modifier_TemplarAssassin_Meld : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    bool launched_attack; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AB0, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1AB4, size 0x2, align 255
    char _pad_1AB6[0x2]; // offset 0x1AB6
    int32 attack_range_bonus; // offset 0x1AB8, size 0x4, align 4
    int32 attack_range_increase_max; // offset 0x1ABC, size 0x4, align 4
    float32 attack_range_increase_time; // offset 0x1AC0, size 0x4, align 4
    float32 m_fAttackRangeIncreaseSpeed; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t m_nFXIndexAoE; // offset 0x1AC8, size 0x4, align 255
    float32 m_fElapsedTime; // offset 0x1ACC, size 0x4, align 4
};
