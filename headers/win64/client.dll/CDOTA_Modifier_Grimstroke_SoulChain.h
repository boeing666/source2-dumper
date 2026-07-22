#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hPartner; // offset 0x1A58, size 0x4, align 4
    bool m_bIsPrimary; // offset 0x1A5C, size 0x1, align 1
    bool m_bEscaped; // offset 0x1A5D, size 0x1, align 1
    bool m_bTethered; // offset 0x1A5E, size 0x1, align 1
    char _pad_1A5F[0x1]; // offset 0x1A5F
    ParticleIndex_t m_nFXIndex; // offset 0x1A60, size 0x4, align 255
    ParticleIndex_t m_nFXIndexA; // offset 0x1A64, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A68, size 0x4, align 255
    bool m_bStartedLeashSound; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
    float32 m_fLeashDistance; // offset 0x1A70, size 0x4, align 4
    GameTime_t m_fOriginalStartTime; // offset 0x1A74, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1A78, size 0x4, align 255
    float32 chain_latch_radius; // offset 0x1A7C, size 0x4, align 4
    float32 chain_break_distance; // offset 0x1A80, size 0x4, align 4
    float32 leash_limit_multiplier; // offset 0x1A84, size 0x4, align 4
    float32 chain_duration; // offset 0x1A88, size 0x4, align 4
    float32 creep_duration_pct; // offset 0x1A8C, size 0x4, align 4
    int32 bonus_reflected_spell_damage; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
