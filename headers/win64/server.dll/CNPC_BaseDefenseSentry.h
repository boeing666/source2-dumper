#pragma once

class CNPC_BaseDefenseSentry : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC38]; // offset 0x0
    float32 m_flAttackCone; // offset 0xC38, size 0x4, align 4
    float32 m_flAttackDelay; // offset 0xC3C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastAlertSound; // offset 0xC40, size 0x4, align 255 | MNotSaved
    char _pad_0C44[0x4]; // offset 0xC44
    int16 m_nSentryLevel; // offset 0xC48, size 0x2, align 2
    char _pad_0C4A[0x2]; // offset 0xC4A
    Vector m_vecForward; // offset 0xC4C, size 0xC, align 4
    char _pad_0C58[0x8]; // offset 0xC58
};
