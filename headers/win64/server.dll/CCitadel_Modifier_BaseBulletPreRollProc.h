#pragma once

class CCitadel_Modifier_BaseBulletPreRollProc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x308, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x2E8]; // offset 0x0
    ShotID_t m_nSuppressProcShotID; // offset 0x2E8, size 0x4, align 255
    char _pad_02EC[0x4]; // offset 0x2EC
    CUtlVector< BulletID_t > m_vecProcdBulletIDs; // offset 0x2F0, size 0x18, align 8
};
