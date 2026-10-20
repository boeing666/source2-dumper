#pragma once

class CCitadel_Modifier_Basic_DOT : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    GameTime_t m_flLastDamageTime; // offset 0x150, size 0x4, align 255
    float32 m_flSnapShotDPS; // offset 0x154, size 0x4, align 4
};
