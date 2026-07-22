#pragma once

class CDOTA_Modifier_Marci_Lunge_Arc : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bTriggeredLandingAnim; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32 m_nMaxJumpDistance; // offset 0x1A5C, size 0x4, align 4
    int32 min_jump_distance; // offset 0x1A60, size 0x4, align 4
    int32 max_jump_distance; // offset 0x1A64, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1A68, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1A6C, size 0x4, align 4
    float32 landing_radius; // offset 0x1A70, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A74, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1A78, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1A7C, size 0x4, align 4
    float32 min_acceleration; // offset 0x1A80, size 0x4, align 4
    float32 max_acceleration; // offset 0x1A84, size 0x4, align 4
    float32 impact_damage; // offset 0x1A88, size 0x4, align 4
    int32 impact_position_offset; // offset 0x1A8C, size 0x4, align 4
    int32 ally_impact_damage_pct; // offset 0x1A90, size 0x4, align 4
    float32 ally_buff_duration; // offset 0x1A94, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBounceEntity; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
