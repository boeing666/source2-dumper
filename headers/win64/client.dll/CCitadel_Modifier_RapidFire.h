#pragma once

class CCitadel_Modifier_RapidFire : public CCitadelModifier /*0x0*/  // sizeof 0x3C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x3C0]; // offset 0x0
    GameTime_t m_flNextAttackTime; // offset 0x3C0, size 0x4, align 255
    char _pad_03C4[0x4]; // offset 0x3C4
};
