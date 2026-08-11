#pragma once

class CDOTA_Modifier_Nian_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flTotalTimeInAir; // offset 0x1A78, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A80, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1A8C, size 0xC, align 4
    VectorWS m_vTargetPosition; // offset 0x1A98, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1AA4, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AA8, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    float32 m_flHorizDelayTime; // offset 0x1AB0, size 0x4, align 4
    float32 m_flVertDelayTime; // offset 0x1AB4, size 0x4, align 4
    float32 m_flLeapSequenceDuration; // offset 0x1AB8, size 0x4, align 4
    float32 m_flClawDamageTime; // offset 0x1ABC, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x1AC0, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AC4, size 0x4, align 4
    bool m_bPlayedSwipeSound; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x3]; // offset 0x1AC9
    int32 pounce_distance; // offset 0x1ACC, size 0x4, align 4
    float32 pounce_speed; // offset 0x1AD0, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1AD4, size 0x4, align 4
    int32 pounce_radius; // offset 0x1AD8, size 0x4, align 4
    int32 pounce_damage; // offset 0x1ADC, size 0x4, align 4
    int32 stun_radius; // offset 0x1AE0, size 0x4, align 4
    float32 stun_duration; // offset 0x1AE4, size 0x4, align 4
    float32 leash_duration; // offset 0x1AE8, size 0x4, align 4
    float32 initial_delay; // offset 0x1AEC, size 0x4, align 4
    float32 landing_delay; // offset 0x1AF0, size 0x4, align 4
    float32 vertical_adjust; // offset 0x1AF4, size 0x4, align 4
    float32 vertical_adjust_max_distance; // offset 0x1AF8, size 0x4, align 4
    float32 vertical_adjust_min_distance; // offset 0x1AFC, size 0x4, align 4
    int32 claw_damage; // offset 0x1B00, size 0x4, align 4
    int32 claw_damage_radius; // offset 0x1B04, size 0x4, align 4
    float32 claw_damage_delay; // offset 0x1B08, size 0x4, align 4
    float32 claw_damage_duration; // offset 0x1B0C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vHitEntities; // offset 0x1B10, size 0x18, align 8
};
