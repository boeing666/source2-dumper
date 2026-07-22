#pragma once

class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon /*0x0*/  // sizeof 0x1AF8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1858]; // offset 0x0
    GameTime_t m_flStartWindUpTime; // offset 0x1858, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStartFiringTime; // offset 0x185C, size 0x4, align 255 | MNetworkEnable
    bool m_bFiring; // offset 0x1860, size 0x1, align 1 | MNetworkEnable
    char _pad_1861[0x297]; // offset 0x1861
};
