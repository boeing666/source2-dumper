#pragma once

class CDOTA_Modifier_Bloodseeker_Thirst : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 half_bonus_aoe; // offset 0x1A58, size 0x4, align 4
    int32 visibility_threshold_pct; // offset 0x1A5C, size 0x4, align 4
    int32 invis_threshold_pct; // offset 0x1A60, size 0x4, align 4
    int32 min_bonus_pct; // offset 0x1A64, size 0x4, align 4
    int32 max_bonus_pct; // offset 0x1A68, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1A6C, size 0x4, align 4
    int32 active_movement_speed; // offset 0x1A70, size 0x4, align 4
    float32 linger_duration; // offset 0x1A74, size 0x4, align 4
    float32 inactive_penalty_pct; // offset 0x1A78, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
};
