#pragma once

class CDOTA_Modifier_EarthSpirit_Magnetize : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 rock_search_radius; // offset 0x1AA8, size 0x4, align 4
    float32 damage_per_second; // offset 0x1AAC, size 0x4, align 4
    float32 damage_interval; // offset 0x1AB0, size 0x4, align 4
    float32 rock_explosion_delay; // offset 0x1AB4, size 0x4, align 4
    float32 damage_duration; // offset 0x1AB8, size 0x4, align 4
    float32 cast_radius; // offset 0x1ABC, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x1AC0, size 0x4, align 4
    bool magnetized_rocks_buff_self; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    int32 magnetized_rocks_buff_self_duration; // offset 0x1AC8, size 0x4, align 4
    int32 magnetize_self; // offset 0x1ACC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hExplodedRocks; // offset 0x1AD0, size 0x18, align 8
    float32 duration; // offset 0x1AE8, size 0x4, align 4
    bool m_bShowOverhead; // offset 0x1AEC, size 0x1, align 1
    char _pad_1AED[0x3]; // offset 0x1AED
};
