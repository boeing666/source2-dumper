#pragma once

class CCitadel_Modifier_Invis : public CCitadelModifier /*0x0*/  // sizeof 0x630, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x618]; // offset 0x0
    bool m_bInvis; // offset 0x618, size 0x1, align 1
    char _pad_0619[0x3]; // offset 0x619
    GameTime_t m_flStartInvisTime; // offset 0x61C, size 0x4, align 255
    bool m_bFullyInvis; // offset 0x620, size 0x1, align 1
    char _pad_0621[0x3]; // offset 0x621
    GameTime_t m_flLastDamageTaken; // offset 0x624, size 0x4, align 255
    GameTime_t m_flLastSpotted; // offset 0x628, size 0x4, align 255
    char _pad_062C[0x4]; // offset 0x62C
};
