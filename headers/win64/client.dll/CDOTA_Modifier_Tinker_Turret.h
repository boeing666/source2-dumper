#pragma once

class CDOTA_Modifier_Tinker_Turret : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 missile_range; // offset 0x1AA8, size 0x4, align 4
    float32 missile_target_range; // offset 0x1AAC, size 0x4, align 4
    float32 missile_width; // offset 0x1AB0, size 0x4, align 4
    float32 missile_speed; // offset 0x1AB4, size 0x4, align 4
    float32 activation_time; // offset 0x1AB8, size 0x4, align 4
    float32 turret_duration; // offset 0x1ABC, size 0x4, align 4
    float32 turret_placement_radius; // offset 0x1AC0, size 0x4, align 4
    float32 knockback_distance; // offset 0x1AC4, size 0x4, align 4
    float32 initial_slow; // offset 0x1AC8, size 0x4, align 4
    float32 slow_duration; // offset 0x1ACC, size 0x4, align 4
    float32 additional_attack_speed; // offset 0x1AD0, size 0x4, align 4
    float32 duration_reduction_per_attack; // offset 0x1AD4, size 0x4, align 4
    float32 missile_spawn_interval; // offset 0x1AD8, size 0x4, align 4
    int32 targets_creeps; // offset 0x1ADC, size 0x4, align 4
    int32 turret_hp; // offset 0x1AE0, size 0x4, align 4
    int32 turret_ammo; // offset 0x1AE4, size 0x4, align 4
};
