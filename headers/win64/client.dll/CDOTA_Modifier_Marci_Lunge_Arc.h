#pragma once

class CDOTA_Modifier_Marci_Lunge_Arc : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bTriggeredLandingAnim; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    int32 m_nMaxJumpDistance; // offset 0x1AFC, size 0x4, align 4
    int32 min_jump_distance; // offset 0x1B00, size 0x4, align 4
    int32 max_jump_distance; // offset 0x1B04, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1B08, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1B0C, size 0x4, align 4
    float32 landing_radius; // offset 0x1B10, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B14, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1B18, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1B1C, size 0x4, align 4
    float32 min_acceleration; // offset 0x1B20, size 0x4, align 4
    float32 max_acceleration; // offset 0x1B24, size 0x4, align 4
    float32 impact_damage; // offset 0x1B28, size 0x4, align 4
    int32 impact_position_offset; // offset 0x1B2C, size 0x4, align 4
    int32 ally_impact_damage_pct; // offset 0x1B30, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x1B34, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBounceEntity; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
