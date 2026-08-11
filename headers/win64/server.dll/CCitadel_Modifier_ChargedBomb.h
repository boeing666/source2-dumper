#pragma once

class CCitadel_Modifier_ChargedBomb : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    GameTime_t m_flNextBeep; // offset 0xD0, size 0x4, align 255
    float32 m_flBeepInterval; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x80]; // offset 0xD8
};
