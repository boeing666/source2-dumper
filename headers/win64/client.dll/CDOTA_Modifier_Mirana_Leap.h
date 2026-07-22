#pragma once

class CDOTA_Modifier_Mirana_Leap : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 leap_distance; // offset 0x1A58, size 0x4, align 4
    float32 leap_speed; // offset 0x1A5C, size 0x4, align 4
    float32 leap_acceleration; // offset 0x1A60, size 0x4, align 4
    int32 leap_radius; // offset 0x1A64, size 0x4, align 4
    float32 leap_bonus_duration; // offset 0x1A68, size 0x4, align 4
    bool m_bLaunched; // offset 0x1A6C, size 0x1, align 1
    char _pad_1A6D[0x3]; // offset 0x1A6D
};
