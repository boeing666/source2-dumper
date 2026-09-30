#pragma once

class CPlayer_WeaponServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0xA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BasePlayerWeapon > > m_hMyWeapons; // offset 0x48, size 0x18, align 8
    CHandle< C_BasePlayerWeapon > m_hActiveWeapon; // offset 0x60, size 0x4, align 4
    CHandle< C_BasePlayerWeapon > m_hLastWeapon; // offset 0x64, size 0x4, align 4
    uint16[32] m_iAmmo; // offset 0x68, size 0x40, align 2
};
