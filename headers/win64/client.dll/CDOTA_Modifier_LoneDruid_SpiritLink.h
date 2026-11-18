#pragma once

class CDOTA_Modifier_LoneDruid_SpiritLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_movement_speed_druid; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_movement_speed_bear; // offset 0x1AFC, size 0x4, align 4
    int32 lifesteal_percent; // offset 0x1B00, size 0x4, align 4
    int32 creep_lifesteal_penalty; // offset 0x1B04, size 0x4, align 4
    int32 armor; // offset 0x1B08, size 0x4, align 4
    int32 active_bonus; // offset 0x1B0C, size 0x4, align 4
    int32 lifesteal_both_ways; // offset 0x1B10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1B14, size 0x4, align 4
};
