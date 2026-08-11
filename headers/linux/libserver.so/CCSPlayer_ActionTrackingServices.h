#pragma once

class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x310, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    CHandle< CBasePlayerWeapon > m_hLastWeaponBeforeC4AutoSwitch; // offset 0x1F8, size 0x4, align 4
    char _pad_01FC[0x28]; // offset 0x1FC
    bool m_bIsRescuing; // offset 0x224, size 0x1, align 1
    char _pad_0225[0x3]; // offset 0x225
    WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // offset 0x228, size 0x70, align 255
    WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // offset 0x298, size 0x70, align 255
    char _pad_0308[0x8]; // offset 0x308
};
