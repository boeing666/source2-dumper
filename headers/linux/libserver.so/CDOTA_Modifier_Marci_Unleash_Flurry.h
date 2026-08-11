#pragma once

class CDOTA_Modifier_Marci_Unleash_Flurry : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 flurry_bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    float32 time_between_flurries; // offset 0x1A7C, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A80, size 0x4, align 4
    float32 max_time_window_per_hit; // offset 0x1A84, size 0x4, align 4
    bool m_bBonusSpeed; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A8C, size 0x4, align 255
    bool m_bIsDoingFlurryAttack; // offset 0x1A90, size 0x1, align 1
    bool m_bIsDoingFlurryPulseAttack; // offset 0x1A91, size 0x1, align 1
    char _pad_1A92[0x2]; // offset 0x1A92
    GameTime_t m_fLastAttackTime; // offset 0x1A94, size 0x4, align 255
    bool m_bShouldConsiderSilence; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x7]; // offset 0x1A99
};
