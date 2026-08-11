#pragma once

class CCitadel_Modifier_Trapper_SpiderShield : public CCitadelModifier /*0x0*/  // sizeof 0x360, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    GameTime_t m_flNextPulseTime; // offset 0xD8, size 0x4, align 255
    char _pad_00DC[0x284]; // offset 0xDC
};
