#pragma once

class CDOTA_Modifier_Nian_Frenzy : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage; // offset 0x1A58, size 0x4, align 4
    int32 damage_radius; // offset 0x1A5C, size 0x4, align 4
    int32 stun_radius; // offset 0x1A60, size 0x4, align 4
    float32 dive_distance; // offset 0x1A64, size 0x4, align 4
    float32 initial_rise_time; // offset 0x1A68, size 0x4, align 4
    float32 right_swipe_time; // offset 0x1A6C, size 0x4, align 4
    float32 left_swipe_time; // offset 0x1A70, size 0x4, align 4
    float32 knockdown_duration; // offset 0x1A74, size 0x4, align 4
    float32 stun_duration; // offset 0x1A78, size 0x4, align 4
    int32 m_nTickCounter; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hEnemies; // offset 0x1A80, size 0x18, align 8
};
