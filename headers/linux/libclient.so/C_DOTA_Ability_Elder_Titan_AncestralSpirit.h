#pragma once

class C_DOTA_Ability_Elder_Titan_AncestralSpirit : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 speed; // offset 0x824, size 0x4, align 4
    float32 radius; // offset 0x828, size 0x4, align 4
    float32 buff_duration; // offset 0x82C, size 0x4, align 4
    float32 spirit_duration; // offset 0x830, size 0x4, align 4
    int32 m_nCreepsHit; // offset 0x834, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x838, size 0x4, align 4
    bool m_bIsReturning; // offset 0x83C, size 0x1, align 1
    char _pad_083D[0x3]; // offset 0x83D
    CHandle< C_BaseEntity > m_hAncestralSpirit; // offset 0x840, size 0x4, align 4
    ParticleIndex_t m_nReturnFXIndex; // offset 0x844, size 0x4, align 255
    CUtlString m_strMoveSpiritSwapAbility; // offset 0x848, size 0x8, align 8
};
