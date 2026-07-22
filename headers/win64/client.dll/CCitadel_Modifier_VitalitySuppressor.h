#pragma once

class CCitadel_Modifier_VitalitySuppressor : public CCitadelModifier /*0x0*/  // sizeof 0x1C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    GameTime_t m_flLastTickTime; // offset 0xC0, size 0x4, align 255
    char _pad_00C4[0x104]; // offset 0xC4
};
