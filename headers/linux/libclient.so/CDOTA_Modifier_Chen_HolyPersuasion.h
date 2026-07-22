#pragma once

class CDOTA_Modifier_Chen_HolyPersuasion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 health_min; // offset 0x1A58, size 0x4, align 4
    int32 damage_bonus; // offset 0x1A5C, size 0x4, align 4
    int32 movement_speed_bonus; // offset 0x1A60, size 0x4, align 4
    float32 unsummon_time; // offset 0x1A64, size 0x4, align 4
    bool m_bCanBeUnsummoned; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x7]; // offset 0x1A69
};
