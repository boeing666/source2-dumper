#pragma once

class CDOTA_Modifier_Nevermore_Necromastery : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 souls_per_kill; // offset 0x1A58, size 0x4, align 4
    int32 souls_per_hero_kill; // offset 0x1A5C, size 0x4, align 4
    float32 necromastery_damage_per_soul; // offset 0x1A60, size 0x4, align 4
    int32 necromastery_max_souls; // offset 0x1A64, size 0x4, align 4
    int32 max_soul_increase_on_hero_kill; // offset 0x1A68, size 0x4, align 4
    int32 shard_crit_pct; // offset 0x1A6C, size 0x4, align 4
    int32 shard_souls_per_kill; // offset 0x1A70, size 0x4, align 4
    float32 shard_fear_duration; // offset 0x1A74, size 0x4, align 4
    int32 m_nPermanentMaxSouls; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_iParticleSoulsIndex; // offset 0x1A7C, size 0x4, align 255
    ParticleIndex_t m_FXIndex; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
};
