#pragma once

class CDOTA_Modifier_Gyrocopter_Afterburner : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bonus_movement_speed_per_hit; // offset 0x1A58, size 0x4, align 4
    float32 bonus_movement_speed_per_hit_creep; // offset 0x1A5C, size 0x4, align 4
    float32 bonus_movespeed_duration; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x1C]; // offset 0x1A64
    float32 m_flStacksFloat; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
