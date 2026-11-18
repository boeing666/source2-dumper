#pragma once

class CDOTA_Modifier_Tinker_Turret_Drop_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1BA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 missile_damage; // offset 0x1AF8, size 0x4, align 4
    float32 radius; // offset 0x1AFC, size 0x4, align 4
    float32 turret_placement_radius; // offset 0x1B00, size 0x4, align 4
    float32 delay; // offset 0x1B04, size 0x4, align 4
    float32 drop_knockback_distance; // offset 0x1B08, size 0x4, align 4
    float32 drop_knockback_distance_tinker; // offset 0x1B0C, size 0x4, align 4
    float32 drop_knockback_duration; // offset 0x1B10, size 0x4, align 4
    float32 drop_knockback_duration_tinker; // offset 0x1B14, size 0x4, align 4
    float32 slow_duration; // offset 0x1B18, size 0x4, align 4
    float32 missile_target_range; // offset 0x1B1C, size 0x4, align 4
    float32 activation_time; // offset 0x1B20, size 0x4, align 4
    float32 turret_duration; // offset 0x1B24, size 0x4, align 4
    int32 turrets_per_drop; // offset 0x1B28, size 0x4, align 4
    int32 extra_turrets_per_drop; // offset 0x1B2C, size 0x4, align 4
    float32 drop_damage; // offset 0x1B30, size 0x4, align 4
    float32 pre_delay; // offset 0x1B34, size 0x4, align 4
    bool m_bAttachToRocket1; // offset 0x1B38, size 0x1, align 1
    char _pad_1B39[0x7]; // offset 0x1B39
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0x1B40, size 0x18, align 8
    bool m_bHitInvisibleHeroes; // offset 0x1B58, size 0x1, align 1
    char _pad_1B59[0x3]; // offset 0x1B59
    ParticleIndex_t m_nIndicatorParticle; // offset 0x1B5C, size 0x4, align 255
    bool m_bWaitingForPreDelay; // offset 0x1B60, size 0x1, align 1
    bool m_bTurretsSpawned; // offset 0x1B61, size 0x1, align 1
    char _pad_1B62[0x6]; // offset 0x1B62
    CUtlVector< CHandle< CBaseEntity > > m_vecTurrets; // offset 0x1B68, size 0x18, align 8
    CUtlVector< float32 > m_vecTurretActivationTimes; // offset 0x1B80, size 0x18, align 8
    float32 m_flTotalTurretLifeTime; // offset 0x1B98, size 0x4, align 4
    float32 m_flTurretSpawnTime; // offset 0x1B9C, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x1BA0, size 0x4, align 4
    char _pad_1BA4[0x4]; // offset 0x1BA4
};
