#pragma once

class CDOTA_Ability_Elder_Titan_EchoStomp : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndexTitan; // offset 0x580, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpirit; // offset 0x584, size 0x4, align 255
    ParticleIndex_t m_nFXIndexTitanB; // offset 0x588, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpiritB; // offset 0x58C, size 0x4, align 255
    float32 radius; // offset 0x590, size 0x4, align 4
    float32 stomp_damage; // offset 0x594, size 0x4, align 4
    float32 sleep_duration; // offset 0x598, size 0x4, align 4
    float32 cast_time; // offset 0x59C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecStompedHeroes; // offset 0x5A0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecStompedHeroes_BuffCounted; // offset 0x5B8, size 0x18, align 8
    bool m_bStompedInvisibleHero; // offset 0x5D0, size 0x1, align 1
    char _pad_05D1[0x7]; // offset 0x5D1
};
