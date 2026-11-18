#pragma once

class CDOTA_Modifier_Nian_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B58, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 pounce_distance; // offset 0x1AF8, size 0x4, align 4
    float32 pounce_speed; // offset 0x1AFC, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1B00, size 0x4, align 4
    int32 pounce_radius; // offset 0x1B04, size 0x4, align 4
    int32 pounce_damage; // offset 0x1B08, size 0x4, align 4
    int32 stun_radius; // offset 0x1B0C, size 0x4, align 4
    float32 stun_duration; // offset 0x1B10, size 0x4, align 4
    float32 leash_duration; // offset 0x1B14, size 0x4, align 4
    float32 initial_delay; // offset 0x1B18, size 0x4, align 4
    float32 landing_delay; // offset 0x1B1C, size 0x4, align 4
    float32 vertical_adjust; // offset 0x1B20, size 0x4, align 4
    float32 vertical_adjust_max_distance; // offset 0x1B24, size 0x4, align 4
    float32 vertical_adjust_min_distance; // offset 0x1B28, size 0x4, align 4
    int32 claw_damage; // offset 0x1B2C, size 0x4, align 4
    int32 claw_damage_radius; // offset 0x1B30, size 0x4, align 4
    float32 claw_damage_delay; // offset 0x1B34, size 0x4, align 4
    float32 claw_damage_duration; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
    CUtlVector< CHandle< C_BaseEntity > > m_vHitEntities; // offset 0x1B40, size 0x18, align 8
};
