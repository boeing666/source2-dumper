#pragma once

class CDOTA_Modifier_TemplarAssassin_Meld : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    bool launched_attack; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A80, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1A84, size 0x2, align 255
    char _pad_1A86[0x2]; // offset 0x1A86
    int32 attack_range_bonus; // offset 0x1A88, size 0x4, align 4
    int32 attack_range_increase_max; // offset 0x1A8C, size 0x4, align 4
    float32 attack_range_increase_time; // offset 0x1A90, size 0x4, align 4
    float32 m_fAttackRangeIncreaseSpeed; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_nFXIndexAoE; // offset 0x1A98, size 0x4, align 255
    float32 m_fElapsedTime; // offset 0x1A9C, size 0x4, align 4
};
