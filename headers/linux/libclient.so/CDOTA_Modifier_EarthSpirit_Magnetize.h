#pragma once

class CDOTA_Modifier_EarthSpirit_Magnetize : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 rock_search_radius; // offset 0x1AF8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AFC, size 0x4, align 4
    float32 damage_interval; // offset 0x1B00, size 0x4, align 4
    float32 rock_explosion_delay; // offset 0x1B04, size 0x4, align 4
    float32 damage_duration; // offset 0x1B08, size 0x4, align 4
    float32 cast_radius; // offset 0x1B0C, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x1B10, size 0x4, align 4
    bool magnetized_rocks_buff_self; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    int32 magnetized_rocks_buff_self_duration; // offset 0x1B18, size 0x4, align 4
    int32 magnetize_self; // offset 0x1B1C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hExplodedRocks; // offset 0x1B20, size 0x18, align 8
    float32 duration; // offset 0x1B38, size 0x4, align 4
    bool m_bShowOverhead; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
};
