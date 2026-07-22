#pragma once

class CDOTA_Ability_Elder_Titan_AncestralSpirit : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 speed; // offset 0x85C, size 0x4, align 4
    float32 radius; // offset 0x860, size 0x4, align 4
    float32 buff_duration; // offset 0x864, size 0x4, align 4
    float32 spirit_duration; // offset 0x868, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x86C, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x870, size 0x4, align 4
    bool m_bIsReturning; // offset 0x874, size 0x1, align 1
    char _pad_0875[0x3]; // offset 0x875
    CHandle< CBaseEntity > m_hAncestralSpirit; // offset 0x878, size 0x4, align 4
    ParticleIndex_t m_nReturnFXIndex; // offset 0x87C, size 0x4, align 255
    CUtlString m_strMoveSpiritSwapAbility; // offset 0x880, size 0x8, align 8
};
