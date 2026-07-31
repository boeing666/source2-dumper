#pragma once

class CDOTA_Modifier_Snapfire_SpitCreep_ArcingUnit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 min_range; // offset 0x1A78, size 0x4, align 4
    float32 min_lob_travel_time; // offset 0x1A7C, size 0x4, align 4
    float32 max_lob_travel_time; // offset 0x1A80, size 0x4, align 4
    float32 impact_radius; // offset 0x1A84, size 0x4, align 4
    float32 projectile_vision; // offset 0x1A88, size 0x4, align 4
    float32 stun_duration; // offset 0x1A8C, size 0x4, align 4
    float32 min_height_above_lowest; // offset 0x1A90, size 0x4, align 4
    float32 min_height_above_highest; // offset 0x1A94, size 0x4, align 4
    float32 min_acceleration; // offset 0x1A98, size 0x4, align 4
    float32 max_acceleration; // offset 0x1A9C, size 0x4, align 4
};
