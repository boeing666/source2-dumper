#pragma once

class CCitadel_Modifier_CinematicIntro_Player : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bFirstFrame; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x7]; // offset 0x151
    CameraEntityOverride_t m_override; // offset 0x158, size 0x10, align 8
};
