#pragma once

class CDOTA_Modifier_CrystalMaiden_FreezingField : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    int32 damage; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A60, size 0x4, align 4
    float32 explosion_interval; // offset 0x1A64, size 0x4, align 4
    float32 shard_bonus_explosion; // offset 0x1A68, size 0x4, align 4
    float32 explosion_radius; // offset 0x1A6C, size 0x4, align 4
    float32 slow_duration; // offset 0x1A70, size 0x4, align 4
    int32 explosion_min_dist; // offset 0x1A74, size 0x4, align 4
    float32 explosion_max_dist; // offset 0x1A78, size 0x4, align 4
    float32 frostbite_delay; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_fLastTick; // offset 0x1A80, size 0x4, align 255
    float32 m_fTimeAccumulator; // offset 0x1A84, size 0x4, align 4
    int32 m_iExplosionCount; // offset 0x1A88, size 0x4, align 4
    int32 m_iExplosionTotalCount; // offset 0x1A8C, size 0x4, align 4
    int32 m_iExplosionQuadrant; // offset 0x1A90, size 0x4, align 4
    int32 m_iExplosionDistance; // offset 0x1A94, size 0x4, align 4
    int32 shard_self_movement_speed_slow_pct; // offset 0x1A98, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A9C, size 0x4, align 255
    char _pad_1AA0[0x18]; // offset 0x1AA0
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x1AB8, size 0x18, align 8
    int32 can_move; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x4]; // offset 0x1AD4
};
