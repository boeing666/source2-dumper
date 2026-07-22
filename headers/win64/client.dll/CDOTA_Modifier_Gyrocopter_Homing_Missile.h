#pragma once

class CDOTA_Modifier_Gyrocopter_Homing_Missile : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A58, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x1A5C, size 0x4, align 255
    int32 hero_damage; // offset 0x1A60, size 0x4, align 4
    int32 acceleration; // offset 0x1A64, size 0x4, align 4
    float32 hit_damage; // offset 0x1A68, size 0x4, align 4
    int32 max_distance; // offset 0x1A6C, size 0x4, align 4
    float32 shard_radius; // offset 0x1A70, size 0x4, align 4
    float32 shard_delay; // offset 0x1A74, size 0x4, align 4
    float32 pre_flight_time; // offset 0x1A78, size 0x4, align 4
    float32 stun_duration; // offset 0x1A7C, size 0x4, align 4
    int32 m_nTeamNumber; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x14]; // offset 0x1A84
    float32 speed; // offset 0x1A98, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1A9C, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AA0, size 0xC, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CountdownTimer m_EnemyVision; // offset 0x1AB0, size 0x18, align 8
    CountdownTimer m_MoveTime; // offset 0x1AC8, size 0x18, align 8
};
