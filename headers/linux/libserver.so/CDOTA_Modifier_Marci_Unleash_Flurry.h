#pragma once

class CDOTA_Modifier_Marci_Unleash_Flurry : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 flurry_bonus_attack_speed; // offset 0x1AF8, size 0x4, align 4
    float32 time_between_flurries; // offset 0x1AFC, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B00, size 0x4, align 4
    float32 max_time_window_per_hit; // offset 0x1B04, size 0x4, align 4
    bool m_bBonusSpeed; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    ParticleIndex_t m_nFXStackIndex; // offset 0x1B0C, size 0x4, align 255
    bool m_bIsDoingFlurryAttack; // offset 0x1B10, size 0x1, align 1
    bool m_bIsDoingFlurryPulseAttack; // offset 0x1B11, size 0x1, align 1
    char _pad_1B12[0x2]; // offset 0x1B12
    GameTime_t m_fLastAttackTime; // offset 0x1B14, size 0x4, align 255
    bool m_bShouldConsiderSilence; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x7]; // offset 0x1B19
};
