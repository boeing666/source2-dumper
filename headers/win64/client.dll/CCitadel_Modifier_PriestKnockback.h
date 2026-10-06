#pragma once

class CCitadel_Modifier_PriestKnockback : public CCitadelModifier /*0x0*/  // sizeof 0x208, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    GameTime_t m_StartTime; // offset 0x138, size 0x4, align 255
    Vector m_vecPushDirection; // offset 0x13C, size 0xC, align 4
    Vector m_vecFinalPosition; // offset 0x148, size 0xC, align 4
    char _pad_0154[0xB4]; // offset 0x154
};
