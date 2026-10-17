#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1AA8, size 0x4, align 4
    bool m_bIsPrimary; // offset 0x1AAC, size 0x1, align 1
    bool m_bEscaped; // offset 0x1AAD, size 0x1, align 1
    bool m_bTethered; // offset 0x1AAE, size 0x1, align 1
    char _pad_1AAF[0x1]; // offset 0x1AAF
    ParticleIndex_t m_nFXIndex; // offset 0x1AB0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexA; // offset 0x1AB4, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AB8, size 0x4, align 255
    bool m_bStartedLeashSound; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    float32 m_fLeashDistance; // offset 0x1AC0, size 0x4, align 4
    GameTime_t m_fOriginalStartTime; // offset 0x1AC4, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1AC8, size 0x4, align 255
    float32 chain_latch_radius; // offset 0x1ACC, size 0x4, align 4
    float32 chain_break_distance; // offset 0x1AD0, size 0x4, align 4
    float32 leash_limit_multiplier; // offset 0x1AD4, size 0x4, align 4
    float32 chain_duration; // offset 0x1AD8, size 0x4, align 4
    float32 creep_duration_pct; // offset 0x1ADC, size 0x4, align 4
    int32 bonus_reflected_spell_damage; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
