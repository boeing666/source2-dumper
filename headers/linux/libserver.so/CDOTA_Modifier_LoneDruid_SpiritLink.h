#pragma once

class CDOTA_Modifier_LoneDruid_SpiritLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_movement_speed_druid; // offset 0x1A78, size 0x4, align 4
    int32 bonus_movement_speed_bear; // offset 0x1A7C, size 0x4, align 4
    int32 lifesteal_percent; // offset 0x1A80, size 0x4, align 4
    int32 creep_lifesteal_penalty; // offset 0x1A84, size 0x4, align 4
    int32 armor; // offset 0x1A88, size 0x4, align 4
    int32 active_bonus; // offset 0x1A8C, size 0x4, align 4
    int32 lifesteal_both_ways; // offset 0x1A90, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A94, size 0x4, align 4
};
