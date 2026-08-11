#pragma once

class CPlayer_WeaponServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0xB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > > m_hMyWeapons; // offset 0x48, size 0x18, align 8
    CHandle< CBasePlayerWeapon > m_hActiveWeapon; // offset 0x60, size 0x4, align 4
    CHandle< CBasePlayerWeapon > m_hLastWeapon; // offset 0x64, size 0x4, align 4
    uint16[32] m_iAmmo; // offset 0x68, size 0x40, align 2
    bool m_bPreventWeaponPickup; // offset 0xA8, size 0x1, align 1
    char _pad_00A9[0x7]; // offset 0xA9
};
