#pragma once

class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 min_range; // offset 0x1A58, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1A5C, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1A60, size 0x4, align 4
    float32 impact_radius; // offset 0x1A64, size 0x4, align 4
    float32 projectile_vision; // offset 0x1A68, size 0x4, align 4
    float32 stun_duration; // offset 0x1A6C, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1A70, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1A74, size 0x4, align 4
    float32 min_acceleration; // offset 0x1A78, size 0x4, align 4
    float32 max_acceleration; // offset 0x1A7C, size 0x4, align 4
};
