#pragma once

class CDOTA_Modifier_Nevermore_Necromastery : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 souls_per_kill; // offset 0x1AA8, size 0x4, align 4
    int32 souls_per_hero_kill; // offset 0x1AAC, size 0x4, align 4
    float32 necromastery_damage_per_soul; // offset 0x1AB0, size 0x4, align 4
    int32 necromastery_max_souls; // offset 0x1AB4, size 0x4, align 4
    int32 max_soul_increase_on_hero_kill; // offset 0x1AB8, size 0x4, align 4
    int32 shard_crit_pct; // offset 0x1ABC, size 0x4, align 4
    int32 shard_souls_per_kill; // offset 0x1AC0, size 0x4, align 4
    float32 shard_fear_duration; // offset 0x1AC4, size 0x4, align 4
    int32 m_nPermanentMaxSouls; // offset 0x1AC8, size 0x4, align 4
    ParticleIndex_t m_iParticleSoulsIndex; // offset 0x1ACC, size 0x4, align 255
    ParticleIndex_t m_FXIndex; // offset 0x1AD0, size 0x4, align 255
    char _pad_1AD4[0x4]; // offset 0x1AD4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AD8, size 0x18, align 8
};
