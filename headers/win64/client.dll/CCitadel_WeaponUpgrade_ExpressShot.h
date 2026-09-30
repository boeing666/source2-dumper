#pragma once

class CCitadel_WeaponUpgrade_ExpressShot : public CCitadel_Item /*0x0*/  // sizeof 0x1A78, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A48]; // offset 0x0
    int32 m_iShotsToCreate; // offset 0x1A48, size 0x4, align 4
    bool m_bIsInExpressShot; // offset 0x1A4C, size 0x1, align 1
    bool m_bProcShotCharged; // offset 0x1A4D, size 0x1, align 1
    char _pad_1A4E[0x2]; // offset 0x1A4E
    float32 m_flProcChargeBonusDamage; // offset 0x1A50, size 0x4, align 4
    GameTime_t m_tNextShotTime; // offset 0x1A54, size 0x4, align 255
    char _pad_1A58[0x18]; // offset 0x1A58
    bool m_bIsPrimaryProc; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
