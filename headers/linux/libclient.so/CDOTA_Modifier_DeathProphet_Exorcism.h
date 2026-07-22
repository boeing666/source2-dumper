#pragma once

class CDOTA_Modifier_DeathProphet_Exorcism : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    int32 spirit_speed; // offset 0x1A5C, size 0x4, align 4
    int32 max_distance; // offset 0x1A60, size 0x4, align 4
    int32 give_up_distance; // offset 0x1A64, size 0x4, align 4
    int32 heal_percent; // offset 0x1A68, size 0x4, align 4
    int32 spirit_duration; // offset 0x1A6C, size 0x4, align 4
    float32 ghost_spawn_rate; // offset 0x1A70, size 0x4, align 4
    int32 movement_bonus; // offset 0x1A74, size 0x4, align 4
    float32 m_flBonusExorcismDuration; // offset 0x1A78, size 0x4, align 4
    int32 m_iSpirits; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_fLastThinkTime; // offset 0x1A84, size 0x4, align 255
    GameTime_t m_fSpawnTime; // offset 0x1A88, size 0x4, align 255
    bool m_bFirstSpawn; // offset 0x1A8C, size 0x1, align 1
    bool m_bCommentedOnExpired; // offset 0x1A8D, size 0x1, align 1
    bool m_bForceExpired; // offset 0x1A8E, size 0x1, align 1
    char _pad_1A8F[0x1]; // offset 0x1A8F
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeadHeroes; // offset 0x1A90, size 0x18, align 8
    CUtlVector< sSpiritInfo* > m_vecSpirits; // offset 0x1AA8, size 0x18, align 8
    char _pad_1AC0[0x18]; // offset 0x1AC0
};
