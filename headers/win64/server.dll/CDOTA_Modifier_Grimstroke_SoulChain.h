#pragma once

class CDOTA_Modifier_Grimstroke_SoulChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hPartner; // offset 0x1A78, size 0x4, align 4
    bool m_bIsPrimary; // offset 0x1A7C, size 0x1, align 1
    bool m_bEscaped; // offset 0x1A7D, size 0x1, align 1
    bool m_bTethered; // offset 0x1A7E, size 0x1, align 1
    char _pad_1A7F[0x1]; // offset 0x1A7F
    ParticleIndex_t m_nFXIndex; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nFXIndexA; // offset 0x1A84, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A88, size 0x4, align 255
    bool m_bStartedLeashSound; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    float32 m_fLeashDistance; // offset 0x1A90, size 0x4, align 4
    GameTime_t m_fOriginalStartTime; // offset 0x1A94, size 0x4, align 255
    ParticleIndex_t m_nOverheadFXIndex; // offset 0x1A98, size 0x4, align 255
    float32 chain_latch_radius; // offset 0x1A9C, size 0x4, align 4
    float32 chain_break_distance; // offset 0x1AA0, size 0x4, align 4
    float32 leash_limit_multiplier; // offset 0x1AA4, size 0x4, align 4
    float32 chain_duration; // offset 0x1AA8, size 0x4, align 4
    float32 creep_duration_pct; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_reflected_spell_damage; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x1C]; // offset 0x1AB4
};
