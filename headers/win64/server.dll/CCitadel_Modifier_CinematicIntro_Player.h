#pragma once

class CCitadel_Modifier_CinematicIntro_Player : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bFirstFrame; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x7]; // offset 0xD1
    CameraEntityOverride_t m_override; // offset 0xD8, size 0x10, align 8
};
