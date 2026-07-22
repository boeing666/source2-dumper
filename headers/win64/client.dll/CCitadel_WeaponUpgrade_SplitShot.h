#pragma once

class CCitadel_WeaponUpgrade_SplitShot : public CCitadel_Item /*0x0*/  // sizeof 0x1560, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    ShotID_t m_nLastShotID; // offset 0x11D8, size 0x4, align 255
    ShotID_t m_nLastHitShotID; // offset 0x11DC, size 0x4, align 255
    int32 m_nWpnBatchCount; // offset 0x11E0, size 0x4, align 4
    char _pad_11E4[0x6C]; // offset 0x11E4
    ShotID_t m_nLastBulletHitShotID; // offset 0x1250, size 0x4, align 255
    int32 m_nLastBulletHitCount; // offset 0x1254, size 0x4, align 4
    CHandle< C_BaseEntity > m_eLastBulletHitEnt; // offset 0x1258, size 0x4, align 4
    bool m_bSplitShotActive; // offset 0x125C, size 0x1, align 1 | MNetworkEnable
    char _pad_125D[0x303]; // offset 0x125D
};
