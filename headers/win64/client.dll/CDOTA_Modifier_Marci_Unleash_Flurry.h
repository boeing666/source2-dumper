#pragma once

class CDOTA_Modifier_Marci_Unleash_Flurry : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 flurry_bonus_attack_speed; // offset 0x1A58, size 0x4, align 4
    float32 time_between_flurries; // offset 0x1A5C, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A60, size 0x4, align 4
    float32 max_time_window_per_hit; // offset 0x1A64, size 0x4, align 4
    bool m_bBonusSpeed; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x3]; // offset 0x1A69
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A6C, size 0x4, align 255
    bool m_bIsDoingFlurryAttack; // offset 0x1A70, size 0x1, align 1
    bool m_bIsDoingFlurryPulseAttack; // offset 0x1A71, size 0x1, align 1
    char _pad_1A72[0x2]; // offset 0x1A72
    GameTime_t m_fLastAttackTime; // offset 0x1A74, size 0x4, align 255
    bool m_bShouldConsiderSilence; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x7]; // offset 0x1A79
};
