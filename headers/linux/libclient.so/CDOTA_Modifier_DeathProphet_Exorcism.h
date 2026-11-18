#pragma once

class CDOTA_Modifier_DeathProphet_Exorcism : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    int32 spirit_speed; // offset 0x1AFC, size 0x4, align 4
    int32 max_distance; // offset 0x1B00, size 0x4, align 4
    int32 give_up_distance; // offset 0x1B04, size 0x4, align 4
    int32 heal_percent; // offset 0x1B08, size 0x4, align 4
    int32 spirit_duration; // offset 0x1B0C, size 0x4, align 4
    float32 ghost_spawn_rate; // offset 0x1B10, size 0x4, align 4
    bool unslowable; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    float32 m_flBonusExorcismDuration; // offset 0x1B18, size 0x4, align 4
    int32 m_iSpirits; // offset 0x1B1C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1B20, size 0x4, align 255
    GameTime_t m_fLastThinkTime; // offset 0x1B24, size 0x4, align 255
    GameTime_t m_fSpawnTime; // offset 0x1B28, size 0x4, align 255
    bool m_bFirstSpawn; // offset 0x1B2C, size 0x1, align 1
    bool m_bCommentedOnExpired; // offset 0x1B2D, size 0x1, align 1
    bool m_bForceExpired; // offset 0x1B2E, size 0x1, align 1
    char _pad_1B2F[0x1]; // offset 0x1B2F
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeadHeroes; // offset 0x1B30, size 0x18, align 8
    CUtlVector< sSpiritInfo* > m_vecSpirits; // offset 0x1B48, size 0x18, align 8
    char _pad_1B60[0x18]; // offset 0x1B60
};
