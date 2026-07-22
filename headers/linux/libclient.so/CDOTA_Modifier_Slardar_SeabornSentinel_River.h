#pragma once

class CDOTA_Modifier_Slardar_SeabornSentinel_River : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 river_speed; // offset 0x1A58, size 0x4, align 4
    float32 puddle_regen; // offset 0x1A5C, size 0x4, align 4
    float32 puddle_armor; // offset 0x1A60, size 0x4, align 4
    int32 puddle_status_resistance; // offset 0x1A64, size 0x4, align 4
    float32 river_damage_pct; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
