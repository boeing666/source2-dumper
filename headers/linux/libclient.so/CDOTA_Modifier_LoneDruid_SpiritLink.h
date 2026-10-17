#pragma once

class CDOTA_Modifier_LoneDruid_SpiritLink : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_movement_speed_druid; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_movement_speed_bear; // offset 0x1AAC, size 0x4, align 4
    int32 lifesteal_percent; // offset 0x1AB0, size 0x4, align 4
    int32 creep_lifesteal_penalty; // offset 0x1AB4, size 0x4, align 4
    int32 armor; // offset 0x1AB8, size 0x4, align 4
    int32 active_bonus; // offset 0x1ABC, size 0x4, align 4
    int32 lifesteal_both_ways; // offset 0x1AC0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AC4, size 0x4, align 4
};
