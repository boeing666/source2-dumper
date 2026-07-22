#pragma once

class C_DOTA_Ability_Elder_Titan_EchoStomp : public C_DOTABaseAbility /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nFXIndexTitan; // offset 0x6A8, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpirit; // offset 0x6AC, size 0x4, align 255
    ParticleIndex_t m_nFXIndexTitanB; // offset 0x6B0, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpiritB; // offset 0x6B4, size 0x4, align 255
    float32 radius; // offset 0x6B8, size 0x4, align 4
    float32 stomp_damage; // offset 0x6BC, size 0x4, align 4
    float32 sleep_duration; // offset 0x6C0, size 0x4, align 4
    float32 cast_time; // offset 0x6C4, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecStompedHeroes; // offset 0x6C8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecStompedHeroes_BuffCounted; // offset 0x6E0, size 0x18, align 8
    bool m_bStompedInvisibleHero; // offset 0x6F8, size 0x1, align 1
    char _pad_06F9[0x7]; // offset 0x6F9
};
