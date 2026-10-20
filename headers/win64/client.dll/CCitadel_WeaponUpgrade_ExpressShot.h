#pragma once

class CCitadel_WeaponUpgrade_ExpressShot : public CCitadel_Item /*0x0*/  // sizeof 0x1A80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A50]; // offset 0x0
    int32 m_iShotsToCreate; // offset 0x1A50, size 0x4, align 4
    bool m_bIsInExpressShot; // offset 0x1A54, size 0x1, align 1
    bool m_bProcShotCharged; // offset 0x1A55, size 0x1, align 1
    char _pad_1A56[0x2]; // offset 0x1A56
    float32 m_flProcChargeBonusDamage; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_tNextShotTime; // offset 0x1A5C, size 0x4, align 255
    char _pad_1A60[0x18]; // offset 0x1A60
    bool m_bIsPrimaryProc; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x7]; // offset 0x1A79
};
