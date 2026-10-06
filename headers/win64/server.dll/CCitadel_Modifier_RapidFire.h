#pragma once

class CCitadel_Modifier_RapidFire : public CCitadelModifier /*0x0*/  // sizeof 0x570, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x568]; // offset 0x0
    GameTime_t m_flNextAttackTime; // offset 0x568, size 0x4, align 255
    char _pad_056C[0x4]; // offset 0x56C
};
