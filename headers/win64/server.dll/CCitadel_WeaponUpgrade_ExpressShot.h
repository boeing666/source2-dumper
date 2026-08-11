#pragma once

class CCitadel_WeaponUpgrade_ExpressShot : public CCitadel_Item /*0x0*/  // sizeof 0x1228, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    int32 m_iShotsToCreate; // offset 0x11F8, size 0x4, align 4 | MNetworkEnable
    bool m_bIsInExpressShot; // offset 0x11FC, size 0x1, align 1 | MNetworkEnable
    char _pad_11FD[0x3]; // offset 0x11FD
    GameTime_t m_tNextShotTime; // offset 0x1200, size 0x4, align 255
    char _pad_1204[0x1C]; // offset 0x1204
    bool m_bIsPrimaryProc; // offset 0x1220, size 0x1, align 1
    char _pad_1221[0x7]; // offset 0x1221
};
