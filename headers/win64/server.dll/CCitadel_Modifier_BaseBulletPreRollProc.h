#pragma once

class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x2F8, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x2D8]; // offset 0x0
    ShotID_t m_nSuppressProcShotID; // offset 0x2D8, size 0x4, align 255
    char _pad_02DC[0x4]; // offset 0x2DC
    CUtlVector< BulletID_t > m_vecProcdBulletIDs; // offset 0x2E0, size 0x18, align 8
};
