#pragma once

class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x130, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CHandle< C_BasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch; // offset 0x48, size 0x4, align 4
    bool m_bIsRescuing; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // offset 0x50, size 0x70, align 255
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // offset 0xC0, size 0x70, align 255
};
