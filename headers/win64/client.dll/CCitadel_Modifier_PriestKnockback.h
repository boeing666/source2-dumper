#pragma once

class CCitadel_Modifier_PriestKnockback : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    GameTime_t m_StartTime; // offset 0xC0, size 0x4, align 255
    Vector m_vecPushDirection; // offset 0xC4, size 0xC, align 4
    Vector m_vecFinalPosition; // offset 0xD0, size 0xC, align 4
    char _pad_00DC[0x84]; // offset 0xDC
};
