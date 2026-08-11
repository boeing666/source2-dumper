#pragma once

class CCitadel_Modifier_PriestKnockback : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    GameTime_t m_StartTime; // offset 0xD0, size 0x4, align 255
    Vector m_vecPushDirection; // offset 0xD4, size 0xC, align 4
    Vector m_vecFinalPosition; // offset 0xE0, size 0xC, align 4
    char _pad_00EC[0x84]; // offset 0xEC
};
