#pragma once

class CCitadel_WeaponUpgrade_SplitShot : public CCitadel_Item /*0x0*/  // sizeof 0x1950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ShotID_t m_nLastShotID; // offset 0x14A8, size 0x4, align 255
    ShotID_t m_nLastHitShotID; // offset 0x14AC, size 0x4, align 255
    int32 m_nWpnBatchCount; // offset 0x14B0, size 0x4, align 4
    char _pad_14B4[0x6C]; // offset 0x14B4
    ShotID_t m_nLastBulletHitShotID; // offset 0x1520, size 0x4, align 255
    int32 m_nLastBulletHitCount; // offset 0x1524, size 0x4, align 4
    CHandle< CBaseEntity > m_eLastBulletHitEnt; // offset 0x1528, size 0x4, align 4
    bool m_bSplitShotActive; // offset 0x152C, size 0x1, align 1
    char _pad_152D[0x423]; // offset 0x152D
};
