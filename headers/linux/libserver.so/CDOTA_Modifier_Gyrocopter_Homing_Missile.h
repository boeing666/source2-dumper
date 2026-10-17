#pragma once

class CDOTA_Modifier_Gyrocopter_Homing_Missile : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1AA8, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1AAC, size 0x4, align 255
    int32 hero_damage; // offset 0x1AB0, size 0x4, align 4
    int32 acceleration; // offset 0x1AB4, size 0x4, align 4
    float32 hit_damage; // offset 0x1AB8, size 0x4, align 4
    int32 max_distance; // offset 0x1ABC, size 0x4, align 4
    float32 shard_radius; // offset 0x1AC0, size 0x4, align 4
    float32 shard_delay; // offset 0x1AC4, size 0x4, align 4
    float32 pre_flight_time; // offset 0x1AC8, size 0x4, align 4
    float32 stun_duration; // offset 0x1ACC, size 0x4, align 4
    int32 m_nTeamNumber; // offset 0x1AD0, size 0x4, align 4
    char _pad_1AD4[0x14]; // offset 0x1AD4
    float32 speed; // offset 0x1AE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1AEC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AF0, size 0xC, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CountdownTimer m_EnemyVision; // offset 0x1B00, size 0x18, align 8
    CountdownTimer m_MoveTime; // offset 0x1B18, size 0x18, align 8
};
