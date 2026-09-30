#pragma once

class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility /*0x0*/  // sizeof 0x1D80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1930]; // offset 0x0
    ELashGrappleState m_EGrappleState; // offset 0x1930, size 0x1, align 1
    char _pad_1931[0x3]; // offset 0x1931
    GameTime_t m_flStateEnterTime; // offset 0x1934, size 0x4, align 255
    GameTime_t m_flNextStateTime; // offset 0x1938, size 0x4, align 255
    GameTime_t m_flBoostEndTime; // offset 0x193C, size 0x4, align 255
    char _pad_1940[0x440]; // offset 0x1940
};
