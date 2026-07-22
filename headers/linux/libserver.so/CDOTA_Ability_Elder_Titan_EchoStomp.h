#pragma once

class CDOTA_Ability_Elder_Titan_EchoStomp : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndexTitan; // offset 0x85C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpirit; // offset 0x860, size 0x4, align 255
    ParticleIndex_t m_nFXIndexTitanB; // offset 0x864, size 0x4, align 255
    ParticleIndex_t m_nFXIndexSpiritB; // offset 0x868, size 0x4, align 255
    float32 radius; // offset 0x86C, size 0x4, align 4
    float32 stomp_damage; // offset 0x870, size 0x4, align 4
    float32 sleep_duration; // offset 0x874, size 0x4, align 4
    float32 cast_time; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
    CUtlVector< CHandle< CBaseEntity > > m_vecStompedHeroes; // offset 0x880, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecStompedHeroes_BuffCounted; // offset 0x898, size 0x18, align 8
    bool m_bStompedInvisibleHero; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x7]; // offset 0x8B1
};
