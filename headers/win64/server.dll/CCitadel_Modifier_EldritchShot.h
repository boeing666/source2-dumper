#pragma once

class CCitadel_Modifier_EldritchShot : public CCitadel_Modifier_BaseBulletPreRollProc /*0x0*/  // sizeof 0x3B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x228]; // offset 0x0
    ShotID_t m_shotID; // offset 0x228, size 0x4, align 255
    char _pad_022C[0x184]; // offset 0x22C
    ShotID_t m_BuffedShotId; // offset 0x3B0, size 0x4, align 255
    char _pad_03B4[0x4]; // offset 0x3B4
};
