#pragma once

class CCitadel_WeaponUpgrade_ExpressShot : public CCitadel_Item /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    int32 m_iShotsToCreate; // offset 0x1818, size 0x4, align 4
    bool m_bIsInExpressShot; // offset 0x181C, size 0x1, align 1
    bool m_bProcShotCharged; // offset 0x181D, size 0x1, align 1
    char _pad_181E[0x2]; // offset 0x181E
    float32 m_flProcChargeBonusDamage; // offset 0x1820, size 0x4, align 4
    GameTime_t m_tNextShotTime; // offset 0x1824, size 0x4, align 255
    char _pad_1828[0x18]; // offset 0x1828
    bool m_bIsPrimaryProc; // offset 0x1840, size 0x1, align 1
    char _pad_1841[0x7]; // offset 0x1841
};
