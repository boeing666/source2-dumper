#pragma once

class CDOTA_Modifier_Dawnbreaker_Luminosity : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    int32 attack_count; // offset 0x1A7C, size 0x4, align 4
    bool triggered_by_celestial_hammer; // offset 0x1A80, size 0x1, align 1
    bool m_bShouldIncrement; // offset 0x1A81, size 0x1, align 1
    char _pad_1A82[0x2]; // offset 0x1A82
    int32 m_nStackCount; // offset 0x1A84, size 0x4, align 4
};
