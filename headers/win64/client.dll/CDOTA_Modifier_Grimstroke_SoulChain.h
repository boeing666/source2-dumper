#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1AF8, size 0x4, align 4
    bool m_bIsPrimary; // offset 0x1AFC, size 0x1, align 1
    bool m_bEscaped; // offset 0x1AFD, size 0x1, align 1
    bool m_bTethered; // offset 0x1AFE, size 0x1, align 1
    char _pad_1AFF[0x1]; // offset 0x1AFF
    ParticleIndex_t m_nFXIndex; // offset 0x1B00, size 0x4, align 255
    ParticleIndex_t m_nFXIndexA; // offset 0x1B04, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1B08, size 0x4, align 255
    bool m_bStartedLeashSound; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    float32 m_fLeashDistance; // offset 0x1B10, size 0x4, align 4
    GameTime_t m_fOriginalStartTime; // offset 0x1B14, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1B18, size 0x4, align 255
    float32 chain_latch_radius; // offset 0x1B1C, size 0x4, align 4
    float32 chain_break_distance; // offset 0x1B20, size 0x4, align 4
    float32 leash_limit_multiplier; // offset 0x1B24, size 0x4, align 4
    float32 chain_duration; // offset 0x1B28, size 0x4, align 4
    float32 creep_duration_pct; // offset 0x1B2C, size 0x4, align 4
    int32 bonus_reflected_spell_damage; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
