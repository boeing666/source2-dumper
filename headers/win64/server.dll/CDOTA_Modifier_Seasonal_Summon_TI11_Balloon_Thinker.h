#pragma once

class CDOTA_Modifier_Seasonal_Summon_TI11_Balloon_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 speed; // offset 0x1AF8, size 0x4, align 4
    int32 min_distance_before_bounce; // offset 0x1AFC, size 0x4, align 4
    float32 drag; // offset 0x1B00, size 0x4, align 4
    float32 max_height; // offset 0x1B04, size 0x4, align 4
    float32 max_vertical_move_time; // offset 0x1B08, size 0x4, align 4
    float32 bounce_turn_angle; // offset 0x1B0C, size 0x4, align 4
    float32 bounce_turn_angle_tree; // offset 0x1B10, size 0x4, align 4
    float32 bounce_delay; // offset 0x1B14, size 0x4, align 4
    int32 max_bounces; // offset 0x1B18, size 0x4, align 4
    float32 max_model_scale; // offset 0x1B1C, size 0x4, align 4
    float32 power_growth_exponent; // offset 0x1B20, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x1B24, size 0xC, align 4
    Vector m_vDir; // offset 0x1B30, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1B3C, size 0x4, align 4
    float32 m_flDistRemaining; // offset 0x1B40, size 0x4, align 4
    float32 m_flTreeTimeRemaining; // offset 0x1B44, size 0x4, align 4
    int32 m_nTimesBounced; // offset 0x1B48, size 0x4, align 4
    float32 m_flModelScale; // offset 0x1B4C, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHit; // offset 0x1B50, size 0x4, align 4
    char _pad_1B54[0x4]; // offset 0x1B54
};
