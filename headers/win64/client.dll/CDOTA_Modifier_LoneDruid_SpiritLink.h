#pragma once

class CDOTA_Modifier_LoneDruid_SpiritLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_movement_speed_druid; // offset 0x1A58, size 0x4, align 4
    int32 bonus_movement_speed_bear; // offset 0x1A5C, size 0x4, align 4
    int32 lifesteal_percent; // offset 0x1A60, size 0x4, align 4
    int32 creep_lifesteal_penalty; // offset 0x1A64, size 0x4, align 4
    int32 armor; // offset 0x1A68, size 0x4, align 4
    int32 active_bonus; // offset 0x1A6C, size 0x4, align 4
    int32 lifesteal_both_ways; // offset 0x1A70, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A74, size 0x4, align 4
};
