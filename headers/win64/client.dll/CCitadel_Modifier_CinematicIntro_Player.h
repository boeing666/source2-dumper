#pragma once

class CCitadel_Modifier_CinematicIntro_Player : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bFirstFrame; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x7]; // offset 0x139
    CameraEntityOverride_t m_override; // offset 0x140, size 0x10, align 8
};
