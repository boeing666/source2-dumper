#pragma once

class CCitadel_Modifier_ChargedBomb : public CCitadelModifier /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flNextBeep; // offset 0x140, size 0x4, align 255
    float32 m_flBeepInterval; // offset 0x144, size 0x4, align 4
    char _pad_0148[0xB0]; // offset 0x148
};
