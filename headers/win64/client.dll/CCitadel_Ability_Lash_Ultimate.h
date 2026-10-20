#pragma once

class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility /*0x0*/  // sizeof 0x1FB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B7A]; // offset 0x0
    ELashGrappleState m_EGrappleState; // offset 0x1B7A, size 0x1, align 1
    char _pad_1B7B[0x1]; // offset 0x1B7B
    GameTime_t m_flStateEnterTime; // offset 0x1B7C, size 0x4, align 255
    GameTime_t m_flNextStateTime; // offset 0x1B80, size 0x4, align 255
    GameTime_t m_flBoostEndTime; // offset 0x1B84, size 0x4, align 255
    char _pad_1B88[0x428]; // offset 0x1B88
};
