#pragma once

class CCitadel_Ability_Familiar_AltWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1340, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1338]; // offset 0x0
    int16 m_nAmmoToBeConsumedForChannel; // offset 0x1338, size 0x2, align 2 | MNetworkEnable
    bool m_bForceFiring; // offset 0x133A, size 0x1, align 1 | MNetworkEnable
    char _pad_133B[0x5]; // offset 0x133B
};
