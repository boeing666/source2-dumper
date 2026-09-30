#pragma once

class CCitadel_Modifier_PunkgoatPull : public CCitadelModifier /*0x0*/  // sizeof 0x408, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    VectorWS m_vPullToLocation; // offset 0x130, size 0xC, align 4
    bool m_bAllowTrackTarget; // offset 0x13C, size 0x1, align 1
    char _pad_013D[0x3]; // offset 0x13D
    float32 m_flCurrentVerticalSpeed; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x2C4]; // offset 0x144
};
