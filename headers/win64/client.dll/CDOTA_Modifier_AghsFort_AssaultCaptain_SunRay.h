#pragma once

class CDOTA_Modifier_AghsFort_AssaultCaptain_SunRay : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 hp_cost_perc_per_second; // offset 0x1A58, size 0x4, align 4
    int32 beam_range; // offset 0x1A5C, size 0x4, align 4
    int32 base_damage; // offset 0x1A60, size 0x4, align 4
    int32 base_heal; // offset 0x1A64, size 0x4, align 4
    float32 tick_interval; // offset 0x1A68, size 0x4, align 4
    float32 forward_move_speed; // offset 0x1A6C, size 0x4, align 4
    float32 turn_rate_initial; // offset 0x1A70, size 0x4, align 4
    float32 turn_rate; // offset 0x1A74, size 0x4, align 4
    int32 radius; // offset 0x1A78, size 0x4, align 4
    int32 self_turn_rate_percent; // offset 0x1A7C, size 0x4, align 4
    float32 m_flCurrentTime; // offset 0x1A80, size 0x4, align 4
    GameTime_t m_flLastDamageTime; // offset 0x1A84, size 0x4, align 255
    float32 m_flAccumulatedSelfDamage; // offset 0x1A88, size 0x4, align 4
    bool m_bMovingForward; // offset 0x1A8C, size 0x1, align 1
    bool m_bTurningFast; // offset 0x1A8D, size 0x1, align 1
    char _pad_1A8E[0x2]; // offset 0x1A8E
    float32 m_flFacingTarget; // offset 0x1A90, size 0x4, align 4
    float32 hp_perc_damage; // offset 0x1A94, size 0x4, align 4
    float32 hp_perc_heal; // offset 0x1A98, size 0x4, align 4
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1A9C, size 0x4, align 255
    CHandle< C_BaseEntity >[8] m_hVisionThinkers; // offset 0x1AA0, size 0x20, align 4
    CHandle< C_BaseEntity > m_hBeamEnd; // offset 0x1AC0, size 0x4, align 4
    bool m_bCreatedVisionThinkers; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    CHandle< C_BaseEntity > m_hBeamEndSound; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
