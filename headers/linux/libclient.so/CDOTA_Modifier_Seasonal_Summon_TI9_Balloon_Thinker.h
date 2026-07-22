#pragma once

class CDOTA_Modifier_Seasonal_Summon_TI9_Balloon_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 speed; // offset 0x1A58, size 0x4, align 4
    int32 min_distance_before_bounce; // offset 0x1A5C, size 0x4, align 4
    float32 drag; // offset 0x1A60, size 0x4, align 4
    float32 max_height; // offset 0x1A64, size 0x4, align 4
    float32 max_vertical_move_time; // offset 0x1A68, size 0x4, align 4
    float32 bounce_turn_angle; // offset 0x1A6C, size 0x4, align 4
    float32 bounce_turn_angle_tree; // offset 0x1A70, size 0x4, align 4
    float32 bounce_delay; // offset 0x1A74, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x1A78, size 0xC, align 4
    Vector m_vDir; // offset 0x1A84, size 0xC, align 4
    float32 m_flSpeed; // offset 0x1A90, size 0x4, align 4
    float32 m_flDistRemaining; // offset 0x1A94, size 0x4, align 4
    float32 m_flTreeTimeRemaining; // offset 0x1A98, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLastHit; // offset 0x1A9C, size 0x4, align 4
};
