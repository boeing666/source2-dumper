#pragma once

class CCitadel_Ability_Artist_FlyingLion : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E4]; // offset 0x0
    GameTime_t m_flFlyingStartTime; // offset 0x16E4, size 0x4, align 255
    char _pad_16E8[0x840]; // offset 0x16E8
    bool m_bFlying; // offset 0x1F28, size 0x1, align 1
    char _pad_1F29[0x7]; // offset 0x1F29
};
