#pragma once

class CDOTA_Modifier_TemplarAssassin_Meld : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    bool launched_attack; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B00, size 0x4, align 4
    AttackRecord_t m_nAttackRecord; // offset 0x1B04, size 0x2, align 255
    char _pad_1B06[0x2]; // offset 0x1B06
    int32 attack_range_bonus; // offset 0x1B08, size 0x4, align 4
    int32 attack_range_increase_max; // offset 0x1B0C, size 0x4, align 4
    float32 attack_range_increase_time; // offset 0x1B10, size 0x4, align 4
    float32 m_fAttackRangeIncreaseSpeed; // offset 0x1B14, size 0x4, align 4
    ParticleIndex_t m_nFXIndexAoE; // offset 0x1B18, size 0x4, align 255
    float32 m_fElapsedTime; // offset 0x1B1C, size 0x4, align 4
};
