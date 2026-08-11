#pragma once

class CDOTA_Modifier_Tinker_Turret : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 missile_range; // offset 0x1A78, size 0x4, align 4
    float32 missile_target_range; // offset 0x1A7C, size 0x4, align 4
    float32 missile_width; // offset 0x1A80, size 0x4, align 4
    float32 missile_speed; // offset 0x1A84, size 0x4, align 4
    float32 activation_time; // offset 0x1A88, size 0x4, align 4
    float32 turret_duration; // offset 0x1A8C, size 0x4, align 4
    float32 turret_placement_radius; // offset 0x1A90, size 0x4, align 4
    float32 knockback_distance; // offset 0x1A94, size 0x4, align 4
    float32 initial_slow; // offset 0x1A98, size 0x4, align 4
    float32 slow_duration; // offset 0x1A9C, size 0x4, align 4
    float32 additional_attack_speed; // offset 0x1AA0, size 0x4, align 4
    float32 duration_reduction_per_attack; // offset 0x1AA4, size 0x4, align 4
    float32 missile_spawn_interval; // offset 0x1AA8, size 0x4, align 4
    int32 targets_creeps; // offset 0x1AAC, size 0x4, align 4
    int32 turret_hp; // offset 0x1AB0, size 0x4, align 4
    int32 turret_ammo; // offset 0x1AB4, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AB8, size 0x4, align 4
    GameTime_t m_flLastMissileFiredTime; // offset 0x1ABC, size 0x4, align 255
    bool m_bFixedDirection; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
