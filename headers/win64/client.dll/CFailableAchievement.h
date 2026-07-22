#pragma once

class CFailableAchievement : public CBaseAchievement /*0x0*/  // sizeof 0xC8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bActivated; // offset 0xC0, size 0x1, align 1
    bool m_bFailed; // offset 0xC1, size 0x1, align 1
    char _pad_00C2[0x6]; // offset 0xC2
};
