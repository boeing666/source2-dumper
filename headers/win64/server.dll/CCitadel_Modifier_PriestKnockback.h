#pragma once

class CCitadel_Modifier_PriestKnockback : public CCitadelModifier /*0x0*/  // sizeof 0x220, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    GameTime_t m_StartTime; // offset 0x150, size 0x4, align 255
    Vector m_vecPushDirection; // offset 0x154, size 0xC, align 4
    Vector m_vecFinalPosition; // offset 0x160, size 0xC, align 4
    char _pad_016C[0xB4]; // offset 0x16C
};
