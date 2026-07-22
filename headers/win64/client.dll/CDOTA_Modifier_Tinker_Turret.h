#pragma once

class CDOTA_Modifier_Tinker_Turret : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 missile_range; // offset 0x1A58, size 0x4, align 4
    float32 missile_target_range; // offset 0x1A5C, size 0x4, align 4
    float32 missile_width; // offset 0x1A60, size 0x4, align 4
    float32 missile_speed; // offset 0x1A64, size 0x4, align 4
    float32 activation_time; // offset 0x1A68, size 0x4, align 4
    float32 turret_duration; // offset 0x1A6C, size 0x4, align 4
    float32 turret_placement_radius; // offset 0x1A70, size 0x4, align 4
    float32 knockback_distance; // offset 0x1A74, size 0x4, align 4
    float32 initial_slow; // offset 0x1A78, size 0x4, align 4
    float32 slow_duration; // offset 0x1A7C, size 0x4, align 4
    float32 additional_attack_speed; // offset 0x1A80, size 0x4, align 4
    float32 duration_reduction_per_attack; // offset 0x1A84, size 0x4, align 4
    float32 missile_spawn_interval; // offset 0x1A88, size 0x4, align 4
    int32 targets_creeps; // offset 0x1A8C, size 0x4, align 4
    int32 turret_hp; // offset 0x1A90, size 0x4, align 4
    int32 turret_ammo; // offset 0x1A94, size 0x4, align 4
};
