#pragma once

class CDOTA_Modifier_Luna_MoonGlaive_Shield : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 rotating_glaives; // offset 0x1A58, size 0x4, align 4
    float32 rotating_glaives_hit_radius; // offset 0x1A5C, size 0x4, align 4
    float32 rotating_glaives_speed; // offset 0x1A60, size 0x4, align 4
    float32 rotating_glaives_collision_damage; // offset 0x1A64, size 0x4, align 4
    float32 rotating_glaives_movement_radius; // offset 0x1A68, size 0x4, align 4
    float32 rotating_glaives_movement_radius_expand_speed_scale; // offset 0x1A6C, size 0x4, align 4
    float32 rotating_glaives_damage_reduction; // offset 0x1A70, size 0x4, align 4
    float32 rotating_glaives_duration; // offset 0x1A74, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
