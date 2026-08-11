#pragma once

class CDOTA_Modifier_Razor_EyeOfTheStorm_Passive : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 passive_area_damage; // offset 0x1A78, size 0x4, align 4
    float32 passive_area_interval; // offset 0x1A7C, size 0x4, align 4
    int32 radius; // offset 0x1A80, size 0x4, align 4
    bool m_bHitNext; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
