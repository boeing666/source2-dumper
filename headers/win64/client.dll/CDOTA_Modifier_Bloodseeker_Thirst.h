#pragma once

class CDOTA_Modifier_Bloodseeker_Thirst : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 half_bonus_aoe; // offset 0x1AF8, size 0x4, align 4
    int32 visibility_threshold_pct; // offset 0x1AFC, size 0x4, align 4
    int32 invis_threshold_pct; // offset 0x1B00, size 0x4, align 4
    int32 min_bonus_pct; // offset 0x1B04, size 0x4, align 4
    int32 max_bonus_pct; // offset 0x1B08, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1B0C, size 0x4, align 4
    int32 active_movement_speed; // offset 0x1B10, size 0x4, align 4
    float32 linger_duration; // offset 0x1B14, size 0x4, align 4
    float32 inactive_penalty_pct; // offset 0x1B18, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
};
