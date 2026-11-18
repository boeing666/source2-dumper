#pragma once

class CDOTA_Modifier_Tinker_Turret : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 missile_range; // offset 0x1AF8, size 0x4, align 4
    float32 missile_target_range; // offset 0x1AFC, size 0x4, align 4
    float32 missile_width; // offset 0x1B00, size 0x4, align 4
    float32 missile_speed; // offset 0x1B04, size 0x4, align 4
    float32 activation_time; // offset 0x1B08, size 0x4, align 4
    float32 turret_duration; // offset 0x1B0C, size 0x4, align 4
    float32 turret_placement_radius; // offset 0x1B10, size 0x4, align 4
    float32 knockback_distance; // offset 0x1B14, size 0x4, align 4
    float32 initial_slow; // offset 0x1B18, size 0x4, align 4
    float32 slow_duration; // offset 0x1B1C, size 0x4, align 4
    float32 additional_attack_speed; // offset 0x1B20, size 0x4, align 4
    float32 duration_reduction_per_attack; // offset 0x1B24, size 0x4, align 4
    float32 missile_spawn_interval; // offset 0x1B28, size 0x4, align 4
    int32 targets_creeps; // offset 0x1B2C, size 0x4, align 4
    int32 turret_hp; // offset 0x1B30, size 0x4, align 4
    int32 turret_ammo; // offset 0x1B34, size 0x4, align 4
};
