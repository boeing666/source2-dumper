#pragma once

class CDOTA_Modifier_TemplarAssassin_Meld : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    bool launched_attack; // offset 0x1A5C, size 0x1, align 1
    char _pad_1A5D[0x3]; // offset 0x1A5D
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A60, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1A64, size 0x2, align 255
    char _pad_1A66[0x2]; // offset 0x1A66
    int32 attack_range_bonus; // offset 0x1A68, size 0x4, align 4
    int32 attack_range_increase_max; // offset 0x1A6C, size 0x4, align 4
    float32 attack_range_increase_time; // offset 0x1A70, size 0x4, align 4
    float32 m_fAttackRangeIncreaseSpeed; // offset 0x1A74, size 0x4, align 4
    ParticleIndex_t m_nFXIndexAoE; // offset 0x1A78, size 0x4, align 255
    float32 m_fElapsedTime; // offset 0x1A7C, size 0x4, align 4
};
