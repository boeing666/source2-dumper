#pragma once

class CCitadel_Modifier_SalvoBullet : public CCitadel_Modifier_BaseBulletPreRollProc /*0x0*/  // sizeof 0x458, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x450]; // offset 0x0
    ShotID_t m_BuffedShotId; // offset 0x450, size 0x4, align 255
    char _pad_0454[0x4]; // offset 0x454
};
