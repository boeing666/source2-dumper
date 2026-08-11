#pragma once

class CCitadel_WeaponUpgrade_SplitShot : public CCitadel_Item /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    ShotID_t m_nLastShotID; // offset 0xF78, size 0x4, align 255
    ShotID_t m_nLastHitShotID; // offset 0xF7C, size 0x4, align 255
    int32 m_nWpnBatchCount; // offset 0xF80, size 0x4, align 4
    char _pad_0F84[0x6C]; // offset 0xF84
    ShotID_t m_nLastBulletHitShotID; // offset 0xFF0, size 0x4, align 255
    int32 m_nLastBulletHitCount; // offset 0xFF4, size 0x4, align 4
    CHandle< CBaseEntity > m_eLastBulletHitEnt; // offset 0xFF8, size 0x4, align 4
    bool m_bSplitShotActive; // offset 0xFFC, size 0x1, align 1 | MNetworkEnable
    char _pad_0FFD[0x303]; // offset 0xFFD
};
