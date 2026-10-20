#pragma once

class CCitadel_Ability_FireBomb : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1848]; // offset 0x0
    CCitadelAutoScaledTime m_flDetonateTime; // offset 0x1848, size 0x18, align 255
    GameTime_t m_flStartTime; // offset 0x1860, size 0x4, align 255
    char _pad_1864[0x4]; // offset 0x1864
};
