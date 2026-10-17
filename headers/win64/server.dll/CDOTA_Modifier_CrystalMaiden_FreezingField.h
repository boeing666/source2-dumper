#pragma once

class CDOTA_Modifier_CrystalMaiden_FreezingField : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    int32 damage; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_armor; // offset 0x1AB0, size 0x4, align 4
    int32 num_explosions; // offset 0x1AB4, size 0x4, align 4
    float32 shard_bonus_explosion; // offset 0x1AB8, size 0x4, align 4
    float32 explosion_radius; // offset 0x1ABC, size 0x4, align 4
    float32 slow_duration; // offset 0x1AC0, size 0x4, align 4
    int32 explosion_min_dist; // offset 0x1AC4, size 0x4, align 4
    float32 explosion_max_dist; // offset 0x1AC8, size 0x4, align 4
    float32 frostbite_delay; // offset 0x1ACC, size 0x4, align 4
    GameTime_t m_fLastTick; // offset 0x1AD0, size 0x4, align 255
    float32 m_fTimeAccumulator; // offset 0x1AD4, size 0x4, align 4
    float32 m_flExplosionInterval; // offset 0x1AD8, size 0x4, align 4
    int32 m_iExplosionCount; // offset 0x1ADC, size 0x4, align 4
    int32 m_iExplosionTotalCount; // offset 0x1AE0, size 0x4, align 4
    int32 m_iExplosionQuadrant; // offset 0x1AE4, size 0x4, align 4
    int32 m_iExplosionDistance; // offset 0x1AE8, size 0x4, align 4
    int32 shard_self_movement_speed_slow_pct; // offset 0x1AEC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AF0, size 0x4, align 255
    char _pad_1AF4[0x14]; // offset 0x1AF4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1B08, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hHitHeroes; // offset 0x1B20, size 0x18, align 8
    bool m_bHitInvisibleHero; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x3]; // offset 0x1B39
    int32 can_move; // offset 0x1B3C, size 0x4, align 4
};
