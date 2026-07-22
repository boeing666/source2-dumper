#pragma once

class CDOTA_Ability_Elder_Titan_AncestralSpirit : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 speed; // offset 0x580, size 0x4, align 4
    float32 radius; // offset 0x584, size 0x4, align 4
    float32 buff_duration; // offset 0x588, size 0x4, align 4
    float32 spirit_duration; // offset 0x58C, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x590, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x594, size 0x4, align 4
    bool m_bIsReturning; // offset 0x598, size 0x1, align 1
    char _pad_0599[0x3]; // offset 0x599
    CHandle< CBaseEntity > m_hAncestralSpirit; // offset 0x59C, size 0x4, align 4
    ParticleIndex_t m_nReturnFXIndex; // offset 0x5A0, size 0x4, align 255
    char _pad_05A4[0x4]; // offset 0x5A4
    CUtlString m_strMoveSpiritSwapAbility; // offset 0x5A8, size 0x8, align 8
};
