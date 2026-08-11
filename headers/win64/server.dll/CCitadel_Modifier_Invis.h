#pragma once

class CCitadel_Modifier_Invis : public CCitadelModifier /*0x0*/  // sizeof 0x468, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x450]; // offset 0x0
    bool m_bInvis; // offset 0x450, size 0x1, align 1
    char _pad_0451[0x3]; // offset 0x451
    GameTime_t m_flStartInvisTime; // offset 0x454, size 0x4, align 255
    bool m_bFullyInvis; // offset 0x458, size 0x1, align 1
    char _pad_0459[0x3]; // offset 0x459
    GameTime_t m_flLastDamageTaken; // offset 0x45C, size 0x4, align 255
    GameTime_t m_flLastSpotted; // offset 0x460, size 0x4, align 255
    char _pad_0464[0x4]; // offset 0x464
};
