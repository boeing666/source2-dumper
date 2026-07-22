#pragma once

class CDOTA_Modifier_Dawnbreaker_Luminosity : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    int32 attack_count; // offset 0x1A5C, size 0x4, align 4
    bool triggered_by_celestial_hammer; // offset 0x1A60, size 0x1, align 1
    bool m_bShouldIncrement; // offset 0x1A61, size 0x1, align 1
    char _pad_1A62[0x2]; // offset 0x1A62
    int32 m_nStackCount; // offset 0x1A64, size 0x4, align 4
};
