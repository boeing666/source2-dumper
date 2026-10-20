#pragma once

class CCitadel_Ability_Artist_FlyingLion : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1CF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x14AC, size 0x4, align 255
    char _pad_14B0[0x840]; // offset 0x14B0
    bool m_bFlying; // offset 0x1CF0, size 0x1, align 1
    char _pad_1CF1[0x7]; // offset 0x1CF1
};
