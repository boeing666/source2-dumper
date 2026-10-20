#pragma once

class CCitadel_Modifier_EldritchShot : public CCitadel_Modifier_BaseBulletPreRollProc /*0x0*/  // sizeof 0x528, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x308]; // offset 0x0
    ShotID_t m_shotID; // offset 0x308, size 0x4, align 255
    char _pad_030C[0x214]; // offset 0x30C
    ShotID_t m_BuffedShotId; // offset 0x520, size 0x4, align 255
    char _pad_0524[0x4]; // offset 0x524
};
