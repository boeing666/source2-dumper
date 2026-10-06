#pragma once

class CCitadel_Modifier_EldritchShot : public CCitadel_Modifier_BaseBulletPreRollProc /*0x0*/  // sizeof 0x508, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    ShotID_t m_BuffedShotId; // offset 0x500, size 0x4, align 255
    char _pad_0504[0x4]; // offset 0x504
};
