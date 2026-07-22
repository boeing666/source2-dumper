#pragma once

class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x218, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    ShotID_t m_nSuppressProcShotID; // offset 0x1F8, size 0x4, align 255
    char _pad_01FC[0x4]; // offset 0x1FC
    CUtlVector< BulletID_t > m_vecProcdBulletIDs; // offset 0x200, size 0x18, align 8
};
