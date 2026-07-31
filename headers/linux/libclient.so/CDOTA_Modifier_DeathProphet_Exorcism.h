#pragma once

class CDOTA_Modifier_DeathProphet_Exorcism : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    int32 spirit_speed; // offset 0x1A7C, size 0x4, align 4
    int32 max_distance; // offset 0x1A80, size 0x4, align 4
    int32 give_up_distance; // offset 0x1A84, size 0x4, align 4
    int32 heal_percent; // offset 0x1A88, size 0x4, align 4
    int32 spirit_duration; // offset 0x1A8C, size 0x4, align 4
    float32 ghost_spawn_rate; // offset 0x1A90, size 0x4, align 4
    int32 movement_bonus; // offset 0x1A94, size 0x4, align 4
    float32 m_flBonusExorcismDuration; // offset 0x1A98, size 0x4, align 4
    int32 m_iSpirits; // offset 0x1A9C, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1AA0, size 0x4, align 255
    GameTime_t m_fLastThinkTime; // offset 0x1AA4, size 0x4, align 255
    GameTime_t m_fSpawnTime; // offset 0x1AA8, size 0x4, align 255
    bool m_bFirstSpawn; // offset 0x1AAC, size 0x1, align 1
    bool m_bCommentedOnExpired; // offset 0x1AAD, size 0x1, align 1
    bool m_bForceExpired; // offset 0x1AAE, size 0x1, align 1
    char _pad_1AAF[0x1]; // offset 0x1AAF
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeadHeroes; // offset 0x1AB0, size 0x18, align 8
    CUtlVector< sSpiritInfo* > m_vecSpirits; // offset 0x1AC8, size 0x18, align 8
    char _pad_1AE0[0x18]; // offset 0x1AE0
};
