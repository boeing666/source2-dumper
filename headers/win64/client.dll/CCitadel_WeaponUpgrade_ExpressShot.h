#pragma once

class CCitadel_WeaponUpgrade_ExpressShot : public CCitadel_Item /*0x0*/  // sizeof 0x1488, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1458]; // offset 0x0
    int32 m_iShotsToCreate; // offset 0x1458, size 0x4, align 4 | MNetworkEnable
    bool m_bIsInExpressShot; // offset 0x145C, size 0x1, align 1 | MNetworkEnable
    char _pad_145D[0x3]; // offset 0x145D
    GameTime_t m_tNextShotTime; // offset 0x1460, size 0x4, align 255
    char _pad_1464[0x1C]; // offset 0x1464
    bool m_bIsPrimaryProc; // offset 0x1480, size 0x1, align 1
    char _pad_1481[0x7]; // offset 0x1481
};
