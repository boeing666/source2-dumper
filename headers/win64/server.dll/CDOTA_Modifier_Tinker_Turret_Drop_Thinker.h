#pragma once

class CDOTA_Modifier_Tinker_Turret_Drop_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 missile_damage; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    float32 turret_placement_radius; // offset 0x1A80, size 0x4, align 4
    float32 delay; // offset 0x1A84, size 0x4, align 4
    float32 drop_knockback_distance; // offset 0x1A88, size 0x4, align 4
    float32 drop_knockback_distance_tinker; // offset 0x1A8C, size 0x4, align 4
    float32 drop_knockback_duration; // offset 0x1A90, size 0x4, align 4
    float32 drop_knockback_duration_tinker; // offset 0x1A94, size 0x4, align 4
    float32 slow_duration; // offset 0x1A98, size 0x4, align 4
    float32 missile_target_range; // offset 0x1A9C, size 0x4, align 4
    float32 activation_time; // offset 0x1AA0, size 0x4, align 4
    float32 turret_duration; // offset 0x1AA4, size 0x4, align 4
    int32 turrets_per_drop; // offset 0x1AA8, size 0x4, align 4
    int32 extra_turrets_per_drop; // offset 0x1AAC, size 0x4, align 4
    float32 drop_damage; // offset 0x1AB0, size 0x4, align 4
    float32 pre_delay; // offset 0x1AB4, size 0x4, align 4
    bool m_bAttachToRocket1; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x7]; // offset 0x1AB9
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0x1AC0, size 0x18, align 8
    bool m_bHitInvisibleHeroes; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    ParticleIndex_t m_nIndicatorParticle; // offset 0x1ADC, size 0x4, align 255
    bool m_bWaitingForPreDelay; // offset 0x1AE0, size 0x1, align 1
    bool m_bTurretsSpawned; // offset 0x1AE1, size 0x1, align 1
    char _pad_1AE2[0x6]; // offset 0x1AE2
    CUtlVector< CHandle< CBaseEntity > > m_vecTurrets; // offset 0x1AE8, size 0x18, align 8
    CUtlVector< float32 > m_vecTurretActivationTimes; // offset 0x1B00, size 0x18, align 8
    float32 m_flTotalTurretLifeTime; // offset 0x1B18, size 0x4, align 4
    float32 m_flTurretSpawnTime; // offset 0x1B1C, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentTarget; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
