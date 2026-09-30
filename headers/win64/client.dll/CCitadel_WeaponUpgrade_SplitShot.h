#pragma once

class CCitadel_WeaponUpgrade_SplitShot : public CCitadel_Item /*0x0*/  // sizeof 0x1B80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    ShotID_t m_nLastShotID; // offset 0x16D8, size 0x4, align 255
    ShotID_t m_nLastHitShotID; // offset 0x16DC, size 0x4, align 255
    int32 m_nWpnBatchCount; // offset 0x16E0, size 0x4, align 4
    char _pad_16E4[0x6C]; // offset 0x16E4
    ShotID_t m_nLastBulletHitShotID; // offset 0x1750, size 0x4, align 255
    int32 m_nLastBulletHitCount; // offset 0x1754, size 0x4, align 4
    CHandle< C_BaseEntity > m_eLastBulletHitEnt; // offset 0x1758, size 0x4, align 4
    bool m_bSplitShotActive; // offset 0x175C, size 0x1, align 1
    char _pad_175D[0x423]; // offset 0x175D
};
