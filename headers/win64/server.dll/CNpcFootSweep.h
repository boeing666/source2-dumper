#pragma once

class CNpcFootSweep : public CBaseTrigger /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlVector< FootSweepPusher_t > m_vecPushers; // offset 0x9F0, size 0x18, align 8
    bool m_bUseCenterPusher; // offset 0xA08, size 0x1, align 1
    bool m_bUseForwardPusher; // offset 0xA09, size 0x1, align 1
    char _pad_0A0A[0x6]; // offset 0xA0A
};
