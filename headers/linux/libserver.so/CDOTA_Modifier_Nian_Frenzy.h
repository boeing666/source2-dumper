#pragma once

class CDOTA_Modifier_Nian_Frenzy : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    int32 damage_radius; // offset 0x1AFC, size 0x4, align 4
    int32 stun_radius; // offset 0x1B00, size 0x4, align 4
    float32 dive_distance; // offset 0x1B04, size 0x4, align 4
    float32 initial_rise_time; // offset 0x1B08, size 0x4, align 4
    float32 right_swipe_time; // offset 0x1B0C, size 0x4, align 4
    float32 left_swipe_time; // offset 0x1B10, size 0x4, align 4
    float32 knockdown_duration; // offset 0x1B14, size 0x4, align 4
    float32 stun_duration; // offset 0x1B18, size 0x4, align 4
    int32 m_nTickCounter; // offset 0x1B1C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hEnemies; // offset 0x1B20, size 0x18, align 8
};
