#pragma once

class CCitadel_Ability_FireBomb : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1978]; // offset 0x0
    CCitadelAutoScaledTime m_flDetonateTime; // offset 0x1978, size 0x18, align 255
    GameTime_t m_flStartTime; // offset 0x1990, size 0x4, align 255
    char _pad_1994[0x4]; // offset 0x1994
};
