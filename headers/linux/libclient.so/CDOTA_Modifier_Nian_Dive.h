#pragma once

class CDOTA_Modifier_Nian_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 pounce_distance; // offset 0x1A78, size 0x4, align 4
    float32 pounce_speed; // offset 0x1A7C, size 0x4, align 4
    float32 pounce_acceleration; // offset 0x1A80, size 0x4, align 4
    int32 pounce_radius; // offset 0x1A84, size 0x4, align 4
    int32 pounce_damage; // offset 0x1A88, size 0x4, align 4
    int32 stun_radius; // offset 0x1A8C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A90, size 0x4, align 4
    float32 leash_duration; // offset 0x1A94, size 0x4, align 4
    float32 initial_delay; // offset 0x1A98, size 0x4, align 4
    float32 landing_delay; // offset 0x1A9C, size 0x4, align 4
    float32 vertical_adjust; // offset 0x1AA0, size 0x4, align 4
    float32 vertical_adjust_max_distance; // offset 0x1AA4, size 0x4, align 4
    float32 vertical_adjust_min_distance; // offset 0x1AA8, size 0x4, align 4
    int32 claw_damage; // offset 0x1AAC, size 0x4, align 4
    int32 claw_damage_radius; // offset 0x1AB0, size 0x4, align 4
    float32 claw_damage_delay; // offset 0x1AB4, size 0x4, align 4
    float32 claw_damage_duration; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CUtlVector< CHandle< C_BaseEntity > > m_vHitEntities; // offset 0x1AC0, size 0x18, align 8
};
