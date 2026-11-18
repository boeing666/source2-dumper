#pragma once

class CDOTA_Modifier_Dawnbreaker_Luminosity : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    bool m_bAppliesToCreeps; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x3]; // offset 0x1AF9
    int32 attack_count; // offset 0x1AFC, size 0x4, align 4
    bool triggered_by_celestial_hammer; // offset 0x1B00, size 0x1, align 1
    bool m_bShouldIncrement; // offset 0x1B01, size 0x1, align 1
    char _pad_1B02[0x2]; // offset 0x1B02
    int32 m_nStackCount; // offset 0x1B04, size 0x4, align 4
};
