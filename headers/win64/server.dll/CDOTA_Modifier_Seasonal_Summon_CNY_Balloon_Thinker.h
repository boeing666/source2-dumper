#pragma once

class CDOTA_Modifier_Seasonal_Summon_CNY_Balloon_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
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
    VectorWS m_vLastPos; // offset 0x1B18, size 0xC, align 4
    Vector m_vDir; // offset 0x1B24, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1B30, size 0x4, align 4
    float32 m_flDistRemaining; // offset 0x1B34, size 0x4, align 4
    float32 m_flTreeTimeRemaining; // offset 0x1B38, size 0x4, align 4
    CHandle< CBaseEntity > m_hLastHit; // offset 0x1B3C, size 0x4, align 4
};
