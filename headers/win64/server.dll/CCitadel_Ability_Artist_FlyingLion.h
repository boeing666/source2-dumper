#pragma once

class CCitadel_Ability_Artist_FlyingLion : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1CF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A4]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x14A4, size 0x4, align 255
    char _pad_14A8[0x840]; // offset 0x14A8
    bool m_bFlying; // offset 0x1CE8, size 0x1, align 1
    char _pad_1CE9[0x7]; // offset 0x1CE9
};
