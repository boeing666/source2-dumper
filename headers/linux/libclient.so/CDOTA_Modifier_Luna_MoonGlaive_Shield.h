#pragma once

class CDOTA_Modifier_Luna_MoonGlaive_Shield : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 rotating_glaives; // offset 0x1A78, size 0x4, align 4
    float32 rotating_glaives_hit_radius; // offset 0x1A7C, size 0x4, align 4
    float32 rotating_glaives_speed; // offset 0x1A80, size 0x4, align 4
    float32 rotating_glaives_collision_damage; // offset 0x1A84, size 0x4, align 4
    float32 rotating_glaives_movement_radius; // offset 0x1A88, size 0x4, align 4
    float32 rotating_glaives_movement_radius_expand_speed_scale; // offset 0x1A8C, size 0x4, align 4
    float32 rotating_glaives_damage_reduction; // offset 0x1A90, size 0x4, align 4
    float32 rotating_glaives_duration; // offset 0x1A94, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
