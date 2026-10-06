#pragma once

class CCitadel_Modifier_PunkgoatPull : public CCitadelModifier /*0x0*/  // sizeof 0x410, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    VectorWS m_vPullToLocation; // offset 0x138, size 0xC, align 4
    bool m_bAllowTrackTarget; // offset 0x144, size 0x1, align 1
    char _pad_0145[0x3]; // offset 0x145
    float32 m_flCurrentVerticalSpeed; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x2C4]; // offset 0x14C
};
