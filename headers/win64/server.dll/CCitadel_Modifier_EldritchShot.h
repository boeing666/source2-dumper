#pragma once

class CCitadel_Modifier_EldritchShot : public CCitadel_Modifier_BaseBulletPreRollProc /*0x0*/  // sizeof 0x518, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2F8]; // offset 0x0
    ShotID_t m_shotID; // offset 0x2F8, size 0x4, align 255
    char _pad_02FC[0x214]; // offset 0x2FC
    ShotID_t m_BuffedShotId; // offset 0x510, size 0x4, align 255
    char _pad_0514[0x4]; // offset 0x514
};
