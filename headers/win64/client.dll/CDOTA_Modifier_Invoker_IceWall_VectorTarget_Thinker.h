#pragma once

class CDOTA_Modifier_Invoker_IceWall_VectorTarget_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 slow; // offset 0x1A58, size 0x4, align 4
    float32 slow_duration; // offset 0x1A5C, size 0x4, align 4
    float32 root_duration; // offset 0x1A60, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A64, size 0x4, align 4
    float32 root_damage; // offset 0x1A68, size 0x4, align 4
    float32 tick_interval; // offset 0x1A6C, size 0x4, align 4
    float32 wall_total_length; // offset 0x1A70, size 0x4, align 4
    float32 wall_width; // offset 0x1A74, size 0x4, align 4
    VectorWS m_vWallCenter; // offset 0x1A78, size 0xC, align 4
    Vector m_vWallDirection; // offset 0x1A84, size 0xC, align 4
    VectorWS m_vWallRight; // offset 0x1A90, size 0xC, align 4
    VectorWS m_vWallLeft; // offset 0x1A9C, size 0xC, align 4
    ParticleIndex_t m_nParticleIndexA; // offset 0x1AA8, size 0x4, align 255
    ParticleIndex_t m_nParticleIndexB; // offset 0x1AAC, size 0x4, align 255
    bool m_bStartedExpanding; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x3]; // offset 0x1AB1
    float32 glacier_formation_speed; // offset 0x1AB4, size 0x4, align 4
    GameTime_t m_flFormationStartTime; // offset 0x1AB8, size 0x4, align 255
    bool m_bGrantedGem; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    CUtlVector< CHandle< C_BaseEntity > > m_vecEnemiesInWall; // offset 0x1AC0, size 0x18, align 8
};
