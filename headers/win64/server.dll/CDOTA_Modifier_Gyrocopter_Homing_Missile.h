#pragma once

class CDOTA_Modifier_Gyrocopter_Homing_Missile : public CDOTA_Buff /*0x0*/  // sizeof 0x1B80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1AF8, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1AFC, size 0x4, align 255
    int32 acceleration; // offset 0x1B00, size 0x4, align 4
    float32 hit_damage; // offset 0x1B04, size 0x4, align 4
    int32 max_distance; // offset 0x1B08, size 0x4, align 4
    float32 shard_radius; // offset 0x1B0C, size 0x4, align 4
    float32 shard_delay; // offset 0x1B10, size 0x4, align 4
    float32 pre_flight_time; // offset 0x1B14, size 0x4, align 4
    float32 stun_duration; // offset 0x1B18, size 0x4, align 4
    int32 m_nTeamNumber; // offset 0x1B1C, size 0x4, align 4
    char _pad_1B20[0x14]; // offset 0x1B20
    float32 speed; // offset 0x1B34, size 0x4, align 4
    int32 hits_to_kill; // offset 0x1B38, size 0x4, align 4
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1B3C, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B40, size 0xC, align 4
    char _pad_1B4C[0x4]; // offset 0x1B4C
    CountdownTimer m_EnemyVision; // offset 0x1B50, size 0x18, align 8
    CountdownTimer m_MoveTime; // offset 0x1B68, size 0x18, align 8
};
