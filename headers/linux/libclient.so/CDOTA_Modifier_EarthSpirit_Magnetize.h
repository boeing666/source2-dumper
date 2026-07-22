#pragma once

class CDOTA_Modifier_EarthSpirit_Magnetize : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 rock_search_radius; // offset 0x1A58, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A5C, size 0x4, align 4
    float32 damage_interval; // offset 0x1A60, size 0x4, align 4
    float32 rock_explosion_delay; // offset 0x1A64, size 0x4, align 4
    float32 damage_duration; // offset 0x1A68, size 0x4, align 4
    float32 cast_radius; // offset 0x1A6C, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x1A70, size 0x4, align 4
    bool magnetized_rocks_buff_self; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    int32 magnetized_rocks_buff_self_duration; // offset 0x1A78, size 0x4, align 4
    int32 magnetize_self; // offset 0x1A7C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hExplodedRocks; // offset 0x1A80, size 0x18, align 8
    float32 duration; // offset 0x1A98, size 0x4, align 4
    bool m_bShowOverhead; // offset 0x1A9C, size 0x1, align 1
    char _pad_1A9D[0x3]; // offset 0x1A9D
};
