#pragma once

class CCitadel_Modifier_CinematicIntro_Player : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bFirstFrame; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x7]; // offset 0xC1
    CameraEntityOverride_t m_override; // offset 0xC8, size 0x10, align 8
};
