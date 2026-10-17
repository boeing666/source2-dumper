#pragma once

class CDOTA_Modifier_Luna_MoonGlaive_Shield : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 rotating_glaives; // offset 0x1AA8, size 0x4, align 4
    float32 rotating_glaives_hit_radius; // offset 0x1AAC, size 0x4, align 4
    float32 rotating_glaives_speed; // offset 0x1AB0, size 0x4, align 4
    float32 rotating_glaives_collision_damage; // offset 0x1AB4, size 0x4, align 4
    float32 rotating_glaives_movement_radius; // offset 0x1AB8, size 0x4, align 4
    float32 rotating_glaives_movement_radius_expand_speed_scale; // offset 0x1ABC, size 0x4, align 4
    float32 rotating_glaives_damage_reduction; // offset 0x1AC0, size 0x4, align 4
    float32 rotating_glaives_duration; // offset 0x1AC4, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
