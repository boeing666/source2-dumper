#pragma once

class CDOTA_Modifier_Item_TranquilBoots : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x1A58, size 0x4, align 4
    int32 broken_movement_speed; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_armor; // offset 0x1A60, size 0x4, align 4
    int32 bonus_health_regen; // offset 0x1A64, size 0x4, align 4
    int32 break_threshold; // offset 0x1A68, size 0x4, align 4
    int32 break_time; // offset 0x1A6C, size 0x4, align 4
    int32 break_count; // offset 0x1A70, size 0x4, align 4
    float32 m_flResetTime; // offset 0x1A74, size 0x4, align 4
};
