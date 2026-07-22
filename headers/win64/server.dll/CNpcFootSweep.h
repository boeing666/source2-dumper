#pragma once

class CNpcFootSweep : public CBaseTrigger /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlVector< FootSweepPusher_t > m_vecPushers; // offset 0x8E0, size 0x18, align 8
    bool m_bUseCenterPusher; // offset 0x8F8, size 0x1, align 1
    bool m_bUseForwardPusher; // offset 0x8F9, size 0x1, align 1
    char _pad_08FA[0x6]; // offset 0x8FA
};
