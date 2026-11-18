#pragma once

class CDOTA_Modifier_Nian_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1BA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flTotalTimeInAir; // offset 0x1AF8, size 0x4, align 4
    float32 m_flInitialVelocity; // offset 0x1AFC, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B00, size 0xC, align 4
    Vector m_vTargetHorizontalDirection; // offset 0x1B0C, size 0xC, align 4
    VectorWS m_vTargetPosition; // offset 0x1B18, size 0xC, align 4
    float32 m_flCurrentTimeHoriz; // offset 0x1B24, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1B28, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    float32 m_flHorizDelayTime; // offset 0x1B30, size 0x4, align 4
    float32 m_flVertDelayTime; // offset 0x1B34, size 0x4, align 4
    float32 m_flLeapSequenceDuration; // offset 0x1B38, size 0x4, align 4
    float32 m_flClawDamageTime; // offset 0x1B3C, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x1B40, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B44, size 0x4, align 4
    bool m_bPlayedSwipeSound; // offset 0x1B48, size 0x1, align 1
    char _pad_1B49[0x3]; // offset 0x1B49
    int32 pounce_distance; // offset 0x1B4C, size 0x4, align 4
    float32 pounce_speed; // offset 0x1B50, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1B54, size 0x4, align 4
    int32 pounce_radius; // offset 0x1B58, size 0x4, align 4
    int32 pounce_damage; // offset 0x1B5C, size 0x4, align 4
    int32 stun_radius; // offset 0x1B60, size 0x4, align 4
    float32 stun_duration; // offset 0x1B64, size 0x4, align 4
    float32 leash_duration; // offset 0x1B68, size 0x4, align 4
    float32 initial_delay; // offset 0x1B6C, size 0x4, align 4
    float32 landing_delay; // offset 0x1B70, size 0x4, align 4
    float32 vertical_adjust; // offset 0x1B74, size 0x4, align 4
    float32 vertical_adjust_max_distance; // offset 0x1B78, size 0x4, align 4
    float32 vertical_adjust_min_distance; // offset 0x1B7C, size 0x4, align 4
    int32 claw_damage; // offset 0x1B80, size 0x4, align 4
    int32 claw_damage_radius; // offset 0x1B84, size 0x4, align 4
    float32 claw_damage_delay; // offset 0x1B88, size 0x4, align 4
    float32 claw_damage_duration; // offset 0x1B8C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vHitEntities; // offset 0x1B90, size 0x18, align 8
};
