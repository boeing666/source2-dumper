#pragma once

class CCitadel_Ability_Familiar_AltWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BA0]; // offset 0x0
    int16 m_nAmmoToBeConsumedForChannel; // offset 0x1BA0, size 0x2, align 2
    bool m_bForceFiring; // offset 0x1BA2, size 0x1, align 1
    char _pad_1BA3[0x5]; // offset 0x1BA3
};
