#pragma once

class CCitadel_Ability_PrimaryWeapon_Bebop : public CCitadel_Ability_PrimaryWeapon_BeamWeapon /*0x0*/  // sizeof 0x17B8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1518]; // offset 0x0
    GameTime_t m_flStartWindUpTime; // offset 0x1518, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStartFiringTime; // offset 0x151C, size 0x4, align 255 | MNetworkEnable
    bool m_bFiring; // offset 0x1520, size 0x1, align 1 | MNetworkEnable
    char _pad_1521[0x297]; // offset 0x1521
};
