#pragma once

class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1D80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AE0]; // offset 0x0
    GameTime_t m_flStartWindUpTime; // offset 0x1AE0, size 0x4, align 255
    GameTime_t m_flStartFiringTime; // offset 0x1AE4, size 0x4, align 255
    bool m_bFiring; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x297]; // offset 0x1AE9
};
