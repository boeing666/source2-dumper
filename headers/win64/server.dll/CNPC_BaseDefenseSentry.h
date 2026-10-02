#pragma once

class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xCB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC88]; // offset 0x0
    float32 m_flAttackCone; // offset 0xC88, size 0x4, align 4
    float32 m_flAttackDelay; // offset 0xC8C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastAlertSound; // offset 0xC90, size 0x4, align 255 | MNotSaved
    char _pad_0C94[0x4]; // offset 0xC94
    int16 m_nSentryLevel; // offset 0xC98, size 0x2, align 2
    char _pad_0C9A[0x2]; // offset 0xC9A
    Vector m_vecForward; // offset 0xC9C, size 0xC, align 4
    char _pad_0CA8[0x8]; // offset 0xCA8
};
