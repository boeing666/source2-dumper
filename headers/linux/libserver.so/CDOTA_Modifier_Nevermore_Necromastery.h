#pragma once

class CDOTA_Modifier_Nevermore_Necromastery : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 souls_per_kill; // offset 0x1A78, size 0x4, align 4
    int32 souls_per_hero_kill; // offset 0x1A7C, size 0x4, align 4
    float32 necromastery_damage_per_soul; // offset 0x1A80, size 0x4, align 4
    int32 necromastery_max_souls; // offset 0x1A84, size 0x4, align 4
    int32 max_soul_increase_on_hero_kill; // offset 0x1A88, size 0x4, align 4
    int32 shard_crit_pct; // offset 0x1A8C, size 0x4, align 4
    int32 shard_souls_per_kill; // offset 0x1A90, size 0x4, align 4
    float32 shard_fear_duration; // offset 0x1A94, size 0x4, align 4
    int32 m_nPermanentMaxSouls; // offset 0x1A98, size 0x4, align 4
    ParticleIndex_t m_iParticleSoulsIndex; // offset 0x1A9C, size 0x4, align 255
    ParticleIndex_t m_FXIndex; // offset 0x1AA0, size 0x4, align 255
    char _pad_1AA4[0x4]; // offset 0x1AA4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AA8, size 0x18, align 8
};
