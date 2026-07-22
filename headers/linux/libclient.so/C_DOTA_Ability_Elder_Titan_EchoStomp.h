#pragma once

class C_DOTA_Ability_Elder_Titan_EchoStomp : public C_DOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    ParticleIndex_t m_nFXIndexTitan; // offset 0x824, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpirit; // offset 0x828, size 0x4, align 255
    ParticleIndex_t m_nFXIndexTitanB; // offset 0x82C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpiritB; // offset 0x830, size 0x4, align 255
    float32 radius; // offset 0x834, size 0x4, align 4
    float32 stomp_damage; // offset 0x838, size 0x4, align 4
    float32 sleep_duration; // offset 0x83C, size 0x4, align 4
    float32 cast_time; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
    CUtlVector< CHandle< C_BaseEntity > > m_vecStompedHeroes; // offset 0x848, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecStompedHeroes_BuffCounted; // offset 0x860, size 0x18, align 8
    bool m_bStompedInvisibleHero; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
};
