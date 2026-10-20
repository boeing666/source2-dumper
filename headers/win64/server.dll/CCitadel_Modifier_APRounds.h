#pragma once

class CCitadel_Modifier_APRounds : public CCitadel_Modifier_BaseBulletPreRollProc /*0x0*/  // sizeof 0x310, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x308]; // offset 0x0
    ShotID_t m_nLastProcShotID; // offset 0x308, size 0x4, align 255
    char _pad_030C[0x4]; // offset 0x30C
};
