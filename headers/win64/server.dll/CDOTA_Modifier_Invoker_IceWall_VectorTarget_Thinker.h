#pragma once

class CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 slow; // offset 0x1AA8, size 0x4, align 4
    float32 slow_duration; // offset 0x1AAC, size 0x4, align 4
    float32 root_duration; // offset 0x1AB0, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AB4, size 0x4, align 4
    float32 root_damage; // offset 0x1AB8, size 0x4, align 4
    float32 tick_interval; // offset 0x1ABC, size 0x4, align 4
    float32 wall_total_length; // offset 0x1AC0, size 0x4, align 4
    float32 wall_width; // offset 0x1AC4, size 0x4, align 4
    VectorWS m_vWallCenter; // offset 0x1AC8, size 0xC, align 4
    Vector m_vWallDirection; // offset 0x1AD4, size 0xC, align 4
    VectorWS m_vWallRight; // offset 0x1AE0, size 0xC, align 4
    VectorWS m_vWallLeft; // offset 0x1AEC, size 0xC, align 4
    ParticleIndex_t m_nParticleIndexA; // offset 0x1AF8, size 0x4, align 255
    ParticleIndex_t m_nParticleIndexB; // offset 0x1AFC, size 0x4, align 255
    bool m_bStartedExpanding; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x3]; // offset 0x1B01
    float32 glacier_formation_speed; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_flFormationStartTime; // offset 0x1B08, size 0x4, align 255
    bool m_bGrantedGem; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x3]; // offset 0x1B0D
    CUtlVector< CHandle< CBaseEntity > > m_vecEnemiesInWall; // offset 0x1B10, size 0x18, align 8
};
