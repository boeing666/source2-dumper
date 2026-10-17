#pragma once

class CDOTA_Modifier_Marci_Unleash_Flurry : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 flurry_bonus_attack_speed; // offset 0x1AA8, size 0x4, align 4
    float32 time_between_flurries; // offset 0x1AAC, size 0x4, align 4
    float32 debuff_duration; // offset 0x1AB0, size 0x4, align 4
    float32 max_time_window_per_hit; // offset 0x1AB4, size 0x4, align 4
    bool m_bBonusSpeed; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    ParticleIndex_t m_nFXStackIndex; // offset 0x1ABC, size 0x4, align 255
    bool m_bIsDoingFlurryAttack; // offset 0x1AC0, size 0x1, align 1
    bool m_bIsDoingFlurryPulseAttack; // offset 0x1AC1, size 0x1, align 1
    char _pad_1AC2[0x2]; // offset 0x1AC2
    GameTime_t m_fLastAttackTime; // offset 0x1AC4, size 0x4, align 255
    bool m_bShouldConsiderSilence; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x7]; // offset 0x1AC9
};
