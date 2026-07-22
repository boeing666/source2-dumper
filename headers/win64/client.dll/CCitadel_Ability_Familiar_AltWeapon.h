#pragma once

class CCitadel_Ability_Familiar_AltWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x15D8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x15D0]; // offset 0x0
    int16 m_nAmmoToBeConsumedForChannel; // offset 0x15D0, size 0x2, align 2 | MNetworkEnable
    bool m_bForceFiring; // offset 0x15D2, size 0x1, align 1 | MNetworkEnable
    char _pad_15D3[0x5]; // offset 0x15D3
};
