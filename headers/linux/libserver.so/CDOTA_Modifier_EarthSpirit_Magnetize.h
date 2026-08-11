#pragma once

class CDOTA_Modifier_EarthSpirit_Magnetize : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 rock_search_radius; // offset 0x1A78, size 0x4, align 4
    float32 damage_per_second; // offset 0x1A7C, size 0x4, align 4
    float32 damage_interval; // offset 0x1A80, size 0x4, align 4
    float32 rock_explosion_delay; // offset 0x1A84, size 0x4, align 4
    float32 damage_duration; // offset 0x1A88, size 0x4, align 4
    float32 cast_radius; // offset 0x1A8C, size 0x4, align 4
    float32 rock_explosion_radius; // offset 0x1A90, size 0x4, align 4
    bool magnetized_rocks_buff_self; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    int32 magnetized_rocks_buff_self_duration; // offset 0x1A98, size 0x4, align 4
    int32 magnetize_self; // offset 0x1A9C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hExplodedRocks; // offset 0x1AA0, size 0x18, align 8
    float32 duration; // offset 0x1AB8, size 0x4, align 4
    bool m_bShowOverhead; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
};
