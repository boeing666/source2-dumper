#pragma once

class CCitadel_Modifier_RapidFire : public CCitadelModifier /*0x0*/  // sizeof 0x558, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x550]; // offset 0x0
    GameTime_t m_flNextAttackTime; // offset 0x550, size 0x4, align 255
    char _pad_0554[0x4]; // offset 0x554
};
