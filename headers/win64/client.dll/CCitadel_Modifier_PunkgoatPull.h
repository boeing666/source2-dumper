#pragma once

class CCitadel_Modifier_PunkgoatPull : public CCitadelModifier /*0x0*/  // sizeof 0x2D8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    Vector m_vPullToLocation; // offset 0xC0, size 0xC, align 4
    bool m_bAllowTrackTarget; // offset 0xCC, size 0x1, align 1
    char _pad_00CD[0x3]; // offset 0xCD
    float32 m_flCurrentVerticalSpeed; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x204]; // offset 0xD4
};
