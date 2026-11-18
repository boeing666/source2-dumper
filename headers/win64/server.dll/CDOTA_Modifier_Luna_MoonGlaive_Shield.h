#pragma once

class CDOTA_Modifier_Luna_MoonGlaive_Shield : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 rotating_glaives; // offset 0x1AF8, size 0x4, align 4
    float32 rotating_glaives_hit_radius; // offset 0x1AFC, size 0x4, align 4
    float32 rotating_glaives_speed; // offset 0x1B00, size 0x4, align 4
    float32 rotating_glaives_collision_damage; // offset 0x1B04, size 0x4, align 4
    float32 rotating_glaives_movement_radius; // offset 0x1B08, size 0x4, align 4
    float32 rotating_glaives_movement_radius_expand_speed_scale; // offset 0x1B0C, size 0x4, align 4
    float32 rotating_glaives_damage_reduction; // offset 0x1B10, size 0x4, align 4
    float32 rotating_glaives_duration; // offset 0x1B14, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1B18, size 0x4, align 4
    float32 m_flCurRotation; // offset 0x1B1C, size 0x4, align 4
    float32 m_flCurRadius; // offset 0x1B20, size 0x4, align 4
    float32 m_flCurRadiusUnclamped; // offset 0x1B24, size 0x4, align 4
    float32 m_flSecondsPerRotation; // offset 0x1B28, size 0x4, align 4
    float32 m_flMaxRadius; // offset 0x1B2C, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1B30, size 0x4, align 255
    char _pad_1B34[0x34]; // offset 0x1B34
};
