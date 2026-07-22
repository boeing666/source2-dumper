#pragma once

class CDOTA_Modifier_Razor_EyeOfTheStorm_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 passive_area_damage; // offset 0x1A58, size 0x4, align 4
    float32 passive_area_interval; // offset 0x1A5C, size 0x4, align 4
    int32 radius; // offset 0x1A60, size 0x4, align 4
    bool m_bHitNext; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
};
